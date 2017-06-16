# include <stdio.h>

main()
{	
	int n1;
	printf("Digite um numero menor que 10:  ");
	scanf("%d",&n1);
	// Os comandos "if" e "else" equivalem a "se" e "senão".
	
	if(n1<10)
	{
		printf("Ok!");	
	}else
	{
		printf("O numero digitado eh maior ou igual a 10.");
	}

}
