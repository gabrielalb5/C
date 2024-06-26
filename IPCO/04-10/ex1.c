/*IMPRIMIR 6 NÚMEROS NÃO-PRIMOS*/
/*Filtrei os números por parâmetros que os identificam como números primos
e os pulei/ignorei, deixando ser exibidos apenas os que não entram nas condições:

- Verificação do número menor ou igual a zero. (PULA)

- Se o número dividido por 2, 3, 5 e 7 tiver TODOS os restos diferentes de 0 ele é primo.
Então pulo para o próximo. Também na primeira condição verifico se o número é diferente de 1,
já que ele é considerado não-primo por ter apenas um divisor inteiro e, assim, deve ser impresso na tela.

- A condição anterior não filtra os primeiros números primos.
Logo é necessário verificar se o número é 2, 3, 5 ou 7.

- Por fim, se o número não entrou em nenhuma das condições anteriores, significa que ele é não-primo,
sendo exibido na tela.*/
#include <stdio.h>
int main(){

    int num, cont=0;

    printf("Digite um numero inteiro: ");
    scanf("%d",&num);

    printf("A partir de %d os numeros nao-primos sao: ",num);
    while(cont<6){
        if(num<=0){// verifica se o número é menor ou igual a 0
            num++;
        }else if((num!=1) && (num%2!=0 && num%3!=0 && num%5!=0 && num%7!=0)){// verifica se o número é diferente de 1 e se dividido por 2, 3, 5 e 7 retorna resto diferente de 0.
            num++;
        }else if(num==2 || num==3 || num==5 || num==7){// verifica se o número é 2, 3, 5 ou 7 (primos) e, caso positivo, passa para o próximo num da sequência
            num++;
        }else{// números que não são primos entram aqui
            printf("%d ",num);// impressão de números não primos
            cont++;// incremento de um contador de não-primos
            num++;
        }
    }

    return 0;
}