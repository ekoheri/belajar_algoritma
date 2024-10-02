desimal = int(input("Angka desimal : "))
biner = ''
while(desimal > 0):
    biner = str(desimal % 2) + biner
    desimal = desimal // 2
print("Angka biner : "+biner)