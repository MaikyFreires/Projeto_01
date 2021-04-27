//Nome completo:Maiky Silverio Freires    Matrícula: UC20104316       Curso: Ciências da Computação
/* Um cinema de Brasília está interessado em descobrir o perfil das pessoas que frequentam
suas sessões de filmes e para isso, necessita realizar algumas verificações nas informações prestadas. Devem
ser solicitados a quantidade de sessões que serão realizadas, o nome do filme, a quantidade de pessoas que
assistiram o filme, assim como o sexo e a idade. No entanto, para cada um deles, há uma validação que deve ser
feita:

1. Solicite a quantidade de sessões, e faça a validação, aceitando exatamente 2 (duas) sessões. ok

2. Solicite o nome do filme, e faça a validação, não aceitando o nome “vazio”.

3. Solicite a quantidade de pessoas que assistiram ao filme, não podendo aceitar valor inferior a 10 (dez).

4. Para cada pessoa que assistiu ao filme deverá ser solicitado e validado o sexo (M - masculino, F -
Feminino) e a idade (de 3 a 100 anos)
*/
#include<stdio.h>//Biblioteca Printf/Scanf
#include<math.h>//Biblioteca Matemática
#include <locale.h> // “localizar” um programa e fazer adaptação deste às características de uma determinado idioma ou de uma região.
#include<string.h> // junção de caracteres //strlen
#include<ctype.h> //Biblioteca de tratamento de caracteres // toupper
#include<stdlib.h> //// Biblioteca do system(pausar)
#include <conio.h>
int main() { //inicialização
	setlocale(LC_ALL, "Portuguese"); //acentuação e etc
	
	//declaração de variaveis
	//utilizado char, int	
	char nomeDoFilme[40]; 
	char sexoDoUsuario; 
	int sessoesDoFilme, quantidadeDePessoas, idadeDoUsuario, contador, sexoUsuario, opcaoDeFilme; 
	int bebe, crian, adoles, adulto, idoso, mulher, homem, adulto_M, adulto_F;
	int media;
	
	

	//Obteção de dados de entrada
	//printf (leia) imprima a mensagem na tela do usuario (entrada)
	//scanf (escreva) ler os dados e coloca na area de memoria equivalente(saida)
			 printf("Bem-vindo ao cinebool de Brasília!!\n");
			 printf("-----------------//-----------------\n");
			 printf ("Digite a quantidade de sessões do filme que deseja assistir:\n");
			 fflush(stdin);//Limpeza da memoria
			// Aqui estão os dados da sessão e o nome do filme 
	do{   //faça 
			 scanf ("%d", &sessoesDoFilme); 
	if  	 (sessoesDoFilme!=2) //se
			 printf ("Quantidade de sessão invalida, digite novamente:\n");
	else //senao
			 printf ("Quantidade de sessão digitada com sucesso!!\n");
	}while   (sessoesDoFilme!=2);  //enquanto houver uma condicional VERDADEIRA ele repete
	do{   
			 printf  ("Digite o nome do filme:\n"); 	 
			 fflush  (stdin); 
			 fgets   (nomeDoFilme, 40, stdin); 
		     fflush  (stdin); 			
	if 		 (strlen (nomeDoFilme) < 5)//strlen: verifica o tamanho da string, se for menor ou igual a 2, apresenta o erro
			 printf  ("Nome vazio, digite novamente o nome do filme:\n");
	}while   (strlen  (nomeDoFilme) < 5);
			 printf  ("O filme será exibido em breve, aguarde!!\n");
			 printf  ("Cinebool agradece a preferencia, tenha um otimo filme!!");
			 printf  ("\n-----------------//-----------------\n");
			 system  ("pause"); // pausar o programa e dará continuidade caso aperta algum botão
		     system  ("cls"); //	limpar a tela
			 printf  ("Quantidade de úsuarios que assistiram filmes em nosso site nos ultimos dias:\n");
	
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
		// Aqui estão os dados do usuarios ( quantidade de pessoas, sexo e a idade)
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
			 printf("\nDigite a idade do usuario:\n"); //Imprimi na tela a idade do usuário
			 scanf("%d", &idadeDoUsuario); //Permite a leitura de dados da idade do usuário
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
		 	 printf ("-CLASSIFICAÇÃO----QUANTIDADE----FILME--\n");
			 printf ("----HOMEM------------%d----------%s----\n", homem, nomeDoFilme);
			 printf ("\n-----------------//-----------------\n");
			 printf ("----MULHER--------------%d-------%s----\n", mulher, nomeDoFilme);
			 printf ("---------------------------------------\n");
			 printf ("\n-----------------//-----------------\n");
			 printf ("--CLASSIFICAÇÃO-----IDADE-----QUANTIDADE-----FILME--\n");
			 printf ("---bebe----------------03-------%d-----------%s---\n", bebe, nomeDoFilme);
			 printf ("---CRIANÇA----------04 a 13-------%d-----------%s---\n", crian, nomeDoFilme);
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
			 printf ("Recomendação de filmes para os nossos clientes:\n"); ///incremento
			
  			(bebe);
			 printf  ("filmes para bebês:");
    		 printf  ("\nDaniel Tigre, Bob Zoom, Billy Bam Bam\n");
			
    		(crian);
   			 printf ("\nfilmes para crianças:");
   			 printf ("\nVida de Inseto, Como Treinar o Seu Dragão, O Pequeno Stuart Little\n");
		
	if 		(adoles){
    		 printf ("\nfilmes para adolescente:");
    	     printf ("\nHarry potter, Cronicas de Narnia, jumanji\n");
			}
   
    if 		(adulto){
   			 printf ("\nfilmes para adulto/idosos:");
    		 printf ("\nApóstolo,Doce Vingança, Deadpool");
   			 printf ("\nO Amor é Estranho, Antes de Partir,Philomena\n");
  
}

return 0; //finalizar 
}
