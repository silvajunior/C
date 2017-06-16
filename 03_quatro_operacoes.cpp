# include <stdio.h>

main()
{	
	int n1,n2,resultado;
	printf("Digite o primeiro numero:");
	scanf("%d",&n1);
		printf("Digite o segundo numero:");
	scanf("%d",&n2);
	//Note que a cada operacao a variavel "resultado" é sobrescrita.
	
	resultado=n1+n2;
	printf("Adicao: %d \n",resultado);
	resultado=n1-n2;
	printf("Subtracao: %d \n",resultado);
	resultado=n1*n2;
	printf("Multiplicacao: %d \n",resultado);
	resultado=n1/n2;
	printf("Divisao: %d \n",resultado);


}
