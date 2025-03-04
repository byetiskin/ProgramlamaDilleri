% veya kullanimi

ogrenci(ahmet).
ogrenci(ayse).
ders(mat101).
ders(fiz101).

kayitli(ahmet, mat101).
kayitli(ahmet, fiz101).
kayitli(ayse, mat101).

matematik_aliyor(X) :- kayitli(X, mat101).
fizik_aliyor(X) :- kayitli(X, fiz101).
bilim_dersi_aliyor(X) :- matematik_aliyor(X) ; fizik_aliyor(X).

