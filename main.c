#include <stdio.h>
#include <stdlib.h>


int main() {
	
	//opcao 1
	int opcao;
	float notap1, notap2, notat1, notat2, bimestre1, bimestre2, mediafinal, notapr, notatr, mediarecuperacao;
	
	//opcao 2 e 3

	
	do{
		printf("\nMENU PIKA");
		printf("\n----");
		printf("\n(1)Media FATEC");
		printf("\n(2)Ajuste de preco com IF");
		printf("\n(3)Ajuste de preco com Switch");
		printf("\n(4)Fatorial");
		printf("\n(5)Fibonacci");
		printf("\n(6)P.A");
		printf("\n(7)Fatorial (While)");
		printf("\n(8)Fibonacci (While)");
		printf("\n(9)P.A(while)");
		printf("\n(10)Fatorial (For)");
		printf("\n(11)Fibonacci (For)");
		printf("\n(12)P.A (For)");
		printf("\n(13)Manipulacao de valores");
		printf("\n(14)Teste do exercicio em sala (terminador, string e char)");
		printf("\n(15)Quantidade de caracteres de uma string");
		printf("\n(16)Numero de ocorrencias de um caracter em uma string");
		printf("\n(17)Verificar se uma palavra eh um palindromo");
		printf("\n(18)Saia");
		printf("\nDigite a opcao: ");
		scanf("%i", &opcao);
		
		switch(opcao){
		
			case 1:
				
				printf("\nVoce escolheu (Media FATEC)!\n");
				
				printf("Digite a nota da P1:\n");
				scanf("%f",&notap1);
				printf("Digite a nota do T1:\n");
				scanf("%f",&notat1);
				
				bimestre1 = notap1*0.7 + notat1*0.3;
				printf("Sua nota no bimestre 1 eh: %.2f \n",bimestre1);
				
				printf("Digite a nota da P2:\n");
				scanf("%f",&notap2);
				printf("Digite a nota do T2:\n");
				scanf("%f",&notat2);
				
				bimestre2 = notap2*0.6 + notat2*0.4;
				printf("Sua nota no bimestre 2 eh: %.2f \n",bimestre2);
				
				mediafinal = (bimestre1 + bimestre2)/2;
				
				printf("A media final eh: %.2f\n", mediafinal);
				
				if(mediafinal>=6.00){
					printf("Aprovado!\n");
				} else {
					printf("Recuperacao!\n");
					printf("Digite a nota da prova de recuperacao: \n");
					scanf("%f", &notapr);
					
					printf("Digite a nota do trabalho de recuperacao: \n");
					scanf("%f", &notatr);
					
					mediarecuperacao = notapr*0.3 + notatr*0.3;
					
					mediafinal += mediarecuperacao;
					
					printf("%.2f \n", mediafinal);
					
					if(mediafinal>=6.00){
						printf("Aprovado!\n");
					} else {
						printf("Reprovado! Nos vemos no proximo semestre!\n");
					}
				}
				system("pause");
				system("cls");
				break;
				
			case 2: {

				float precosemajuste, precocomajuste;
				char opcaodesconto;
				
				printf("\nVoce escolheu ajuste de preco (com IF)!\n");
				
				printf("Digite o preco a ser ajustado: \n");
				scanf("%f", &precosemajuste);
	
				printf("Opcoes de desconto: \n");
				printf("A - 5\nB - 8\nC - 20\nD - 35\n");
				printf("Digite a opcao do desconto (em porcentagem): \n");
				scanf(" %c", &opcaodesconto);
				
				if(opcaodesconto == 'A' || opcaodesconto == 'a'){
					precocomajuste = precosemajuste - (0.05*precosemajuste);
				}
				
				if(opcaodesconto == 'B' || opcaodesconto == 'b'){
					precocomajuste = precosemajuste - (0.08*precosemajuste);
				}
				
				if(opcaodesconto == 'C' || opcaodesconto == 'c'){
					precocomajuste = precosemajuste - (0.20*precosemajuste);
				}
				
				if(opcaodesconto == 'D' || opcaodesconto == 'd'){
					precocomajuste = precosemajuste - (0.35*precosemajuste);
				} else {
					printf("Nao existe essa opcao!\n");
				}
				
				printf("O preco anterior era: %.2f\n",precosemajuste);
				printf("O novo preco eh: %.2f\n",precocomajuste);
				
				system("pause");
				system("cls");
				break;
				
			}
				
			case 3: {

				float precosemajuste, precocomajuste;
				char opcaodesconto;
				
				printf("\nVoce escolheu ajuste de preco (com SWITCH)!\n");
				
				printf("Digite o preco a ser ajustado: \n");
				scanf("%f", &precosemajuste);
				
				printf("Opcoes de desconto: \n");
				printf("A - 5\nB - 8\nC - 20\nD - 35\n");
				printf("Digite a opcao do desconto (em porcentagem): \n");
				scanf(" %c", &opcaodesconto);
				
				switch(opcaodesconto){
				case 'a':
					precocomajuste = precosemajuste - (0.05*precosemajuste);
					break;
				case 'b':
					precocomajuste = precosemajuste - (0.08*precosemajuste);
					break;
				case 'c':
					precocomajuste = precosemajuste - (0.20*precosemajuste);
					break;
				case 'd':
					precocomajuste = precosemajuste - (0.35*precosemajuste);
					break;
				default:
					printf("Nao ha essa opcao!\n");
					break;
				}
	
				printf("O preco anterior era: %.2f\n",precosemajuste);
				printf("O novo preco eh: %.2f\n",precocomajuste);
				
				system("pause");
				system("cls");
				break;
				
			}
				
			case 4: {
				
				int i,numfatorial,resultadofatorial=1;
				
				printf("\nVoce escolheu fatorial de um numero!\n");
				
				printf("Digite um numero para realizar o fatorial dele: \n");
				scanf("%i",&numfatorial);

				do{
					
					resultadofatorial *= numfatorial;
					numfatorial--;
					
				}while(numfatorial>0);
				
				printf("O fatorial desse numero eh: %i\n",resultadofatorial);
			
				system("pause");
				system("cls");
				break;
			}
			
			case 5: {
				
				int termo1 = 0, termo2 = 1, termoatual = 0, i = 3, numerodetermos = 0;
				
				termoatual = termo1 + termo2;
				
				printf("\nVoce escolheu fibonacci!\n");
				
				printf("Digite o numero de termos que voce quer: \n");
				scanf("%i",&numerodetermos);
				
				printf("Fibonacci: \n");
				printf("%i %i ",termo1,termo2);
				
				do{
					
					printf("%i ",termoatual);
					
					termo1 = termo2;
					termo2 = termoatual;
					termoatual = termo1 + termo2;
					
					i++;
					
				}while(i<=numerodetermos);
				
				    
				system("pause");
				system("cls");
				break;
			}
			
			case 6: {
				
				int termo1 = 0, termo2 = 0, razao = 0;
				
				printf("\nVoce escolheu P.A!\n");
				
				printf("Digite o primeiro termo: ");
				scanf("%i",&termo1);
				
				printf("Digite o segundo termo: ");
				scanf("%i",&termo2);
				
				printf("Digite a razao: ");
				scanf("%i",&razao);
				
				if(razao>0){
					
					do{
						
						printf("%i ",termo1);
						termo1 += razao;
						
					} while(termo1<termo2);
					
				} else {
				
					printf("A razao deve ser positiva para uma PA!\n");
					
				}
				
				system("pause");
				system("cls");
				break;
			}
			
			case 7: {
				
				int i,numfatorial,resultadofatorial=1;
				
				printf("\nVoce escolheu fatorial de um numero (COM WHILE)!\n");
				
				printf("Digite um numero para realizar o fatorial dele: \n");
				scanf("%i",&numfatorial);
				
				while(numfatorial>0){
					
					resultadofatorial *= numfatorial;
					numfatorial--;
					
				};
				
				printf("O fatorial desse numero eh: %i\n",resultadofatorial);
				
				system("pause");
				system("cls");
				break;
			}
			
			case 8:{
				
				int termo1 = 0, termo2 = 1, termoatual = 0, i = 3, numerodetermos = 0;
				
				termoatual = termo1 + termo2;
				
				printf("\nVoce escolheu fibonacci (COM WHILE)!\n");
				
				printf("Digite o numero de termos que voce quer: \n");
				scanf("%i",&numerodetermos);
				
				printf("Fibonacci: \n");
				printf("%i %i ",termo1,termo2);
				
				while(i<numerodetermos){
					
					printf("%i ", termoatual);
					
					termo1 = termo2;
					termo2 = termoatual;
					termoatual = termo1 + termo2;
					
					i++;
					
				};
				
				system("pause");
				system("cls");
				break;
			}
			
			case 9:{
				
				int termo1 = 0, termo2 = 0, razao = 0;
				
				printf("\nVoce escolheu P.A (COM WHILE)!\n");
				
				printf("Digite o primeiro termo: ");
				scanf("%i",&termo1);
				
				printf("Digite o segundo termo: ");
				scanf("%i",&termo2);
				
				printf("Digite a razao: ");
				scanf("%i",&razao);
				
				if(razao>0){
					
					while(termo1<termo2){
						
						printf("%i ",termo1);
						termo1 += razao;
						
					};
					
				} else {
				
					printf("A razao deve ser positiva para uma PA!\n");
					
				}
				
				system("pause");
				system("cls");
				break;
			}	
				
			case 10: {
				
				int i,numfatorial,resultadofatorial=1;				
				
				printf("\nVoce escolheu fatorial (COM FOR)\n");
				
				printf("Digite um numero para realizar o fatorial dele: \n");
				scanf("%i",&numfatorial);
				
				for (; numfatorial > 0; numfatorial--) {
	  				resultadofatorial *= numfatorial;
				}
	
				printf("O fatorial desse numero eh: %i\n",resultadofatorial);
			
				system("pause");
				system("cls");
				break;
				
			}
			
			case 11:{
				
				int termo1 = 0, termo2 = 1, termoatual = 0, i = 3, numerodetermos = 0;
				
				termoatual = termo1 + termo2;
				
				printf("\nVoce escolheu fibonacci (COM FOR)!\n");
				
				printf("Digite o numero de termos que voce quer: \n");
				scanf("%i",&numerodetermos);
				
				printf("Fibonacci: \n");
				printf("%i %i ",termo1,termo2);
				
				
				for(i;i<numerodetermos;i++){
					
					printf("%i ",termoatual);
					
					termo1 = termo2;
					termo2 = termoatual;
					termoatual = termo1 + termo2;
					
				}
				
				system("pause");
				system("cls");
				break;
			}
			
			case 12:{
				
				int termo1 = 0, termo2 = 0, razao = 0, i = 0;
				
				printf("\nVoce escolheu P.A (COM FOR)!\n");
				
				printf("Digite o termo 1: \n");
				scanf("%i",&termo1);
				
				printf("Digite o termo 2: \n");
				scanf("%i",&termo2);
				
				printf("Digite a razao: \n");
				scanf("%i",&razao);
				
				if(razao>0){
					
					for(termo1; termo1 < termo2; termo1 += razao){
					
						printf("%i ",termo1);
					
					}
					
				} else {
					
					printf("A razao deve ser positiva para uma P.A crescente!\n");
				}
				
				
				
				system("pause");
				system("cls");
				break;
			}
			
		}	
	}while(opcao!=18 || opcao < 18);
}