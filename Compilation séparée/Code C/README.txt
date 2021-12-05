Compilation séparée : "gcc -c fonctions.c -o fonctions.o -lm" 
                      "gcc -c main.c -o main.o -lm"
                      "gcc fonctions.o main.o -o main -lm"

ces commandes permet de créer selon le terminal un fichier executable Algorithme associe au programme main.c et fonctions.c

Execution : "./main" afin d'executer le fichier executable du programme main.c et et fonctions.c

Doxygen : "doxygen -g" permet de creer un fichier editable pour la personnalisation du fichier final, puis "doxygen Doxyfile" permet 
de creer le fichier html et Latex.
Dans le html -> index.html pour voir le resultat ou convertir refmain.tex en PDF pour obtenir une autre forme d'affichage du resultat.
