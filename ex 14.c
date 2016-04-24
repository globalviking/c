//exercicio 14
#include<stdio.h>
int main(){
    float km,l;
    printf("Quantos kilometros foram percorridos?\n");
    scanf("%f",&km);
    printf("Quantos litros foram gastos?\n");
    scanf("%f",&l);
    printf("%f km/l\n",km/l);
    fflush(stdin);
    getchar();
    return 0;
}
