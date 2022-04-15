#include <stdio.h>
#include <math.h>

int main (void){
    int n2, n1c, i, k;
    char n1[9], operacao;

    scanf("%s", n1);
    n1c = strtol(n1, NULL, 10);
    /*n1q = Math.ceil(log10(n1c+1));*/

    if (strcmp(n1, "S") == 0) {
        printf("O programa foi encerrado!\n");
    } else {
        scanf(" %c", &operacao);
        scanf("%d", &n2);
        
        for(i = 1; i <= n1c; n1c/=10){
            i++;
        }
        for(k = 1; k <= n2; n2/=10){
            k++;
        }
        printf("%d\n", i);

        /*
        if(operacao == '+'){
        }
        */
        printf("%sb\n%c\n%db\n=\n", n1, operacao, n2);
    }
    return 0;
}