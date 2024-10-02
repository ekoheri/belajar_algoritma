#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>
#include <sys/ioctl.h>

// Fungsi untuk menonaktifkan mode buffer terminal
void disable_buffering() {
    struct termios term;
    tcgetattr(0, &term);
    term.c_lflag &= ~ICANON;  // Non-canonical mode
    term.c_lflag &= ~ECHO;    // Disable echo
    tcsetattr(0, TCSANOW, &term);
}

// Fungsi untuk mengaktifkan kembali mode buffer terminal
void enable_buffering() {
    struct termios term;
    tcgetattr(0, &term);
    term.c_lflag |= ICANON;  // Canonical mode
    term.c_lflag |= ECHO;    // Enable echo
    tcsetattr(0, TCSANOW, &term);
}

// Fungsi untuk menangkap input tombol panah
int get_input() {
    int ch = getchar();
    if (ch == 27) { // Deteksi ESC (tombol panah)
        getchar(); // Skip '['
        ch = getchar();
        if (ch == 'A') return 1; // Panah atas
        if (ch == 'B') return 2; // Panah bawah
    }
    return ch; // Kembalikan karakter lain (termasuk Enter)
}

// Fungsi untuk menggambar kotak menu
void draw_box(int width, int height, int start_y, int start_x) {
   int i;

    // Garis atas
    printf("\033[%d;%dH╔", start_y, start_x);
    for (i = 0; i < width; i++) printf("═");
    printf("╗\n");

    // Garis samping
    for (i = 0; i < height; i++) {
        printf("\033[%d;%dH║", start_y + i + 1, start_x);
        for (int j = 0; j < width; j++) printf(" ");
        printf("║\n");
    }

    // Garis bawah
    printf("\033[%d;%dH╚", start_y + height + 1, start_x);
    for (i = 0; i < width; i++) printf("═");
    printf("╝\n");
}

// Fungsi untuk menampilkan heading aplikasi
void print_heading(char *heading_text, int terminal_width) {
    // Menghitung posisi untuk menempatkan heading di tengah
    int heading_length = strlen(heading_text);
    int start_x = (terminal_width - heading_length) / 2;

    // Warna biru tebal (ANSI code: \033[1;34m) diikuti oleh reset (\033[0m)
    printf("\033[1;34m");  // Teks tebal dan biru
    printf("\033[%d;%dH%s", 4, start_x, heading_text);  // Posisi heading di baris ke-2
    printf("\033[0m");  // Reset kembali ke warna normal
}

// Fungsi untuk menampilkan menu dan highlight opsi yang dipilih
void print_menu(int highlight, char *menu_items[], int n_items, int box_width, int start_y, int start_x) {
    int i;
    int x_offset;

    // Pindahkan kursor ke dalam kotak untuk menampilkan menu
    for (i = 0; i < n_items; i++) {
        // Hitung posisi untuk menempatkan menu di tengah
        x_offset = (box_width - strlen(menu_items[i]) - 3) / 2;  // 3 untuk panah dan spasi
        printf("\033[%d;%dH", start_y + i + 2, start_x + x_offset); // Atur posisi kursor di dalam kotak

        if (i == highlight) {
            printf(" ► %s", menu_items[i]); // Highlight opsi terpilih
        } else {
            printf("   %s", menu_items[i]);
        }
    }
}

int main() {
    char *menu_items[] = {"Data Buku", "Data Anggota", "Pinjam", "Kembali", "Exit"};
    int n_items = sizeof(menu_items) / sizeof(char *);
    int highlight = 0;
    int choice = 0;
    int input;

    // Nonaktifkan buffer terminal agar input langsung
    disable_buffering();

    // Mengambil ukuran terminal
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    int terminal_width = w.ws_col;
    int terminal_height = w.ws_row;

    // Ukuran kotak
    int box_width = 20;
    int box_height = n_items + 1;

    // Hitung posisi awal untuk kotak agar berada di tengah
    int start_x = (terminal_width - box_width) / 2;
    int start_y = (terminal_height - box_height - 3) / 2; // 3 untuk garis atas dan dua baris menu

    while (1) {
        system("clear");  // Bersihkan layar sebelum menggambar ulang
        // Tampilkan heading aplikasi
        print_heading("Aplikasi Perpustakaan", terminal_width);
        
        draw_box(box_width, box_height, start_y, start_x);  // Gambar kotak
        print_menu(highlight, menu_items, n_items, box_width, start_y, start_x);  // Tampilkan menu di dalam kotak

        input = get_input(); // Baca input

        if (input == 10) {  // Jika Enter ditekan
            choice = highlight;
            break;
        }

        switch (input) {
            case 1:  // Panah atas
                if (highlight > 0) highlight--;
                break;
            case 2:  // Panah bawah
                if (highlight < n_items - 1) highlight++;
                break;
            default:
                break;
        }
    }

    // Aktifkan kembali buffering terminal
    enable_buffering();

    // Output hasil pilihan dengan posisi yang benar
    printf("\n\nYou chose option %d: %s\n", choice + 1, menu_items[choice]); // Menambah dua newline

    return 0;
}
