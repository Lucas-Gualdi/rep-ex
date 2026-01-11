#include <stdio.h>
int main(){

	int a,b;
	
	//leitura do primeiro caractere da soma
	printf("Digite o primeiro valor a ser adicionado na soma:\n");
	scanf("%d", &a);
	
	int flag = 0;
	int soma = 0 + a;
	
	//leitura dos caracteres seguintes, baseado na necessidade do usuário
	while(flag == 0){
		int n = 0;
		printf("Digite o proximo numero a ser adicionado na soma:\n");
		scanf("%d", &n);
		soma += n;
		printf("Deseja adicionar mais algum numero na soma? (0 = sim / 1 = nao)\n");
		scanf("%d", &flag);
	}
	
	printf("Resultado da soma: %d", soma);
	
}
