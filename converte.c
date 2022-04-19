#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void){
    int j, k, s, i, numero1[9], numero2[9], n1c, n2c, n1q, n2q, contaDigitos;
    char n1[9], n2[9], soma[9], sub[9], tempSoma = 0, tempSub, tempSub2, operacao;

    scanf("%8s", n1);
    n1q = strtol(n1, NULL, 10);
    n1c = n1q;
    
    contaDigitos = strlen(n1);
    for(k = 0; k < (8-contaDigitos); k++){
    	numero1[k] = 0;	
    }
    
    for(i = 0; i <= n1c*10; i++){
    	aux = n1c%10;
    	n1c = n1c/10;
    	
    	numero1[i] = aux;
    }
    
    for(s = (8-contaDigitos); s < 8; s++){
    	numero1[s] = strtol(n1[s-(8-contaDigitos)]);
    }
    
    printf("%d\n", numero1[0]);
    printf("%d\n", numero1[1]);
    printf("%d\n", numero1[2]);
    printf("%d\n", numero1[3]);
    printf("%d\n", numero1[4]);
    printf("%d\n", numero1[5]);
    printf("%d\n", numero1[6]);
    printf("%d\n", numero1[7]);
    
    int aux = 0;
    int aux2 = 0;
    
    
    if (strcmp(n1, "S") == 0) {
        printf("O programa foi encerrado!\n");
    } else {
        scanf(" %c", &operacao);
        scanf(" %8s", n2);
        n2c = strtol(n2, NULL, 10);
        n2q = n2c;
        
        for(j = 0; j <= n2c*10; j++){
            aux2 = n2c%10;
            n2c = n2c/10;
            
            numero2[j] = aux2;
        }
        
        if(operacao == '+'){
           /*printf("%db\n%c\n%db\n=\n", numero1, operacao, numero2);*/
        }
    }
      
    return 0;
}
