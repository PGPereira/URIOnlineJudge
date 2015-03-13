#include<stdio.h>
#include<stdlib.h>

int main(){
        char nome[100];
        double salario;
        double vendas;

        fgets(nome, 100, stdin);

        fflush(stdin);

        scanf("%lf", &salario);
        scanf("%lf", &vendas);

        printf("TOTAL = R$ %.2lf\n", salario + vendas * 0.15);

        return 0;
}
