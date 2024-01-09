#
# Auteur: C.-A. Brunet
# Date: 04 janvier 2024
# Modifie par : ...
# Date : ...
# Description: compilation de graphicus-01. Ce fichier fait partie de 
#	la distribution de Graphicus.
#

graphicus-01: graphicus-01.o canevas.o couche.o forme.o rectangle.o cercle.o carre.o vecteur.o
	g++ -o graphicus-02 graphicus-01.o canevas.o couche.o forme.o rectangle.o cercle.o carre.o vecteur.o

graphicus-01.o: graphicus-01.cpp tests.h canevas.h
	g++ graphicus-01.cpp -g -c
#
#
canevas.o: canevas.cpp canevas.h couche.h forme.h
	g++ canevas.cpp -g -c
#
couche.o: couche.cpp couche.h vecteur.h
	g++ couche.cpp -g -c
#
#
forme.o: forme.cpp forme.h coordonnee.h
	g++ forme.cpp -g -c
#
# tests.o: tests.cpp tests.h canevas.h carre.h coordonnee.h cercle.h vecteur.h
# 	g++ tests.cpp -g -c
#
rectangle.o: rectangle.cpp rectangle.h forme.h
	g++ rectangle.cpp -g -c
#
cercle.o: cercle.cpp cercle.h forme.h
	g++ cercle.cpp -g -c
#
carre.o: carre.cpp carre.h rectangle.h
	g++ carre.cpp -g -c
#
vecteur.o: vecteur.cpp vecteur.h forme.h
	g++ vecteur.cpp -g -c
#
clean:
	rm  -f *.o
