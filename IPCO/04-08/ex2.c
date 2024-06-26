#include <stdio.h>
int main(){
    
    int voto, c1=0, c2=0, c3=0, c4=0, vn=0, vb=0, total;
    float p_vn, p_vb;

    printf("CODIGOS PARA VOTACAO\n");
    printf("Chapas 1, 2, 3 ou 4\nVoto Nulo ....... 5\nVoto Branco ..... 6\n\nDigite seu voto: ");
    scanf("%d",&voto);

    while(voto!=0){
        if(voto==1)
            c1++;
        else if(voto==2){
            c2++;
        }else if(voto==3){
            c3++;
        }else if(voto==4){
            c4++;
        }else if(voto==5){
            vn++;
        }else if(voto==6){
            vb++;
        }else{
            printf("Codigo invalido\n");
        }
        printf("Digite seu voto: ");
        scanf("%d",&voto);
    }

    printf("\nRESULTADO DA VOTACAO\n");
    printf("Chapa 1 ... %d votos\n",c1);
    printf("Chapa 2 ... %d votos\n",c2);
    printf("Chapa 3 ... %d votos\n",c3);
    printf("Chapa 4 ... %d votos\n",c4);
    printf("Nulo ...... %d votos\n",vn);
    printf("Branco .... %d votos\n",vb);

    total = c1+c2+c3+c4+vn+vb;
    p_vn = vn;
    p_vb = vb;
    p_vn = (p_vn/total)*100;
    p_vb = (p_vb/total)*100;

    printf("\nTotal de votos: %d\n",total);
    printf("Porcentagem de nulos: %.2f%%\n",p_vn);
    printf("Porcentagem de brancos: %.2f%%\n",p_vb);

    return 0;
}