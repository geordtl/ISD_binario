#include <stdio.h>
#include <string.h>

int main (void){
    int n1c, n2c, n1q, n2q, contaDigitos1 = 0, contaDigitos2 = 0;
    char n1[9], n2[9], operacao;
    /* acrescimos de 0 para n1 */
    char z1[2] = {'0','\0'};
    char z2[3] = {'0','0','\0'};
    char z3[4] = {'0','0','0','\0'};
    char z4[5] = {'0','0','0','0','\0'};
    char z5[6] = {'0','0','0','0','0','\0'};
    char z6[7] = {'0','0','0','0','0','0','\0'};
    char z7[8] = {'0','0','0','0','0','0','0','\0'};
    /* acrescimos de 0 para n2 */
    char zr1[2] = {'0','\0'};
    char zr2[3] = {'0','0','\0'};
    char zr3[4] = {'0','0','0','\0'};
    char zr4[5] = {'0','0','0','0','\0'};
    char zr5[6] = {'0','0','0','0','0','\0'};
    char zr6[7] = {'0','0','0','0','0','0','\0'};
    char zr7[8] = {'0','0','0','0','0','0','0','\0'};

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
        
        /* conta os dígitos de n1 e implementa a estrutura de decisão */
        if (n1q == 0 || n1q == 1) {
            contaDigitos1 = 1;
        }
        else{
            while (n1q != 0)
           {
              contaDigitos1 = contaDigitos1 + 1;
              n1q = n1q / 10;
            }
        }

        switch(contaDigitos1){
            case 1:
                strcat(z7, n1);
                strcpy(n1, z7);
            break;
            case 2:
                strcat(z6, n1);
                strcpy(n1, z6);
            break;
            case 3:
                strcat(z5, n1);
                strcpy(n1, z5);
            break;
            case 4:
                strcat(z4, n1);
                strcpy(n1, z4);
            break;
            case 5:
                strcat(z3, n1);
                strcpy(n1, z3);
            break; 
            case 6:
                strcat(z2, n1);
                strcpy(n1, z2);
            break;
            case 7:
                strcat(z1, n1);
                strcpy(n1, z1);
            break;
        }

        /* conta os dígitos de n2 e implementa a estrutura de decisão */
        if (n2q == 0 || n2q == 1) {
            contaDigitos2 = 1;
        }
        else{
            while (n2q != 0)
           {
              contaDigitos2 = contaDigitos2 + 1;
              n2q = n2q / 10;
            }
        }

        switch(contaDigitos2){
            case 1:
                strcat(zr7, n2);
                strcpy(n2, zr7);
            break;
            case 2:
                strcat(zr6, n2);
                strcpy(n2, zr6);
            break;
            case 3:
                strcat(zr5, n2);
                strcpy(n2, zr5);
            break;
            case 4:
                strcat(zr4, n2);
                strcpy(n2, zr4);
            break;
            case 5:
                strcat(zr3, n2);
                strcpy(n2, zr3);
            break; 
            case 6:
                strcat(zr2, n2);
                strcpy(n2, zr2);
            break;
            case 7:
                strcat(zr1, n2);
                strcpy(n2, zr1);
            break;
        }

        printf("%sb\n%c\n%sb\n=\n", n1, operacao, n2);
    }
    return 0;
}