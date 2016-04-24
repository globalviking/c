//exercicio 13
#include<stdio.h>
int main(){
    char carro[15];
    float fabrica;
    printf("Digite o modelo do carro:\n");
    scanf("%s",&carro);
    printf("Digite o preco de fabrica:\n");
    scanf("%f",&fabrica);
    fabrica=fabrica*1.73;
    printf("Modelo     : %s\n",carro);
    printf("Preco final: %f\n",fabrica);
    fflush(stdin);
    getchar();
    return 0;
}
