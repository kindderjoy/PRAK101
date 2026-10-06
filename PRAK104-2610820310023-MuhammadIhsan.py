hargaA = 400000
hargaB = 350000

diskonA = hargaA * 13 / 100
diskonB = hargaB * 21 / 100

hargaAakhir = hargaA - diskonA
hargaBakhir = hargaB - diskonB
    
print("Harga sepatu A adalah", hargaA)
print("Harga sepatu B adalah", hargaB)
print("Sepatu A mendapat diskon 13% sehingga harganya menjadi", int(hargaAakhir))
print("Sepatu A mendapat diskon 21% sehingga harganya menjadi", int(hargaBakhir))