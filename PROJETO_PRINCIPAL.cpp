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
COM BASE DO LIVRO "CÓDIGO LIMPO" FOI UTILIZADO DICAS COMO: nomes extensos para a melhor compreensão do programador.
*/
#include <stdio.h>                                                                                                                       //Biblioteca Printf/Scanf
#include <math.h>                                                                                                                        //Biblioteca Matemática
#include <locale.h>                                                                                                                     // localizar um programa e fazer adaptação deste as caracteristicas de uma determinado idioma ou de uma região.
#include <string.h>                                                                                                                    // junção de caracteres //strlen
#include <ctype.h>                                                                                                                    //Biblioteca de tratamento de caracteres // toupper
#include <stdlib.h>                                                                                                                  // Biblioteca do system(pausar)
int main()                                                                                                                          //inicialização
{                                                                                                                                
    setlocale(LC_ALL, "Portuguese");                                                                                               //acentuação e etc

                                                                                                                                  //declaração de variaveis
                                                                                                                                  //utilizado char, int
    char nomeDoFilme[40];
    char sexoDoUsuario;
    int sessoesDoFilme, quantidadeDePessoas, idadeDoUsuario, contador, sexoUsuario, opcaoDeFilme;
    int bebe, crian, adoles, adulto, idoso, mulher, homem, adulto_M, adulto_F;
    

                                                                                                                                //Obteção de dados de entrada
                                                                                                                                //printf (leia) imprima a mensagem na tela do usuario (entrada)
                                                                                                                                //scanf (escreva) ler os dados e coloca na area de memoria equivalente(saida)
            printf("Bem-vindo ao cinebool de Brasília!!\n");                                                                    //imprima o nome do cinema 
            printf("-----------------//-----------------\n");                                                                   //espaços
            printf("Digite a quantidade de sessões do filme que deseja assistir:(2)\n");
            fflush(stdin);                                                                                                        //fflush(stdin) Limpeza da memoria
                                                                                                                                 // Aqui estão os dados da sessão e o nome do filme
    do                                                                                                                          // do faça
            {
            scanf("%d", &sessoesDoFilme);
    if      (sessoesDoFilme != 2)                                                                                                //if se
            printf("Quantidade de sessões invalida, digite novamente:\n");
    else                                                                                                                         //else senao
            printf("Quantidade de sessão digitada com sucesso!!\n");
    }while  (sessoesDoFilme != 2);                                                                                               //enquanto houver uma condicional VERDADEIRA ele repete
    do
    {
            printf("Digite o nome do filme:\n");                                                                                //imprimir o nome do filme
            fflush(stdin);
            fgets(nomeDoFilme, 40, stdin);
            fflush(stdin);
    if      (strlen(nomeDoFilme) < 5)                                                                                           //strlen: verifica o tamanho da string, se for menor ou igual a 2, apresenta o erro
            printf("Nome vazio, digite novamente o nome do filme:\n");
    }while  (strlen(nomeDoFilme) < 5);
            printf("O filme sera exibido em breve, aguarde!!\n");                                                                //Imprima para o úsuario
            printf("Cinebool agradece a preferencia, tenha um otimo filme!!");                                                   //Imprima para o úsuario
            printf("\n-----------------//-----------------\n");
            system("pause");                                                                                                     // pausar o programa e darão continuidade caso aperta algum botão
            system("cls");                                                                                                       //	limpar a tela
                                                                                                                                 //contadores para preencher a tabela
    homem = 0;                                                                                                                   //contadores
    mulher = 0;
    crian = 0;
    adoles = 0;
    adulto = 0;
    adulto_M = 0;
    adulto_F = 0;
    idoso = 0;
    bebe = 0;
             printf("\nInsira dois digitos para ver a quantidades de pessoas que assistiram o filme essa semana:\n");           // Aqui estão os dados do usuarios( quantidade de pessoas, sexo e a idade)
    do
    {
            scanf("%d", &quantidadeDePessoas);                                                                                  //quantidadedePessoas
    if      (quantidadeDePessoas >= 10)
        {
            printf("\nQuantidade de pessoas correta!!\n");                                                                  
        }
        else if (quantidadeDePessoas < 10)                                                                                      // else if mas se
        { 
            printf("\nErro, Quantidade de pessoas invalida, digite novamente:\n");                                             //Imprimir erro caso seja digitado a quantidade de pessoas abaixo de 10 
        }
    }while  (quantidadeDePessoas < 10);
            fflush(stdin);
    do
    {
            printf("\nDigite o sexo, (F ou M):\n");                                                                            //Imprimir o sexo da pessoa (F OU M representa Feminino e Masculino )
            scanf("%s", &sexoUsuario);  
            sexoUsuario = toupper(sexoUsuario);
            fflush(stdin);
    if      (sexoUsuario == 'M')
        {
            printf("\nsexo digitado corretamente!!");
        }
    else if  (sexoUsuario == 'F')
        {
            printf("\nsexo digitado corretamente!!");
        }
    else
        {
            printf("\nSexo digitado errado, tente novamente:\n");                                                              //Imprimir erro caso seja digitado outra letra que não seja F ou M 
        }
    do
        {
            printf("\nDigite a idade do usuario:\n");                                                                                   //Imprimi na tela a idade do usuário
            scanf("%d", &idadeDoUsuario);                                                                                               //Permite a leitura de dados da idade do usuário
            fflush(stdin);
    if      (idadeDoUsuario < 3 || idadeDoUsuario > 100)
            printf("Idade do usuario incorreta, tente novamente:");                                                            //imprimir erro caso a idade seja menor que 3 e maior que 100
    }while  (idadeDoUsuario < 3 || idadeDoUsuario > 100);
            printf("\nIdade do usuario correta!!");
            fflush(stdin);

    if      (sexoUsuario == 'F')                                                                                               //mostrará o sexo e pela a idade da pessoa irá indicar se ela é bebê, criança, adolescente, adulta ou idosa
        {
            mulher++;
        }
    else if (sexoUsuario == 'M')
        {
            homem++;
        }
    if (idadeDoUsuario <= 13)
        {
            crian++;
        }
    else if (idadeDoUsuario <= 17)
        {
            adoles++;
        }
    else if (idadeDoUsuario <= 64)
        {
            adulto++;
        }
    else
        {
            idoso++;
        }
    if (idadeDoUsuario == 3)
        {
            bebe++;
        }
    if (sexoUsuario == 'M' && idadeDoUsuario >= 18)
        {
            adulto_M++;
        }
    else if (sexoUsuario == 'F' && idadeDoUsuario >= 18)
        {
            adulto_F++;
        }
    }while (homem + mulher <= quantidadeDePessoas);
            printf("veja a seguir na tabela o resultado:");                                                                     //tabela com resultado das pessoas que assistiram o filme: aqui estão os dados como: idade e sexo do usuario
            printf("\n-----------------//-----------------\n");
            system("pause");
            system("cls");
            printf("tabela com o resultado\n");
            printf("\n-----------------//-----------------\n");
            printf("  CLASSIFICAÇÃO     QUANTIDADE    FILME \n");
            printf("      HOMEM              %d          %s \n", homem, nomeDoFilme);
            printf("\n\n");
            printf("     MULHER              %d          %s\n", mulher, nomeDoFilme);
            printf("\n-----------------//-----------------\n");
            printf(" CLASSIFICAÇÃO         IDADE      QUANTIDADE         FILME\n");
            printf("    BEBÊ                03            %d               %s\n", bebe, nomeDoFilme);
            printf("    CRIANÇA           04 a 13         %d               %s\n", crian, nomeDoFilme);
            printf("    ADOLESCENTE       14 a 17         %d               %s\n", adoles, nomeDoFilme);
            printf("    ADULTO            18 a 64         %d               %s\n", adulto, nomeDoFilme);
            printf("    IDOSO             64 a 100        %d               %s\n", idoso, nomeDoFilme);
            printf("\n-----------------//-----------------\n");
            printf("\nQuantidade de homens adultos: %d\n", adulto_M);
            printf("\nQuantidade de mulheres adultas: %d\n", adulto_F);
            system("pause");
            system("cls");
            printf("Recomendação de filmes para os nossos clientes:\n");                                                     //imprimir recomendações de filmes para os clientes conforme a idade. 

    (bebe);
    {
            printf("filmes para bebês:\n");
            printf("Daniel Tigre, Bob Zoom, Billy Bam Bam\n");
    }

    if (crian)
    {

            printf("filmes para crianças:\n");
            printf("Vida de Inseto, Como Treinar o Seu Dragão,O Pequeno Stuart Little\n");
    }

    if (adoles)
    {
            printf("filmes para adolescente:\n");
            printf("Harry potter, Cronicas de Narnia, jumanji\n");
    }
   if (adulto)
    {
            printf("filmes para adulto:\n");
            printf("Apostolo,Doce Vingança, Deadpool\n");
    }

    (idoso);
    {
            printf("filmes para idosos:\n");
            printf("O Amor é Estranho, Antes de Partir,Philomena\n");
    }

            system("pause");
            system("cls");

            return 0; //finalizar
}
