#include <stdio.h>
int main(){

    int item, pagamento;
    float valor, dinheiro, troco;

    printf("CARDAPIO\n\n");

    printf("COMIDAS                             Valor\n");
    printf("1. Coxinha (frango) ............... R$ 6,50\n");
    printf("2. Enrolado (presunto e queijo) ... R$ 6,50\n");
    printf("3. Bola1 (frango e catupiry) ...... R$ 8,80\n");
    printf("4. Bola2 (brocolis e catupiry) .... R$ 8,80\n");
    printf("5. Bola3 (camarao) ................ R$ 9,60\n");
    printf("6. Bola4 (queijo e catupiry) ...... R$ 6,50\n\n");

    printf("BEBIDAS              Valor\n");
    printf("7. Agua ............ R$ 3,00\n");
    printf("8. Agua com gas .... R$ 3,50\n");
    printf("9. Refrigerante .... R$ 5,00\n");
    printf("10. Suco (lata) .... R$ 7,50\n");
    printf("11. Cerveja ........ R$ 5,00\n");

    printf("\nPEDIDO\n");
    printf("Digite o numero do item [0 para finalizar]: ");
    scanf("%d",&item);

    while(item!=0){
        switch(item){
            case 1:{
                valor += 6.50;
                break;
            }case 2:{
                valor += 6.50;
                break;
            }case 3:{
                valor += 8.80;
                break;
            }case 4:{
                valor += 8.80;
                break;
            }case 5:{
                valor += 9.60;
                break;
            }case 6:{
                valor += 6.50;
                break;
            }case 7:{
                valor += 3;
                break;
            }case 8:{
                valor += 3.50;
                break;
            }case 9:{
                valor += 5;
                break;
            }case 10:{
                valor += 7.50;
                break;
            }case 11:{
                valor += 5;
                break;
            }default:{
                printf("Codigo de produto invalido.\n");
                break;
            }
        }
        printf("Digite o numero do item [0 para finalizar]: ");
        scanf("%d",&item);
    }

    printf("\nPedido finalizado. Total R$%.2f",valor);

    printf("\n\nESCOLHA A FORMA DE PAGAMENTO\n");
    printf("1. Dinheiro ......... Sem acrescimo\n");
    printf("2. Debito ........... 3%% acrescimo\n");
    printf("3. Credito .......... 5%% acrescimo\n");
    printf("4. Credito em 2x ... 10%% acrescimo\n");

    do{
        printf("Digite o codigo da forma de pagamento: ");
        scanf("%d",&pagamento);
            if(pagamento==1){
                do{
                    printf("\nDigite o valor entregue pelo cliente: R$");
                    scanf("%f",&dinheiro);
                    troco = dinheiro-valor;
                    if(troco<0){
                        printf("Insuficiente para pagamento. Tente novamente!\n");
                    }
                }while(troco<0);
                
                printf("\nTroco: R$%.2f",troco);
            }else if(pagamento==2){
                valor = valor*1.03;
                printf("\nValor no Debito: R$%.2f",valor);
            }else if(pagamento==3){
                valor = valor*1.05;
                printf("\nValor no Credito: R$%.2f",valor);
            }else if(pagamento==4){
                valor = valor*1.10;
                printf("\nValor no Credito: 2 parcelas de R$%.2f (R$%.2f) ",(valor/2),valor);
            }else{
                printf("\nCodigo invalido. Tente novamente!\n");
            }
    }while(pagamento<1 || pagamento>4);

    return 0;
}