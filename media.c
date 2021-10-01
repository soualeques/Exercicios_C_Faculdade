#include <stdio.h>

int main(int argc, char const *argv[])
{
    float nota1;
    float nota2;
    float media;

    printf("insira a primeira nota: \n");
    scanf("%f", &nota1);
    
    printf("insira a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2;

    printf("a media é %f", media);



    return 0;
}
