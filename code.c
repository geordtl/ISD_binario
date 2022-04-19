#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void){
    int i, numero[9], n1c, n2c, n1q, n2q, contaDigitos1 = 0, contaDigitos2 = 0;
    char n1[9], n2[9], soma[9], sub[9], tempSoma = 0, tempSub, tempSub2, operacao;
    /* acrescimos de 0 para n1 */
    char z0[9] = {'\0'};
    char z1[9] = {'0','\0'};
    char z2[9] = {'0','0','\0'};
    char z3[9] = {'0','0','0','\0'};
    char z4[9] = {'0','0','0','0','\0'};
    char z5[9] = {'0','0','0','0','0','\0'};
    char z6[9] = {'0','0','0','0','0','0','\0'};
    char z7[9] = {'0','0','0','0','0','0','0','\0'};
    /* acrescimos de 0 para n2 */
    char zr0[9] = {'\0'};
    char zr1[9] = {'0','\0'};
    char zr2[9] = {'0','0','\0'};
    char zr3[9] = {'0','0','0','\0'};
    char zr4[9] = {'0','0','0','0','\0'};
    char zr5[9] = {'0','0','0','0','0','\0'};
    char zr6[9] = {'0','0','0','0','0','0','\0'};
    char zr7[9] = {'0','0','0','0','0','0','0','\0'};

    scanf("%8s", n1);
    n1q = strtol(n1, NULL, 10);
    n1c = n1q;
    
    int aux = 0;
    
    for(i = 0; i <= n1c; i++){
    	aux = n%10;
    	n = n/10;
    	
    	printf("%d\n", aux);
    }
    
    
    /*
    if (strcmp(n1, "S") == 0) {
        printf("O programa foi encerrado!\n");
    } else {
        scanf(" %c", &operacao);
        scanf(" %8s", n2);
        n2c = strtol(n2, NULL, 10);
        n2q = n2c;
        
        /* conta os dígitos de n1 e implementa a estrutura de decisão 
        contaDigitos1 = strlen(n1);

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
            case 8:
                strcat(z0, n1);
                strcpy(n1, z0);
            break;
        }

        /* conta os dígitos de n2 e implementa a estrutura de decisão 
        contaDigitos2 = strlen(n2);

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
            case 8:
                strcat(zr0, n2);
                strcpy(n2, zr0);
            break;
        }*/
        

        /* verifica se a operação é de soma (+)
        if(operacao == '+'){
            /* PRIMEIRO DÍGITO *
            
            printf("%d\n", n1q[0]);
            
            
            for(i = 7; i >= 0; i--){
            	soma[i] = n1q[i] + n2q[i] + tempSoma;	
            
            }*/
            /*printf("%sb\n%c\n%sb\n=\n%s\n", n1, operacao, n2, sub);*/
      
    return 0;
}
