# python'da l-value r-value

x = 10  # x bir l-value'dir (bellekte yeri var)
y = x + 5  # x + 5 bir r-value'dir (geçici bir ifade)

print(f"x'in adresi: {id(x)}, Değeri: {x}")
print(f"y'in adresi: {id(y)}, Değeri: {y}")

# Hatalı kullanım: r-value'ye değer atanamaz!
# 10 = x  # Python'da hata verir çünkü 10 bir r-value'dir.
