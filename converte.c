#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void){
    int j, k, s, i, m, n, numero1[9], numero2[9], n1c, n2c, n1q, n2q, contaDigitos, aux = 0, aux2 = 0;
    char n1[9], n2[9], soma[9], sub[9], tempSoma = 0, tempSub, tempSub2, operacao;

    scanf("%8s", n1);
    n1q = strtol(n1, NULL, 10);
    n1c = n1q;
    
    contaDigitos = strlen(n1);
    for(k = 0; k < (8-contaDigitos); k++){
    	numero1[k] = 0;	
    }
    
    
    for(s = (8-contaDigitos); s < 8; s++){
    	numero1[s] = (int)n1[s-(8-contaDigitos)];
    	
    	if(numero1[s] == 48){
    		numero1[s] = 0;
    	}
    	if(numero1[s] == 49){
    		numero1[s] = 1;
    	}
    }
    
    
    if (strcmp(n1, "S") == 0) {
        printf("O programa foi encerrado!\n");
    } else {
        scanf(" %c", &operacao);
        scanf(" %8s", n2);
        n2c = strtol(n2, NULL, 10);
        n2q = n2c;
        
        if(operacao == '+'){
        contaDigitos2 = strlen(n2);
        
	    for(m = 0; m < (8-contaDigitos2); m++){
	    	numero2[m] = 0;	
	    }
	    
	    for(n = (8-contaDigitos2); n < 8; n++){
	    	numero2[n] = (int)n2[n-(8-contaDigitos2)];
	    	
	    	if(numero2[n] == 48){
	    		numero2[n] = 0;
	    	}
	    	if(numero2[n] == 49){
	    		numero2[n] = 1;
	    	}
	    }
        	
        	    printf("%d\n", numero2[0]);
		    printf("%d\n", numero2[1]);
		    printf("%d\n", numero2[2]);
		    printf("%d\n", numero2[3]);
		    printf("%d\n", numero2[4]);
		    printf("%d\n", numero2[5]);
		    printf("%d\n", numero2[6]);
		    printf("%d\n", numero2[7]);
           /*printf("%db\n%c\n%db\n=\n", numero1, operacao, numero2);*/
        }
    }
      
    return 0;
}
