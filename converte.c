#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void){
    int contaDigitos1, contaDigitos2;
    char n1[9], n2[9], soma[9], sub[9], tempSoma, tempSub, operacao;
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
    
    if (strcmp(n1, "S") == 0) {
        printf("O programa foi encerrado!\n");
    } else {
        scanf(" %c", &operacao);
        scanf("%8s", n2);
        
        /* conta os dígitos de n1 e implementa a estrutura de decisão */
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

        /* conta os dígitos de n2 e implementa a estrutura de decisão */
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
        }

        /* verifica se a operação é de soma (+) */
        if(operacao == '+'){
            /* PRIMEIRO DÍGITO */
            if(n1[7] == '0' && n2[7] == '0')
            {
                soma[7] = '0';
                tempSoma = '0';
            }else {
                if(n1[7] == '1' && n2[7] == '0' || n1[7] == '0' && n2[7] == '1')
                {
                    soma[7] = '1';
                    tempSoma = '0';
                }
                else {
                    if(n1[7] == '1' && n2[7] == '1'){
                        soma[7] = '0';
                        tempSoma = '1';
                    }
                }
            }

            /* SEGUNDO DÍGITO */
            if(n1[6] == '0' && n2[6] == '0' && tempSoma == '0')
            {
                soma[6] = '0';
            }else {
                if(n1[6] == '0' && n2[6] == '0' && tempSoma == '1')
                {
                    soma[6] = '1';
                    tempSoma = '0';
                }else {
                    if((n1[6] == '1' && n2[6] == '0' || n1[6] == '0' && n2[6] == '1')&& tempSoma == '1')
                    {
                        soma[6] = '0';
                        tempSoma = '1';
                    }else {
                        if((n1[6] == '1' && n2[6] == '0' || n1[6] == '0' && n2[6] == '1')&& tempSoma == '0')
                        {
                            soma[6] = '1';
                            tempSoma = '0';
                        }
                        else {
                            if(n1[6] == '1' && n2[6] == '1' && tempSoma == '0')
                            {
                                soma[6] = '0';
                                tempSoma = '1';
                            } else {
                                if(n1[6] == '1' && n2[6] == '1' && tempSoma == '1')
                                {
                                    soma[6] = '1';
                                    tempSoma = '1';
                                }
                            }
                        }
                    }
                }
            }
            
            /* TERCEIRO DÍGITO */
            if(n1[5] == '0' && n2[5] == '0' && tempSoma == '0')
            {
                soma[5] = '0';
            }else {
                if(n1[5] == '0' && n2[5] == '0' && tempSoma == '1')
                {
                    soma[5] = '1';
                    tempSoma = '0';
                }else {
                    if((n1[5] == '1' && n2[5] == '0' || n1[5] == '0' && n2[5] == '1')&& tempSoma == '1')
                    {
                        soma[5] = '0';
                        tempSoma = '1';
                    }else {
                        if((n1[5] == '1' && n2[5] == '0' || n1[5] == '0' && n2[5] == '1')&& tempSoma == '0')
                        {
                            soma[5] = '1';
                            tempSoma = '0';
                        } else{
                            if(n1[5] == '1' && n2[5] == '1' && tempSoma == '0')
                            {
                                soma[5] = '0';
                                tempSoma = '1';
                            } else {
                                if(n1[5] == '1' && n2[5] == '1' && tempSoma == '1')
                                {
                                    soma[5] = '1';
                                    tempSoma = '1';
                                }
                            }
                        }
                    }
                }
            }
            

            /* QUARTO DÍGITO */
            if(n1[4] == '0' && n2[4] == '0' && tempSoma == '0')
            {
                soma[4] = '0';
            }else {
                if(n1[4] == '0' && n2[4] == '0' && tempSoma == '1')
                {
                    soma[4] = '1';
                    tempSoma = '0';
                }else {
                    if((n1[4] == '1' && n2[4] == '0' || n1[4] == '0' && n2[4] == '1')&& tempSoma == '1')
                    {
                        soma[4] = '0';
                        tempSoma = '1';
                    }else {
                        if((n1[4] == '1' && n2[4] == '0' || n1[4] == '0' && n2[4] == '1')&& tempSoma == '0')
                        {
                            soma[4] = '1';
                            tempSoma = '0';
                        }else {
                            if(n1[4] == '1' && n2[4] == '1' && tempSoma == '0')
                            {
                                soma[4] = '0';
                                tempSoma = '1';
                            }else {
                                if(n1[4] == '1' && n2[4] == '1' && tempSoma == '1')
                                {
                                    soma[4] = '1';
                                    tempSoma = '1';
                                }
                            }
                        }
                    }
                }
            }
            

            /* QUINTO DÍGITO */
            if(n1[3] == '0' && n2[3] == '0' && tempSoma == '0')
            {
                soma[3] = '0';
            }else {
                if(n1[3] == '0' && n2[3] == '0' && tempSoma == '1')
                {
                    soma[3] = '1';
                    tempSoma = '0';
                }else {
                    if((n1[3] == '1' && n2[3] == '0' || n1[3] == '0' && n2[3] == '1')&& tempSoma == '1')
                    {
                        soma[3] = '0';
                        tempSoma = '1';
                    }else {
                        if((n1[3] == '1' && n2[3] == '0' || n1[3] == '0' && n2[3] == '1')&& tempSoma == '0')
                        {
                            soma[3] = '1';
                            tempSoma = '0';
                        }else {
                            if(n1[3] == '1' && n2[3] == '1' && tempSoma == '0')
                            {
                                soma[3] = '0';
                                tempSoma = '1';
                            }else {
                                if(n1[3] == '1' && n2[3] == '1' && tempSoma == '1')
                                {
                                    soma[3] = '1';
                                    tempSoma = '1';
                                }
                            }
                        }
                    }
                }
            }

            /* SEXTO DÍGITO */
            if(n1[2] == '0' && n2[2] == '0' && tempSoma == '0')
            {
                soma[2] = '0';
            }else {
                if(n1[2] == '0' && n2[2] == '0' && tempSoma == '1')
                {
                    soma[2] = '1';
                    tempSoma = '0';
                }else {
                    if((n1[2] == '1' && n2[2] == '0' || n1[2] == '0' && n2[2] == '1')&& tempSoma == '1')
                    {
                        soma[2] = '0';
                        tempSoma = '1';
                    }else {
                        if((n1[2] == '1' && n2[2] == '0' || n1[2] == '0' && n2[2] == '1')&& tempSoma == '0')
                        {
                            soma[2] = '1';
                            tempSoma = '0';
                        }else {
                            if(n1[2] == '1' && n2[2] == '1' && tempSoma == '0')
                            {
                                soma[2] = '0';
                                tempSoma = '1';
                            }else {
                                if(n1[2] == '1' && n2[2] == '1' && tempSoma == '1')
                                {
                                    soma[2] = '1';
                                    tempSoma = '1';
                                }
                            }
                        }
                    }
                }
            }

            /* SÉTIMO DÍGITO */
            if(n1[1] == '0' && n2[1] == '0' && tempSoma == '0')
            {
                soma[1] = '0';
            }else {
                if(n1[1] == '0' && n2[1] == '0' && tempSoma == '1')
                {
                    soma[1] = '1';
                    tempSoma = '0';
                }else {
                    if((n1[1] == '1' && n2[1] == '0' || n1[1] == '0' && n2[1] == '1')&& tempSoma == '1')
                    {
                        soma[1] = '0';
                        tempSoma = '1';
                    } else {
                        if((n1[1] == '1' && n2[1] == '0' || n1[1] == '0' && n2[1] == '1')&& tempSoma == '0')
                        {
                            soma[1] = '1';
                            tempSoma = '0';
                        }else {
                            if(n1[1] == '1' && n2[1] == '1' && tempSoma == '0')
                            {
                                soma[1] = '0';
                                tempSoma = '1';
                            }else {
                                if(n1[1] == '1' && n2[1] == '1' && tempSoma == '1')
                                {
                                    soma[1] = '1';
                                    tempSoma = '1';
                                }
                            }
                        }
                    }
                }
            }

            /* OITAVO DÍGITO */
            if(n1[0] == '0' && n2[0] == '0' && tempSoma == '0')
            {
                soma[0] = '0';
            }else {
                if(n1[0] == '0' && n2[0] == '0' && tempSoma == '1')
                {
                    soma[0] = '1';
                    tempSoma = '0';
                }else {
                    if((n1[0] == '1' && n2[0] == '0' || n1[0] == '0' && n2[0] == '1')&& tempSoma == '1')
                    {
                        soma[0] = '0';
                        tempSoma = '1';
                    }else {
                        if((n1[0] == '1' && n2[0] == '0' || n1[0] == '0' && n2[0] == '1')&& tempSoma == '0')
                        {
                            soma[0] = '1';
                            tempSoma = '0';
                        }else {
                            if(n1[0] == '1' && n2[0] == '1' && tempSoma == '0')
                            {
                                soma[0] = '0';
                                tempSoma = '1';
                            }else {
                                if(n1[0] == '1' && n2[0] == '1' && tempSoma == '1')
                                {
                                    soma[0] = '1';
                                    tempSoma = '1';
                                }
                            }
                        }
                    }
                }
            }
            printf("%sb\n%c\n%sb\n=\n%s\n", n1, operacao, n2, soma);
        }
        
        
        if(operacao == '-'){
        	if(n1[7] == '0' && n2[7] == '1'){
                sub[7] = '1';
                tempSub = '1';
        	}else{
                if(n1[7] == '0' && n2[7] == '0'){
                    sub[7] = '0';
                    tempSub = '0';
        	    }else{
                    if(n1[7] == '1' && n2[7] == '0'){
                        sub[7] = '1';
                        tempSub = '0';
        	        }else{
                        if(n1[7] == '1' && n2[7] == '1'){
                            sub[7] = '0';
                            tempSub = '0';
        	            }
                    }
                }
            }

            if(n1[6] == '0' && n2[6] == '1' && tempSub == '0'){
                sub[6] = '1';
                tempSub = '1';
        	}else{
                if(n1[6] == '0' && n2[6] == '1' && tempSub == '1'){
                    sub[6] = '0';
                    tempSub = '0';
        	    }else {
                    if(n1[6] == '0' && n2[6] == '0' && tempSub == '0'){
                        sub[6] = '0';
                        tempSub = '0';
        	        }else{
                        if(n1[6] == '0' && n2[6] == '0' && tempSub == '1'){
                            sub[6] = '1';
                            tempSub = '0';
        	            }else{
                            if(n1[6] == '1' && n2[6] == '0' && tempSub == '0'){
                                sub[6] = '1';
                                tempSub = '0';
        	                }else{
                                if(n1[6] == '1' && n2[6] == '0' && tempSub == '1'){
                                    sub[6] = '0';
                                    tempSub = '0';
        	                    }else{
                                    if(n1[6] == '1' && n2[6] == '1' && tempSub == '0'){
                                        sub[6] = '0';
                                        tempSub = '0';
        	                        }else{
                                        if(n1[6] == '1' && n2[6] == '1' && tempSub == '1'){
                                            sub[6] = '1';
                                            tempSub = '1';
        	                            }
                                    }
                                }
                            }
                        }
                    }
                }
            }

            if(n1[5] == '0' && n2[5] == '1' && tempSub == '0'){
                sub[5] = '1';
                tempSub = '1';
        	}else{
                if(n1[5] == '0' && n2[5] == '1' && tempSub == '1'){
                    sub[5] = '0';
                    tempSub = '0';
        	    }else {
                    if(n1[5] == '0' && n2[5] == '0' && tempSub == '0'){
                        sub[5] = '0';
                        tempSub = '0';
        	        }else{
                        if(n1[5] == '0' && n2[5] == '0' && tempSub == '1'){
                            sub[5] = '1';
                            tempSub = '0';
        	            }else{
                            if(n1[5] == '1' && n2[5] == '0' && tempSub == '0'){
                                sub[5] = '1';
                                tempSub = '0';
        	                }else{
                                if(n1[5] == '1' && n2[5] == '0' && tempSub == '1'){
                                    sub[5] = '0';
                                    tempSub = '0';
        	                    }else{
                                    if(n1[5] == '1' && n2[5] == '1' && tempSub == '0'){
                                        sub[5] = '0';
                                        tempSub = '0';
        	                        }else{
                                        if(n1[5] == '1' && n2[5] == '1' && tempSub == '1'){
                                            sub[5] = '1';
                                            tempSub = '1';
        	                            }
                                    }
                                }
                            }
                        }
                    }
                }
            }

            if(n1[4] == '0' && n2[4] == '1' && tempSub == '0'){
                sub[4] = '1';
                tempSub = '1';
        	}else{
                if(n1[4] == '0' && n2[4] == '1' && tempSub == '1'){
                    sub[4] = '0';
                    tempSub = '0';
        	    }else {
                    if(n1[4] == '0' && n2[4] == '0' && tempSub == '0'){
                        sub[4] = '0';
                        tempSub = '0';
        	        }else{
                        if(n1[4] == '0' && n2[4] == '0' && tempSub == '1'){
                            sub[4] = '1';
                            tempSub = '0';
        	            }else{
                            if(n1[4] == '1' && n2[4] == '0' && tempSub == '0'){
                                sub[4] = '1';
                                tempSub = '0';
        	                }else{
                                if(n1[4] == '1' && n2[4] == '0' && tempSub == '1'){
                                    sub[4] = '0';
                                    tempSub = '0';
        	                    }else{
                                    if(n1[4] == '1' && n2[4] == '1' && tempSub == '0'){
                                        sub[4] = '0';
                                        tempSub = '0';
        	                        }else{
                                        if(n1[4] == '1' && n2[4] == '1' && tempSub == '1'){
                                            sub[4] = '1';
                                            tempSub = '1';
        	                            }
                                    }
                                }
                            }
                        }
                    }
                }
            }

            if(n1[3] == '0' && n2[3] == '1' && tempSub == '0'){
                sub[3] = '1';
                tempSub = '1';
        	}else{
                if(n1[3] == '0' && n2[3] == '1' && tempSub == '1'){
                    sub[3] = '0';
                    tempSub = '0';
        	    }else {
                    if(n1[3] == '0' && n2[3] == '0' && tempSub == '0'){
                        sub[3] = '0';
                        tempSub = '0';
        	        }else{
                        if(n1[3] == '0' && n2[3] == '0' && tempSub == '1'){
                            sub[3] = '1';
                            tempSub = '0';
        	            }else{
                            if(n1[3] == '1' && n2[3] == '0' && tempSub == '0'){
                                sub[3] = '1';
                                tempSub = '0';
        	                }else{
                                if(n1[3] == '1' && n2[3] == '0' && tempSub == '1'){
                                    sub[3] = '0';
                                    tempSub = '0';
        	                    }else{
                                    if(n1[3] == '1' && n2[3] == '1' && tempSub == '0'){
                                        sub[3] = '0';
                                        tempSub = '0';
        	                        }else{
                                        if(n1[3] == '1' && n2[3] == '1' && tempSub == '1'){
                                            sub[3] = '1';
                                            tempSub = '1';
        	                            }
                                    }
                                }
                            }
                        }
                    }
                }
            }

            if(n1[2] == '0' && n2[2] == '1' && tempSub == '0'){
                sub[2] = '1';
                tempSub = '1';
        	}else{
                if(n1[2] == '0' && n2[2] == '1' && tempSub == '1'){
                    sub[2] = '0';
                    tempSub = '0';
        	    }else {
                    if(n1[2] == '0' && n2[2] == '0' && tempSub == '0'){
                        sub[2] = '0';
                        tempSub = '0';
        	        }else{
                        if(n1[2] == '0' && n2[2] == '0' && tempSub == '1'){
                            sub[2] = '1';
                            tempSub = '0';
        	            }else{
                            if(n1[2] == '1' && n2[2] == '0' && tempSub == '0'){
                                sub[2] = '1';
                                tempSub = '0';
        	                }else{
                                if(n1[2] == '1' && n2[2] == '0' && tempSub == '1'){
                                    sub[2] = '0';
                                    tempSub = '0';
        	                    }else{
                                    if(n1[2] == '1' && n2[2] == '1' && tempSub == '0'){
                                        sub[2] = '0';
                                        tempSub = '0';
        	                        }else{
                                        if(n1[2] == '1' && n2[2] == '1' && tempSub == '1'){
                                            sub[2] = '1';
                                            tempSub = '1';
        	                            }
                                    }
                                }
                            }
                        }
                    }
                }
            }

            if(n1[1] == '0' && n2[1] == '1' && tempSub == '0'){
                sub[1] = '1';
                tempSub = '1';
        	}else{
                if(n1[1] == '0' && n2[1] == '1' && tempSub == '1'){
                    sub[1] = '0';
                    tempSub = '0';
        	    }else {
                    if(n1[1] == '0' && n2[1] == '0' && tempSub == '0'){
                        sub[1] = '0';
                        tempSub = '0';
        	        }else{
                        if(n1[1] == '0' && n2[1] == '0' && tempSub == '1'){
                            sub[1] = '1';
                            tempSub = '0';
        	            }else{
                            if(n1[1] == '1' && n2[1] == '0' && tempSub == '0'){
                                sub[1] = '1';
                                tempSub = '0';
        	                }else{
                                if(n1[1] == '1' && n2[1] == '0' && tempSub == '1'){
                                    sub[1] = '0';
                                    tempSub = '0';
        	                    }else{
                                    if(n1[1] == '1' && n2[1] == '1' && tempSub == '0'){
                                        sub[1] = '0';
                                        tempSub = '0';
        	                        }else{
                                        if(n1[1] == '1' && n2[1] == '1' && tempSub == '1'){
                                            sub[1] = '1';
                                            tempSub = '1';
        	                            }
                                    }
                                }
                            }
                        }
                    }
                }
            }

            if(n1[0] == '0' && n2[0] == '1' && tempSub == '0'){
                sub[0] = '1';
                tempSub = '1';
        	}else{
                if(n1[0] == '0' && n2[0] == '1' && tempSub == '1'){
                    sub[0] = '0';
                    tempSub = '0';
        	    }else {
                    if(n1[0] == '0' && n2[0] == '0' && tempSub == '0'){
                        sub[0] = '0';
                        tempSub = '0';
        	        }else{
                        if(n1[0] == '0' && n2[0] == '0' && tempSub == '1'){
                            sub[0] = '1';
                            tempSub = '0';
        	            }else{
                            if(n1[0] == '1' && n2[0] == '0' && tempSub == '0'){
                                sub[0] = '1';
                                tempSub = '0';
        	                }else{
                                if(n1[0] == '1' && n2[0] == '0' && tempSub == '1'){
                                    sub[0] = '0';
                                    tempSub = '0';
        	                    }else{
                                    if(n1[0] == '1' && n2[0] == '1' && tempSub == '0'){
                                        sub[0] = '0';
                                        tempSub = '0';
        	                        }else{
                                        if(n1[0] == '1' && n2[0] == '1' && tempSub == '1'){
                                            sub[0] = '1';
                                            tempSub = '1';
                                            /* overflow desconsiderado */
        	                            }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            printf("%sb\n%c\n%sb\n=\n%s\n", n1, operacao, n2, sub);
        }
    }
    return 0;
}
