//Déclarez un pointeur pour un type de base (comme int ou char) 
//et initialisez-le avec l'adresse d'une variable de ce type

#include <stdio.h>

int main() {
    
    //initialisation de la variable var
    int var = 10;
    
    //initialisation du pointeur "ptr" sur "var" 
    int* ptr = &var;

    //affichage de la valeur et adresse de ptr 
    printf("-adresse du pointeur: %p\n-valeur du pointeur %d", ptr, *ptr);

    return 0 ;
}