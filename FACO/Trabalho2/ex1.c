/*Faça um algoritmo que leia um valor n (n é o tamanho do conjunto, vetor de inteiros x). A seguir, leia cada
um dos valores de x, encontre o menor elemento (maior que zero) deste vetor e multiplique os demais
elementos do vetor por este número. No final, exiba o novo conjunto x[n].*/
#include <limits.h>
#include <stdio.h>
int main(){
    int n, i, menor=INT_MAX;

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    while(n<=0){
        printf("Digite um tamanho maior do que 0: ");
        scanf("%d",&n);
    }

    int x[n];
    
    for(i=0;i<n;i++){
        printf("Digite o valor de x na posição %d: ",i);
        scanf("%d",&x[i]);
    }

    for(i=0;i<n;i++){
        if(i==0 && x[i]!=0){
            menor=x[i];
        }else if(x[i]<menor && x[i]!=0){
            menor=x[i];
        }
    }
    
    printf("O menor número é %d\n",menor);

    printf("NOVO CONJUNTO\n[ ");
    for(i=0;i<n;i++){
        printf("%d ",menor*x[i]);
    }
    printf("]");

    return 0;
}