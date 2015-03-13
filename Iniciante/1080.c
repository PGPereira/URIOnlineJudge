#include<stdio.h>

int main(){
        int numero = -1;
        int atual = 0;
        int posicao = 0 ;
        int i = 0;

        for (i = 0; i <= 100; i++){
                scanf("%d", &atual);
                if (atual >= numero){
                        numero = atual;
                        posicao = i + 1;
                }
        }

        printf ("%d\n", numero);
        printf ("%d\n", posicao);

        return 0;
}
