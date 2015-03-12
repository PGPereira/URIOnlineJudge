#include <stdio.h>

int main (){
        int time, averagespeed;

        scanf("%d", &time);
        scanf("%d", &averagespeed);

        printf("%.3lf\n", (time * averagespeed)/12.0);
}
