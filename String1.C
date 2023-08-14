#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){

    char frase[50];
    int QuantidadeVogal = 0;
    int i;

    printf("Informe uma frase: ");
    gets(frase);

    for(i = 0; i < strlen(frase); i++){
        if(tolower(frase[i]) == tolower('a') || tolower(frase[i]) == tolower('e') || tolower(frase[i]) == tolower('i') || tolower(frase[i]) == tolower('o') || tolower(frase[i]) == tolower('u')){
            QuantidadeVogal++;
        }
    }

    printf("Quantidade de vogais: %d\n", QuantidadeVogal);
}
