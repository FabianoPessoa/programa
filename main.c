
/* 
* Lê um arquivo
* Instale make
* alteracao
* $ sudo apt-get install make
* Ou escreva parecido no terminal
* all:
*        gcc -Wall main.c
*        gcc main.c -o programa -g
* Utilizando no terminal
* $ programa texto.txt
*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[])
{ 
	
	FILE *fp;
	char ch;

	/*Se for colocado mais de um parametro
	gera erro*/
	if(argc!=2)
		{printf("Erro"); exit(1);}
	/*Se o arquivo não puder ser aberto*/
	if((fp=fopen(argv[1],"r")) == NULL)
		{printf("ERRO"); exit(1);}
	/*Lê o primeiro caracte no arquivo*/
	ch = getc(fp);
	while(ch!=EOF){
		/*escreve  o primeiro caracter no arquivo*/
		putchar(ch);
		/*Lê novamente*/
		ch = getc(fp);
	}

	/*Fecha o arquivo*/
	fclose(fp);
	return(0);
	}



/* 
* Escreve um arquivo
* Instale make
* $ sudo apt-get install make
* Ou escreva parecido no terminal
* all:
*        gcc -Wall main.c
*        gcc main.c -o programa -g
* Utilizando no terminal
* $ programa texto.txt
*/

// #include<stdio.h>
// #include<stdlib.h>

// int main(int argc, char * argv[])
// { 
	
// 	FILE *fp;
// 	char ch;

// 	/*Se for colocado mais de um parametro
// 	gera erro*/
// 	if(argc!=2)
// 		{printf("Erro"); exit(1);}
// 	/*Se o arquivo não puder ser aberto*/
// 	if((fp=fopen(argv[1],"w")) == NULL)
// 		{printf("ERRO"); exit(1);}

// 	do {
// 		ch =getchar();
// 		/*Escreve o próximo caractere depois
// 		fim do arquivo.*/
// 		putc(ch,fp);		
// 	}while(ch!='$');

// 	/*Fecha o arquivo*/
// 	fclose(fp);
// 	return(0);
// 	}
