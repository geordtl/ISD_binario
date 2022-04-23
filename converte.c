#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	/* variáveis */
	/* índices */
	int j, k, s, i, m, n, p, q, r, z, y, u, l, d, h,

		/* auxiliares */
		n1c, n2c, n1q, n2q, contaDigitos, contaDigitos2, tempSoma = 0, tempSub = 0, tempSub2 = 0, tempSub3 = 0,

		/* arrays */
		numero1[9], numero2[9],

		/* operações */
		mod, mod2, soma, sub, sub2, potDec = 1, totSoma[9], totSub[9], comp2, totComp2[9], n1Dec, soma1Dec = 0, soma2Dec = 0;
	char n1[9], n1s[9], n1Sub[9], n2[9], n2s[9], n2Sub[9], operacao, somaChar[9], subChar[9], comp2C[9];

	scanf("%8s", n1);
	n1q = strtol(n1, NULL, 10);
	n1c = n1q;

	contaDigitos = strlen(n1);
	for (k = 0; k < (8 - contaDigitos); k++)
	{
		numero1[k] = 0;
	}

	for (s = (8 - contaDigitos); s < 8; s++)
	{
		numero1[s] = (int)n1[s - (8 - contaDigitos)];

		if (numero1[s] == 48)
		{
			numero1[s] = 0;
		}
		if (numero1[s] == 49)
		{
			numero1[s] = 1;
		}
	}

	if (strcmp(n1, "S") == 0)
	{
		printf("O programa foi encerrado!\n");
	}
	else
	{
		scanf(" %c", &operacao);
		scanf(" %8s", n2);
		n2c = strtol(n2, NULL, 10);
		n2q = n2c;

		contaDigitos2 = strlen(n2);
		if (operacao == '+' || operacao == '-')
		{
			for (m = 0; m < (8 - contaDigitos2); m++)
			{
				numero2[m] = 0;
			}

			for (n = (8 - contaDigitos2); n < 8; n++)
			{
				numero2[n] = (int)n2[n - (8 - contaDigitos2)];

				if (numero2[n] == 48)
				{
					numero2[n] = 0;
				}
				if (numero2[n] == 49)
				{
					numero2[n] = 1;
				}
			}
		}

		if (operacao == '+')
		{
			for (p = 7; p >= 0; p--)
			{
				soma = numero1[p] + numero2[p] + tempSoma;

				switch (soma)
				{
				case 0:
					soma = 0;
					tempSoma = 0;
					break;
				case 1:
					soma = 1;
					tempSoma = 0;
					break;
				case 2:
					soma = 0;
					tempSoma = 1;
					break;
				case 3:
					soma = 1;
					tempSoma = 1;
					break;
				}
				totSoma[p] = soma;
			}

			for (q = 7; q >= 0; q--)
			{
				n1[q] = numero1[q] + '0';
				n2[q] = numero2[q] + '0';
				somaChar[q] = totSoma[q] + '0';
			}

			int converteN1 = strtol(n1, NULL, 10);
			int converteN2 = strtol(n2, NULL, 10);
			int converteSoma = strtol(somaChar, NULL, 10);

			for (l = 0; l <= contaDigitos; l++)
			{
				mod = n1c % 10;
				n1c = n1c / 10;

				mod2 = n2c % 10;
				n2c = n2c / 10;

				soma1Dec = soma1Dec + mod * potDec;
				soma2Dec = soma2Dec + mod2 * potDec;
				potDec = potDec * 2;
			}

			printf("%db (%di)\n%c\n%db (%di)\n=\n%db\n", converteN1, soma1Dec, operacao, converteN2, soma2Dec, converteSoma);
		}
		if (operacao == '-')
		{
			/* implementa o complemento a 1 */
			if((numero1[0] == 0 && numero2[0] == 0) || (numero1[0] == 1 && numero2[0] == 0)){
			for (r = 0; r <= 7; r++)
			{
				if (numero2[r] == 1)
				{
					numero2[r] = 0;
				}
				else
				{
					numero2[r] = 1;
				}
			}

				/* implementa o complemento a 2 */
			for (z = 7; z >= 0; z--)
			{

				if (z == 7)
				{
					if (numero2[7] == 1)
					{
						comp2 = 0;
						tempSub = 1;
					}
					else
					{
						comp2 = numero2[z] + 1 + tempSub;
					}
				}
				else
				{
					comp2 = numero2[z] + tempSub;
				}

				switch (comp2)
				{
				case 1:
					sub = 1;
					tempSub = 0;
					break;
				case 2:
					sub = 0;
					tempSub = 1;
					break;
				case 3:
					sub = 1;
					tempSub = 1;
					break;
				}
				totComp2[z] = comp2;
			}
		}

		if((numero1[0] == 0 && numero2[0] == 1) || (numero1[0] == 1 && numero2[0] == 1)){
			/* tirando o complemento a 2 */
			for (z = 7; z >= 0; z--){
				if (z == 7)
				{
					if (numero2[7] == 0)
					{
						totComp2[z] = 1;
						tempSub = 1;
						z = 6;
					}
					else
					{
						totComp2[z] = 0;
						tempSub = 0;
						z = 6;
					}
				}
				if (z <= 6 && z >= 0)
				{
					sub = numero2[z] - tempSub;
				}
				
				switch (sub)
				{
				case 0:
					sub = 0;
					tempSub = 0;
					totComp2[z] = sub;
				break;
				case 1:
					sub = 1;
					tempSub = 0;
					totComp2[z] = sub;
				break;
				}
			}
			
				/* tirando o complemento a 1 */
				for (r = 0; r <= 7; r++)
				{
					if (totComp2[r] == 1)
					{
						totComp2[r] = 0;
					}
					else
					{
						totComp2[r] = 1;
					}
				}
		}

			/* soma os binários */
			for (u = 7; u >= 0; u--)
			{

				sub2 = numero1[u] + totComp2[u] + tempSub2;

				switch (sub2)
				{
				case 0:
					sub2 = 0;
					tempSub2 = 0;
					break;
				case 1:
					sub2 = 1;
					tempSub2 = 0;
					break;
				case 2:
					sub2 = 0;
					tempSub2 = 1;
					break;
				case 3:
					sub2 = 1;
					tempSub2 = 1;
					break;
				}
				totSub[u] = sub2;
			}

			for (y = 7; y >= 0; y--)
			{
				n1Sub[y] = numero1[y] + '0';
				n2Sub[y] = numero2[y] + '0';
				comp2C[y] = totComp2[y] + '0';
				subChar[y] = totSub[y] + '0';
			}

			int converteN1 = strtol(n1Sub, NULL, 10);
			int converteN2 = strtol(n2Sub, NULL, 10);
			int converteSub = strtol(subChar, NULL, 10);

			printf("%db\n%c\n%db\n=\n%db\n", converteN1, operacao, converteN2, converteSub);
		}
	}
	return 0;
}
