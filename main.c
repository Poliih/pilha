#include <stdio.h>
#include <stdlib.h>

#define tamanho 3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	struct tipo_pilha{
		int dado[tamanho];
		int ini;
		int topo;
	};	
	struct tipo_pilha pilha;
void empilha(int elemento){
	if(pilha.topo == tamanho){
		printf("Fila cheia.\n");
		system ("pause");
	}
	else
	{
		pilha.dado[pilha.topo] = elemento;
		pilha.topo++;
	}
}	
int desempilha(){
		int elemento;
		if(pilha.topo == pilha.ini){
			printf("Fila vazia.\n");
			system("pause");
		}
		else
		{
			pilha.topo--;
			elemento = pilha.dado[pilha.topo];
			return elemento;
		}
	}

	
	return 0;
}
