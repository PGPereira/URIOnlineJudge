#include <stdio.h>

int main (){
        float nota1, nota2;

        scanf("%f", &nota1);
        scanf("%f", &nota2);

        printf("MEDIA = %.5f\n", ((nota1 * 3.5 + nota2 * 7.5)/11));
}
