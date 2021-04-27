//Nome completo:Maiky Silverio Freires    Matr�cula: UC20104316       Curso: Ci�ncias da Computa��o
/* Um cinema de Bras�lia est� interessado em descobrir o perfil das pessoas que frequentam
suas sess�es de filmes e para isso, necessita realizar algumas verifica��es nas informa��es prestadas. Devem
ser solicitados a quantidade de sess�es que ser�o realizadas, o nome do filme, a quantidade de pessoas que
assistiram o filme, assim como o sexo e a idade. No entanto, para cada um deles, h� uma valida��o que deve ser
feita:

1. Solicite a quantidade de sess�es, e fa�a a valida��o, aceitando exatamente 2 (duas) sess�es. ok

2. Solicite o nome do filme, e fa�a a valida��o, n�o aceitando o nome �vazio�.

3. Solicite a quantidade de pessoas que assistiram ao filme, n�o podendo aceitar valor inferior a 10 (dez).

4. Para cada pessoa que assistiu ao filme dever� ser solicitado e validado o sexo (M - masculino, F -
Feminino) e a idade (de 3 a 100 anos)
*/
#include<stdio.h>//Biblioteca Printf/Scanf
#include<math.h>//Biblioteca Matem�tica
#include <locale.h> // �localizar� um programa e fazer adapta��o deste �s caracter�sticas de uma determinado idioma ou de uma regi�o.
#include<string.h> // jun��o de caracteres //strlen
#include<ctype.h> //Biblioteca de tratamento de caracteres // toupper
#include<stdlib.h> //// Biblioteca do system(pausar)
#include <conio.h>
int main() { //inicializa��o
	setlocale(LC_ALL, "Portuguese"); //acentua��o e etc
	
	//declara��o de variaveis
	//utilizado char, int	
	char nomeDoFilme[40]; 
	char sexoDoUsuario; 
	int sessoesDoFilme, quantidadeDePessoas, idadeDoUsuario, contador, sexoUsuario, opcaoDeFilme; 
	int bebe, crian, adoles, adulto, idoso, mulher, homem, adulto_M, adulto_F;
	int media;
	
	

	//Obte��o de dados de entrada
	//printf (leia) imprima a mensagem na tela do usuario (entrada)
	//scanf (escreva) ler os dados e coloca na area de memoria equivalente(saida)
			 printf("Bem-vindo ao cinebool de Bras�lia!!\n");
			 printf("-----------------//-----------------\n");
			 printf ("Digite a quantidade de sess�es do filme que deseja assistir:\n");
			 fflush(stdin);//Limpeza da memoria
			// Aqui est�o os dados da sess�o e o nome do filme 
	do{   //fa�a 
			 scanf ("%d", &sessoesDoFilme); 
	if  	 (sessoesDoFilme!=2) //se
			 printf ("Quantidade de sess�o invalida, digite novamente:\n");
	else //senao
			 printf ("Quantidade de sess�o digitada com sucesso!!\n");
	}while   (sessoesDoFilme!=2);  //enquanto houver uma condicional VERDADEIRA ele repete
	do{   
			 printf  ("Digite o nome do filme:\n"); 	 
			 fflush  (stdin); 
			 fgets   (nomeDoFilme, 40, stdin); 
		     fflush  (stdin); 			
	if 		 (strlen (nomeDoFilme) < 5)//strlen: verifica o tamanho da string, se for menor ou igual a 2, apresenta o erro
			 printf  ("Nome vazio, digite novamente o nome do filme:\n");
	}while   (strlen  (nomeDoFilme) < 5);
			 printf  ("O filme ser� exibido em breve, aguarde!!\n");
			 printf  ("Cinebool agradece a preferencia, tenha um otimo filme!!");
			 printf  ("\n-----------------//-----------------\n");
			 system  ("pause"); // pausar o programa e dar� continuidade caso aperta algum bot�o
		     system  ("cls"); //	limpar a tela
			 printf  ("Quantidade de �suarios que assistiram filmes em nosso site nos ultimos dias:\n");
	
		//contadores para preencher a tabela	
		homem = 0;
		mulher = 0;
		crian = 0;
		adoles = 0;
		adulto = 0;
		adulto_M = 0;
		adulto_F = 0;
		idoso = 0;
		bebe=0;
		// Aqui est�o os dados do usuarios ( quantidade de pessoas, sexo e a idade)
			 printf("\nInsira dois digitos:\n");
	do{
			 scanf("%d", &quantidadeDePessoas);
	if		 (quantidadeDePessoas>=10){
			 printf("\nQuantidade de pessoas correta!!\n");
	}else if (quantidadeDePessoas<10){ // mas se 
			 printf("\nErro, Quantidade de pessoas invalida:\n");
			}
	}while   (quantidadeDePessoas<10);
	         fflush(stdin);
		
	do{
			 printf("\nDigite o sexo, (F ou M):\n");
			 scanf ("%s", &sexoUsuario);
		 	 sexoUsuario= toupper(sexoUsuario);
			 fflush(stdin);
	if		 (sexoUsuario=='M'){
			 printf("\nsexo digitado corretamente!!");
	}else if (sexoUsuario=='F'){
		     printf("\nsexo digitado corretamente!!");
	}else{
			 printf("\nSexo digitado errado, tente novamente:\n");
			}
	do{	
			 printf("\nDigite a idade do usuario:\n"); //Imprimi na tela a idade do usu�rio
			 scanf("%d", &idadeDoUsuario); //Permite a leitura de dados da idade do usu�rio
			 fflush(stdin);
	if 		 (idadeDoUsuario<3 || idadeDoUsuario>100)
			 printf ("Idade do usuario incorreta, tente novamente:");			
	}while 	 (idadeDoUsuario<3 || idadeDoUsuario>100);
	 		 printf("\nIdade do usuario correta!!");
	 		 fflush(stdin);
	 	
	
	if		 (sexoUsuario=='F'){
		 	 mulher++;
	}else if (sexoUsuario=='M'){
			 homem++;		
	 }if	 (idadeDoUsuario<=13){
			 crian++;
	}else if (idadeDoUsuario<=17){
			 adoles++;
	}else if (idadeDoUsuario<=64){
			 adulto++;
	}else    {
			 idoso++;
	}if      (idadeDoUsuario==3){
		 	 bebe++;
	    	}
	if		 (sexoUsuario=='M'&&idadeDoUsuario>=18){
			 adulto_M++;
	}else if (sexoUsuario=='F'&&idadeDoUsuario>=18){
			 adulto_F++;
			 }
	}while  (homem+mulher<=quantidadeDePessoas);
			 printf ("\nveja a seguir na tabela o resultado:");
			 printf ("\n-----------------//-----------------\n");
			 system ("pause");
			 system ("cls");
			 printf ("tabela com o resultado\n");
		 	 printf ("\n-----------------//-----------------\n");
		 	 printf ("-CLASSIFICA��O----QUANTIDADE----FILME--\n");
			 printf ("----HOMEM------------%d----------%s----\n", homem, nomeDoFilme);
			 printf ("\n-----------------//-----------------\n");
			 printf ("----MULHER--------------%d-------%s----\n", mulher, nomeDoFilme);
			 printf ("---------------------------------------\n");
			 printf ("\n-----------------//-----------------\n");
			 printf ("--CLASSIFICA��O-----IDADE-----QUANTIDADE-----FILME--\n");
			 printf ("---bebe----------------03-------%d-----------%s---\n", bebe, nomeDoFilme);
			 printf ("---CRIAN�A----------04 a 13-------%d-----------%s---\n", crian, nomeDoFilme);
			 printf ("\n-----------------//-----------------\n");
			 printf ("---ADOLESCENTE------14 a 17-------%d-----------%s---\n", adoles, nomeDoFilme);
			 printf ("\n-----------------//-----------------\n");
			 printf ("---ADULTO-----------18 a 64-------%d-----------%s---\n", adulto, nomeDoFilme);
			 printf ("\n-----------------//-----------------\n");
			 printf ("---IDOSO------------64 a 100------%d-----------%s---\n", idoso, nomeDoFilme);
			 printf ("\n-----------------//-----------------\n");	
			 printf ("\nQuantidade de homens adultos: %d\n", adulto_M);
		   	 printf ("\nQuantidade de mulheres adultas: %d\n", adulto_F);	
				
			 system("pause"); 
		     system("cls");	
			
			 printf ("############ MENU #############\n");
			 printf ("Recomenda��o de filmes para os nossos clientes:\n"); ///incremento
			
  			(bebe);
			 printf  ("filmes para beb�s:");
    		 printf  ("\nDaniel Tigre, Bob Zoom, Billy Bam Bam\n");
			
    		(crian);
   			 printf ("\nfilmes para crian�as:");
   			 printf ("\nVida de Inseto, Como Treinar o Seu Drag�o, O Pequeno Stuart Little\n");
		
	if 		(adoles){
    		 printf ("\nfilmes para adolescente:");
    	     printf ("\nHarry potter, Cronicas de Narnia, jumanji\n");
			}
   
    if 		(adulto){
   			 printf ("\nfilmes para adulto/idosos:");
    		 printf ("\nAp�stolo,Doce Vingan�a, Deadpool");
   			 printf ("\nO Amor � Estranho, Antes de Partir,Philomena\n");
  
}

return 0; //finalizar 
}
