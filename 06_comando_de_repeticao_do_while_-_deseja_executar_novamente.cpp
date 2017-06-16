# include <stdio.h>

main()
{	
	int i=0;
	do
	{		
		printf("Deseja executar novamente sim(1) não(0): ");
		scanf("%d",&i);
		
	}
	while(i!=0);
	printf("Tchau !");
}
