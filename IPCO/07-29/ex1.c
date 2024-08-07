#include <stdio.h>
#define TAM 10

int PesqSeq2(int numeros[], int x);

int main(){
    int numeros[TAM] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};
    int buscar, posicao;
    printf("Entre com o valor que deseja buscar: ");
    scanf("%d", &buscar);
    posicao = PesqSeq2(numeros, buscar);
    if(posicao == -1)
       printf("Valor nao encontrado");
    else
       printf("Valor encontrado na posicao %d", posicao+1);
    return 0;
}

int PesqSeq2(int numeros[], int x){
    int i = 0;
    int t = TAM;
    while ((numeros[i] != x) && (i < t) && (numeros[t-1] != x)){
        i = i + 1;
        t = t - 1;
    }    
    if (numeros[i] == x)
        return i;
    else if (numeros[t-1] == x)
            return t-1;
         else
            return -1;
}

/*#include <stdio.h>
#define TAM 10

int main(){

    int x, num[TAM] = {12, 43, 27, 56, 92, 13, 10, 55, 64, 90}, i=0, pos;
    
    printf("Digite a ficha pesquisada: ");
    scanf("%d",&x);

    while(i<TAM || x!=num[i] || x!=num[TAM-i]){
       i++;
       if(x==num[i]){
        pos = i;
       }else if(x==num[TAM-1]){
        pos = i;
       }
    }
    
    if(x==num[pos]){
        printf("Número encontrado na posição %d",);
    }else{
        printf("Numero não encontrado");
    }

    return 0;
}*/