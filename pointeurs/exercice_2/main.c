#include <stdio.h>

int main(){

    //initialisation d'un tableau avec éléments
    int tab [4] = {10, 20, 30, 40}; int i;

    //initialisation d'un pointeur sur aucune adresse
    int* ptr ;

    //boucle pour parcourir le tableau
    for(i = 0; i < 3; i++){

        //stockage de l'adresse de l'élément i du tableau dans la variable ptr 
        ptr = &tab[i];
        //affichage de la valeur du pointeur 
        printf("-%d\n", *ptr);
    }

    return 0 ;
}