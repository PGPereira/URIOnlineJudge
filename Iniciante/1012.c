#include<stdio.h>
#include<math.h>

int main(){
        #define pi 3.14159

        double A, B, C;
        scanf("%lf %lf %lf", &A, &B, &C);

        printf ("TRIANGULO: %.3lf\n",   A * C / 2.0         );
        printf ("CIRCULO: %.3lf\n",     pow(C, 2) * pi      );
        printf ("TRAPEZIO: %.3lf\n",    (A + B) * C / 2.0   );
        printf ("QUADRADO: %.3lf\n",    pow(B,2)            );
        printf ("RETANGULO: %.3lf\n",   A * B               );

}
