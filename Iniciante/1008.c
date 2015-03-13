#include<stdio.h>

int main (){
        int number, hours;
        float salarie;

        scanf("%d", &number);
        scanf("%d", &hours);

        scanf("%f", &salarie);

        printf("NUMBER = %d\n", number);
        printf("SALARY = U$ %.2f\n", hours * salarie);

        return 0;
}

