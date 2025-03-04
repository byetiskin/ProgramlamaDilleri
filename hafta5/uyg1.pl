% ve kullanimi
ogrenci(ahmet).
ogrenci(ayse).
ders(mat101).
ders(fiz101).

kayitli(ahmet, mat101).
kayitli(ahmet, fiz101).
kayitli(ayse, mat101).

ders_aliyor(X, Y) :- ogrenci(X), ders(Y), kayitli(X, Y).
