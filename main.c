#include <stdio.h>
#include "tableau.h"
#include "const.h"






int main() {



    int result = sommeTableau(tableau1, 5);
    printf("%d\n", result);
    double moyenne = moyenneTableau(tableau1, 5);
    printf("%d\n", moyenne);
    copie(tableau1,tableau2,5);

    for (int i = 0; i < 5; ++i) {
        printf("%d\n", tableau2[i]);
    }
    maximumTableau(tableau1,5, 4);









    return 0;

    





}






