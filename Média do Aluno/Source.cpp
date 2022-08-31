#include <stdio.h>
#include <stdlib.h>
//Ler duas notas, calcular a média e verificar se o aluno está aprovado ou reprovado (6,0).
int main (){
	float n1=0,n2=0,media=0;

	printf("\nDigite a primeira nota do aluno: ");
	scanf("%f",&n1);
	printf("\nDigite a segunda nota do aluno: ");
	scanf("%f",&n2);

	media=(n1+n2)/2;

	printf("\nA media do aluno e igual a: %.2f ",media);

	if (media>=6)
		printf("\nAluno Aprovado\n\n");
	else
		printf("\nAluno Reprovado\n\n");

	system("pause");

}