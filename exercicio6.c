//Fa�a um programa que leia n n�meros e imprima o n�mero de maior valor absoluto
// usu�rio determine a quantidade de n�meros manipulados

//=================================================================================
#include <stdio.h>
#include <math.h>

int main(){
	float num,maior;
	int i=0,n;
	printf("Digite a quantidade de numeros:\n");
	scanf("%d",&n);
	printf("Digite o primeiro numero real:\n");
	scanf("%f",&num);
	maior=abs(num);
	
	while(i<n){
		printf("Digite o primeiro numero real:\n");
		scanf("%f",&num);
		if(maior<abs(num))
			maior=abs(num);
		i++;
	}
	printf("\n\nMaior valor absoluto = %f",maior);
	return 0;

}
