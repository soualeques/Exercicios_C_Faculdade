
#include <stdio.h>


int main(int argc, char** argv){
   char nome [30];
   char local [30];
   int idade;

    printf("Nome: \n");
    scanf("%s",  &nome);
    
    printf("Local: \n");
    scanf("%s", &local);

    printf("Idade: \n");
    scanf("%d", &idade);

    printf("Ola %s", nome);
    printf("\nvoce tem %d", idade);
    printf("\ne mora em %s",local);

    return 0;

}