//
// Created by l31 on 28/01/2021.
//
#include <stdio.h>
#include <stdlib.h>


static int resultat = 0;


int sommeTableau(int tableau1[], int tailleTableau) {




    for (int i = 0; i < tailleTableau; ++i) {
         resultat += tableau1[i];

    }

    return resultat;
}

double moyenneTableau(int tableau1[], int tailleTableau){
    
    int moyenne = 0;

    for (int i = 0; i < tailleTableau; ++i) {
        moyenne = resultat/tailleTableau;
        
    }
    printf("%d", moyenne);
}



void copie(int tableau1[], int tableau2[], int tailleTableau){
    int i = 0;

    for (int i = 0; i < tailleTableau ; i++) {

        tableau2[i] = tableau1[i];

    }

}
void maximumTableau(int tableau1[], int tailleTableau, int valeurMax){
    int valeur = 0;
    int i = 0;
    for (int i = 0; i < tailleTableau; ++i) {
        if (tableau1[i]> valeurMax)
            tableau1[i]= 0;


    }
    for (int valeur = 0; valeur < tailleTableau; ++valeur) {
        printf("%d ", tableau1[valeur]);

    }

}

