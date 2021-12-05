Compilation séparée : "gcc -c matrix.c -o matrix.o -lm" 
                      "gcc -c progInversion.c -o progInversion.o -lm"
                      "gcc matrix.o progInversion.o -o progInversion -lm"

ces commandes permet de créer selon le terminal un fichier executable progInversion associe au programme progInversion.c et matrix.c

Execution : "./progInversion" afin d'executer le fichier executable du programme progInversion.c et et matrix.c

./progInversion -n 4 gauss

ou

cat matriceA.txt | ./progInversion determinant -n 3


Doxygen : "doxygen -g" permet de creer un fichier editable pour la personnalisation du fichier final, puis "doxygen Doxyfile" permet 
de creer le fichier html et Latex.
Dans le html -> index.html pour voir le resultat ou convertir refmain.tex en PDF pour obtenir une autre forme d'affichage du resultat.
