#include <stdio.h>
int main (){
    int nome;
    printf("Qual e seu nome?\n");
    scanf("%s",&nome);
    printf("Oi %s!\n",&nome);    
    fflush(stdin);
    getchar();
    return 0;
} 
