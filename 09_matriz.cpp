#include <stdio.h>
#include <stdlib.h>

main()
{
	int x[2][2],l,c,i=0;
	printf("Matriz 2x2\n\n");
	//Preenche e imprime matriz.   
	for (l = 0; l < 2; l++) {
	    for (c = 0; c < 2; c++)
		{
			i++;
			x[l][c] = i;
			printf("%d ",x[l][c]);
		}
		printf("\n");    
	}
}
