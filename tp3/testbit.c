/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "fr-FR");

	unsigned int val = 0xAAFF0000;

	unsigned int tmp = val;

	printf("\nTaille de la variable val : %u\n", sizeof(val));

	int nbBits = 8 * sizeof(val);
	printf("\nLe nombre a %d bits", nbBits);

	for (int i = 1; i <= nbBits; i++)
	{
		// test du bit de poids faible
		if ((tmp & 1) == 1)
		{
			printf("\nbit %2d : ON", i);
		}
		else
		{
			printf("\nbit %2d : OFF", i);
		}
		// décalage de la valeur à droite
		tmp >>= 1;
		//printf("\ntmp : %x", tmp);
	}

	while (Nb > 0)
	{
		Nb >>= 1;
		compteur++;
	}
	
	printf("\nBye !\n");
	//system("pause");
	return (EXIT_SUCCESS);
}
