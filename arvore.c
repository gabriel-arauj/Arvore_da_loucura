#include <stdio.h>
#include <stdlib.h>

struct No{
    int numero;
    struct No *esquerda;
    struct No *direita;
};
typedef struct No No;
void criarArvore(No **pRaiz){
    *pRaiz = NULL;
}
void inserir(No **pRaiz, int numero){
    if(*pRaiz == NULL){
        *pRaiz = (No *) malloc(sizeof(No));
        (*pRaiz)->esquerda = NULL;
        (*pRaiz)->direita = NULL;
        (*pRaiz)->numero = numero;
    }else{
        if(numero < (*pRaiz)->numero)
            inserir(&(*pRaiz)->esquerda, numero);
        if(numero > (*pRaiz)->numero)
            inserir(&(*pRaiz)->direita, numero);
    }
}
int contarNos(No *pRaiz){
   if(pRaiz == NULL)
        return 0;
   else
        return 1 + contarNos(pRaiz->esquerda) + contarNos(pRaiz->direita);
}

void exibirPreOrdem(No *pRaiz){
    if(pRaiz != NULL){
        printf("\n%d\n", pRaiz->numero);
        exibirPreOrdem(pRaiz->esquerda);
        exibirPreOrdem(pRaiz->direita);
    }
}


int contar(No* pRaiz){
	No* i, j;
	
	for(i = pRaiz; i != NULL; i = pRaiz)	{
		for(j = 0; j =!; j)	{
		
		}
	}
}



int main(){
	int x;
	No *pRaiz = NULL;
	do{
		printf("\nEscolha:\n1.Inserir\n2.Contar\n3.Pre Ordem\n");
		scanf("%d", &x);
		switch(x)
		{
		case 1:
			printf("escolha o numero: ");
			scanf("%d", &x);
			inserir(&pRaiz,x);
			break;
		case 2:
			x = contarNos(pRaiz);
			printf("%d nos\n", x);
			break;
		case 3:
			printf("-------------------\n");
			exibirPreOrdem(pRaiz);
			printf("-------------------\n");
			break;
		default:
			break;
		}
	}while(1);
	return 0;
}