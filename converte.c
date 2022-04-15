#include <stdio.h>
#include <string.h>

int main (void){
    int n1c, n2c, n1q, n2q, i, k, contaDigitos = 0;
    char n1[9], n2[9], operacao;
    /* acrescimos de 0 */
    char z1[2] = {'0','\0'};
    char z2[3] = {'0','0','\0'};
    char z3[4] = {'0','0','0','\0'};
    char z4[5] = {'0','0','0','0','\0'};
    char z5[6] = {'0','0','0','0','0','\0'};
    char z6[7] = {'0','0','0','0','0','0','\0'};
    char z7[8] = {'0','0','0','0','0','0','0','\0'};

    scanf("%s", n1);
    n1c = strtol(n1, NULL, 10);
    n1q = n1c;
    
    if (strcmp(n1, "S") == 0) {
        printf("O programa foi encerrado!\n");
    } else {
        scanf(" %c", &operacao);
        scanf("%s", n2);

        n2c = strtol(n2, NULL, 10);
        n2q = n2c;
        
        if (n1q == 0 || n1q == 1) {
            contaDigitos = 1;
        }
        else{
            while (n1q != 0)
           {
              contaDigitos = contaDigitos + 1;
              n1q = n1q / 10;
            }
        }
        /*
        for(i = 0; i <= n1q; n1q/=10){
            i++;
        }
        for(k = 1; k <= n2q; n2q/=10){
            k++;
        }
        */

        switch(contaDigitos){
            case 1:
                strcat(z7, n1);
            break;
            case 2:
                strcat(z6, n1);
            break;
            case 3:
                strcat(z5, n1);
            break;
            case 4:
                strcat(z4, n1);
            break;
            case 5:
                strcat(z3, n1);
            break; 
            case 6:
                strcat(z2, n1);
            break;
            case 7:
                strcat(z1, n1);
            break;
        }

        printf("%d\n", contaDigitos);
        printf("%s\n", z1);
        printf("%s\n", z2);
        printf("%s\n", z3);
        printf("%s\n", z4);
        printf("%s\n", z5);
        printf("%s\n", z6);
        printf("%s\n", z7);
        printf("%sb\n%c\n%sb\n=\n", n1, operacao, n2);
    }
    return 0;
}