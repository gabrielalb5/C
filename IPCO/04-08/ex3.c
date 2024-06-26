#include <stdio.h>
int main(){

    float eleitores, branco, nulo, valido;

    printf("Digite a quantidade de eleitores de Araraquara: ");
    scanf("%f",&eleitores);
    printf("Qual a quantidade de votos brancos? ");
    scanf("%f",&branco);
    printf("Qual a quantidade de votos nulos? ");
    scanf("%f",&nulo);
    printf("Qual a quantidade de votos validos? ");
    scanf("%f",&valido);

    if(valido>eleitores || branco>eleitores || nulo>eleitores){
        printf("\nAlgum dos valores informados excedem a quantidade de eleitores da cidade.");
    }else{
        valido = (valido/eleitores)*100;
        branco = (branco/eleitores)*100;
        nulo = (nulo/eleitores)*100;

        printf("\nDe um total de %.0f eleitores em Araraquara\n",eleitores);
        printf("%.2f%% votaram branco\n",branco);
        printf("%.2f%% votaram nulo\n",nulo);
        printf("%.2f%% foram votos validos",valido);
    }

    return 0;
}