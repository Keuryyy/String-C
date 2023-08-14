#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){

    char NomedaMusica[50];
    char letra;
    int ocorrencias[20];
    int quantidade = 0, numero = 0;
    int i;

    printf("Digite o nome de uma musica: ");
    gets(NomedaMusica);

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    for(i = 0; i < strlen(NomedaMusica); i++){

        if(tolower(NomedaMusica[i]) == tolower(letra)){
            ocorrencias[numero] = i;
            quantidade++;
            numero++;
        }
    }

    if(quantidade > 0){

        for(i = 0; i < quantidade; i++){
            printf("Ocorrencia do caractere na posicao %d\n", ocorrencias[i]);
        }
    }else{
        printf("Caractere nao encontrado\n");
    }
}
