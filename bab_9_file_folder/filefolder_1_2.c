#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main() {
    // Nama folder yang ingin dibuat
    char* folderName = "Foldernya_Eko_C"; 

    // Membuat folder dengan mode 0777 
    //(read/write/execute untuk user, group, dan pengguna lain)
    if (mkdir(folderName, 0777) == 0) {
        printf("Folder '%s' berhasil dibuat.\n", folderName);
    } else {
        perror("Gagal membuat folder");
        return 1;
    }

    return 0;
}
