#include <stdio.h>
#include <stdlib.h>



void insertionSortC( int vetorDesordenado[], int tamanhoVetor)
{
	int i,j,valorAtual;
	
	for(j=1;j<tamanhoVetor;j++)
	{
		valorAtual=vetorDesordenado[j];
		i = j-1;
		
		while(i>=0 && vetorDesordenado[i] > valorAtual)
		{
			vetorDesordenado[i+1] = vetorDesordenado[i];
			i--;
		}
		
		vetorDesordenado[i+1] = valorAtual;
	}
}

void insertionSortD( int vetorDesordenado[], int tamanhoVetor)
{
		int i,j,valorAtual;
	
	for(j=1;j<tamanhoVetor;j++)
	{
		valorAtual=vetorDesordenado[j];
		i = j-1;
		
		while(i>=0 && vetorDesordenado[i] < valorAtual)
		{
			vetorDesordenado[i+1] = vetorDesordenado[i];
			i--;
		}
		
		vetorDesordenado[i+1] = valorAtual;
	}
}





int main()
{
	
	int v[] = {1,4,7,8,11,10,15,0};
	int v2[] = {4,1,0,20,15,18,21,2};
	int i,j;
	
	
	insertionSortC(v,8);
	
	for(i=0;i<8;i++)
		printf("Vetor[%d]:%d\n",i,v[i]);
		
		printf("\n\n");
		
	insertionSortD(v2,8);
	
	for(j=0;j<8;j++)
		printf("Vetor[%d]:%d\n",j,v2[j]);
	
	
	system("PAUSE");
	return 0;
}
