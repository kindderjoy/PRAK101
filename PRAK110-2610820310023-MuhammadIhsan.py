import math

alas = 5
tinggi = 12

sisiC = math.sqrt(alas ** 2 + tinggi ** 2)
keliling = alas + tinggi + sisiC
luas = 0.5 * alas * tinggi

print("Diketahui :")
print("Alas =", alas, "cm")
print("Tinggi =", tinggi, "cm")
print("Jawab :")
print("Sisi A =", alas, "cm")
print("Sisi B =", tinggi, "cm")
print("Sisi C =", int(sisiC), "cm")
print("Keliling =", int(keliling), "cm")
print("Luas =", int(luas), "cm")