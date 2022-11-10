#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	
	char vector[100],vector2[100], vector3[100];
	int i, x, y;
	int hit=0,letter, mode, chance, medium;
	float div;
	
	setlocale(LC_ALL,"portuguese");
	
//	Aqui pede para escolher qual dificuldade deseja
	printf("Digite qual modo de jogo deseja:\n [1] Fácil  \n [2] Médio  \n [3] Difícil \n => ");
	scanf("%i",&mode);
	
//	Aqui pede para informar quantas letras tera a palavra a ser descoberta
	printf("\n=> Digite a quantidade de que letras terá sua palavra: ");
	scanf("%i",&letter);
	
//	Aqui é onde se pede para informar cada letra da palavra
	for(i=0;i<letter;i++){
		printf("Digite a %i° letra de sua palavra: ",i+1);
		scanf("%s",&vector[i]);
	}
//	Função para limpar os textos anteriores
	system("cls");
	printf("Agora deixe para seu amigo adivinhar! \n");

	if(mode==1){
//	Na modalidade fácil você terá o dobro de letras como tentativa
	chance=2*letter;
//	Se for o modo fácil
		printf("Você terá %i chances para acertar a palavra...\n",chance);
		printf("Com %i letras \n",letter);
		
		for(x=0;x<chance;x++){
//	Enquanto x for menor que suas chances
//	Você ainda terá tentativas
			printf("\nDigite a %i° sua tentativa: \n",x+1);
			scanf("%s",&vector2[x]);

				for(y=0;y<letter;y++){
//	Forma de comparar se a letra é correta e deixar de uma forma de melhor compreençao
					if(vector2[x]!=vector[y]){
						printf("_ ");
//	Se for diferente escreve "_"
				}
					if(vector2[x]==vector[y]){
						hit=hit+1;
						printf("%c ",vector[y]);
//	Se for igual escreve a letra que acertou
				}
					if(hit==letter){
						system("cls");
						printf("\nParabéns você acertou todas as letras!");
				
						return 0;
				}
			}
		}
		if(x==chance){
			system("cls");
			printf("Infelizmente você não acertou a palavra.");
			
			return 0;
		}
	}
//	Função para limpar os textos anteriores
	system("cls");
	printf("Agora deixe para seu amigo adivinhar! \n");

	if(mode==2){
//	Na modalidade médio você terá o dobro menos a metade de letras de tentativas
	div=letter/2;
	medium=ceil(div);
	chance=2*letter-medium;
//	Se for o modo médio
		printf("Você terá %i chances para acertar a palavra...\n",chance);
		printf("Com %i letras \n",letter);
		
		for(x=0;x<chance;x++){
//	Enquanto x for menor que suas chances
//	Você ainda terá tentativas
			printf("\nDigite a %i° sua tentativa: \n",x+1);
			scanf("%s",&vector2[x]);
				
				for(y=0;y<letter;y++){
//	Forma de comparar se a letra é correta e deixar de uma forma de melhor compreençao
					if(vector2[x]!=vector[y]){
						printf("_ ");
//	Se for diferente escreve "_"
				}
					if(vector2[x]==vector[y]){
						hit=hit+1;
						printf("%c ",vector[y]);
//	Se for igual escreve a letra que acertou
				}
					if(hit==letter){
						system("cls");
						printf("\nParabéns você acertou todas as letras!");
				
						return 0;
				}
			}
		}
		if(x==chance){
			system("cls");
			printf("Infelizmente você não acertou a palavra.");
			
			return 0;
		}
	}
	//	Função para limpar os textos anteriores
	system("cls");
	printf("Agora deixe para seu amigo adivinhar! \n");

	if(mode==3){
//	Na modalidade díficil você terá a quantidade de letras como tentativas
	chance=letter;
//	Se for o modo díficil
		printf("Você terá %i chances para acertar a palavra...\n",chance);
		printf("Com %i letras \n",letter);
		
		for(x=0;x<chance;x++){
//	Enquanto x for menor que suas chances
//	Você ainda terá tentativas
			printf("\nDigite a %i° sua tentativa: \n",x+1);
			scanf("%s",&vector2[x]);
				
				for(y=0;y<letter;y++){
//	Forma de comparar se a letra é correta e deixar de uma forma de melhor compreençao
					if(vector2[x]!=vector[y]){
						printf("_ ");
//	Se for diferente escreve "_"
				}
					if(vector2[x]==vector[y]){
						hit=hit+1;
						printf("%c ",vector[y]);
//	Se for igual escreve a letra que acertou
				}
					if(hit==letter){
						system("cls");
						printf("\nParabéns você acertou todas as letras!");
				
						return 0;
				}
			}
		}
		if(x==chance){
			system("cls");
			printf("Infelizmente você não acertou a palavra.");
			
			return 0;
		}
	}
	
	
	return 0;
}
