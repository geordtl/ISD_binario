#include <stdio.h>

int main (void){
    int n2, n1c;
    char n1[9], operacao;

    scanf("%s", n1);
    n1c = strtol(n1, NULL, 10);

    if (strcmp(n1, "S") == 0) {
        printf("O programa foi encerrado!\n");
    } else {
        scanf(" %c", &operacao);
        scanf("%d", &n2);
        
        printf("%d\n", n1c);

        if(operacao == '+'){
        }


        printf("%sb\n%c\n%db\n=\n", n1, operacao, n2);
    }
    return 0;
}