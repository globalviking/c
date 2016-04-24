//exercicio 17
#include<stdio.h>
int main(){
    int latas, rolos;
    float x,y,z,s,litros,mdo;
    printf("Qual e a largura da caixa em metros?\n");
    scanf("%f",&x);
    printf("Qual e a altura da caixa em metros?\n");
    scanf("%f",&y);
    printf("Qual e a profundidade da caixa em metros?\n");
    scanf("%f",&z);
    s=2*x*y+2*x*z+2*y*x;
    litros=s*3;
    latas=litros/5+1;
    mdo=s*20;
    rolos=s/10+1;
    printf("%f",latas*45+rolos*5+mdo);
    fflush(stdin);
    getchar();
    return 0;
}
