//Bee 1049 - Animal

#include <stdio.h>
#include <string.h>

int main() {
 
    char vert[25], tip[25], cla[25];
    scanf("%s", vert);
    scanf("%s", tip);
    scanf("%s", cla);

   if(strcmp(vert,"vertebrado")==0){
        if(strcmp(tip,"ave")==0){
            if(strcmp(cla,"carnivoro")==0){
                printf("aguia\n");
            } else if(strcmp(cla,"onivoro")==0){
                printf("pomba\n");
            }

        } else if(strcmp(tip,"mamifero")==0) {
            if(strcmp(cla,"onivoro")==0){
                printf("homem\n");
            } else if(strcmp(cla,"herbivoro")==0) {
                printf("vaca\n");
            }
        } 
    } else if(strcmp(vert,"invertebrado")==0){
        if(strcmp(tip,"inseto")==0){
            if(strcmp(cla,"hematofago")==0){
                printf("pulga\n");
            } else if(strcmp(cla,"herbivoro")==0) {
                printf("lagarta\n");
            }

        } else if(strcmp(tip,"anelideo")==0){
            if(strcmp(cla,"onivoro")==0){
            printf("minhoca\n");
            } else if(strcmp(cla,"hematofago")==0) {
            printf("sanguessuga\n");
            }
        }
    }
    return 0;
}