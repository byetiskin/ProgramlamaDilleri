# python'da durağan kapsam örneği

x = 10  # Global değişken

def fonksiyon():
    x = 20  # Lokal değişken
    print("Fonksiyon icindeki x:", x)

print("Ana programdaki x:", x)
fonksiyon()
