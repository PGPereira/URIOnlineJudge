#include <stdio.h>
#include <math.h>

int main (){
        double pi = 3.14159;
        double R = 0;
        double answer = 0;

        scanf ("%lf", &R);
        
        answer = pow(R, 2) * pi;

        printf ("A=%lf\n", answer);
}
