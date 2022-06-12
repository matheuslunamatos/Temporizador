#include <stdio.h>
#include <conio.h>
#include <unistd.h>
int tempo;
char op = 's';
int main(){
    printf("Bem vindo ao temporizador!\n");
    while(op=='s'||op=='S'){
        printf("digite o tempo\n");
        scanf("%i",&tempo);
	if(tempo>0){
        	while(tempo>=0){
        	    printf("[-%i-]\n",tempo);
            	sleep(1);
            	tempo--;
        }}else{
    		printf("Valor inválido = %i\n",tempo);
	}
        printf("[---TEMPO ESGOTADO---]\n\n");
        printf("Deseja utilizar novamente o temporizador? (s ou n)\n");
        scanf("%c", &op);
        op=getchar();
    }

printf("\n\nObrigado por utilizar nossos serviços!");
return 0;
}