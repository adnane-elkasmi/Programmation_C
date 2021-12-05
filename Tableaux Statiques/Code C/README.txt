Compilation séparée : "gcc -c foncproc.c -o foncproc.o -lm" 
                      "gcc -c main.c -o main.o -lm"
                      "gcc foncproc.o main.o -o main -lm"

ces commandes permet de créer selon le terminal un fichier executable main associe au programme foncproc.c et main.c

Execution : "./main" afin d'executer le fichier executable du programme foncproc.c et et main.c

Doxygen : "doxygen -g" permet de creer un fichier editable pour la personnalisation du fichier final, puis "doxygen Doxyfile" permet 
de creer le fichier html et Latex.
Dans le html -> index.html pour voir le resultat ou convertir refmain.tex en PDF pour obtenir une autre forme d'affichage du resultat.
