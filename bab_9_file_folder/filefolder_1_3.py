import os

def create_folder(folder_name):
    try:
        # Membuat folder
        os.mkdir(folder_name)
        print(f"Folder '{folder_name}' berhasil dibuat.")
    except FileExistsError:
        print(f"Folder '{folder_name}' sudah ada.")
    except Exception as e:
        print(f"Gagal membuat folder: {e}")

# Panggil fungsi untuk membuat folder
folder_name = "Foldernya_Eko_Python"  # Nama folder yang ingin dibuat
create_folder(folder_name)
