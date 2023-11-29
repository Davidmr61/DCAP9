# DCAP9

Los alias los he creado así:

git config --global alias.st status
git config --global alias.br branch
git config alias.pu push
git config alias.cm commit

Como he encontrado el fallo ccon bisect?

Historial de commits:

git log --oneline
a49d3a6 (HEAD -> main, origin/main) Bug fixed with bisect
a8bab2f Dic
263481e Mult
15c412d Resta
fba20c4 Fallo creado
f2cf2c4 Alias creados
468cc1d Git Fix
dad76f5 Merge branch 'master' Merge
2a3968c Update README.md
6319bb8 Initial commit
2ff8925 (origin/master, master) Primer commit

Búsqueda bisect:

git cm -m "Alias creados"
git pu
git add .
git cm -m "Fallo creado"
git add .
git cm -m "Resta"
git cm -m "Mult"
git add .
git cm -m "Mult"
git add .
git cm -m "Dic"
git bisect start
git bisect good
git log --online
git log --oneline
git bisect start
git bisect bad
git log --oneline
git bisect good 2ff8925
git bisect good 468cc1d
git bisect bad fba20c4
git bisect good f2cf2c4
git bisect reset
git show fba20c4
git add .
git cm -m "Bug fixed with bisect"
git push

//Good y bad junto al commit para indicar que funciona o no, de esa manera he podido encontrar el fallo.

//Hook instalado y usando: eslint
