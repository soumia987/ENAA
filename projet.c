#include<stdio.h>
    // creation de structure :personne 
typedef struct {
    char nom;
    int age;
    char adresse;
}personne;

 int main(){ 
    //creation 
    personne per;
    //remplissage
    printf("entrer le nom de la personne:\n");
    scanf("%s",&per.nom);
    printf("entrer l'age de la personne:\n");
    scanf("%d", &per.age);
    printf("entrer l'adresse de la personne:\n");
    scanf("%s",&per.adresse);
    //affichage
    printf("nom:%s\n", per.nom);
    printf("age:%d\n", per.age);
    printf("adresse:%s\n", per.adresse);
    return 0;
 }
