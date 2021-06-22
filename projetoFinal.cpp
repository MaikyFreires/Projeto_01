/*
MAIKY SILVERIO FREIRES 	Matricula:UC20104316 Curso: Ciencia da computação 
Gustavo Henrique Dantas Matricula:UC20100755 Curso: Ciencia da computação  
Eduardo Barbosa Pereira Matricula:UC21106180 Curso: Engenharia software
Warlison da Silva Bezerra Matricula:UC21105867 curso:Engenharia software
*/
 
//bibliotecas utilizadas
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
// cores
#define RED "\x1b[91m"
#define GREEN "\x1b[32m"
#define BLUE "\x1b[34m"
#define RESET "\x1b[0m"


 //inicialização do programa 
int main (){
    setlocale(LC_ALL, "Portuguese");
	//variavéis utilizadas
	
char nomeCliente[40], nomeDestino[30], gol,tam, azul;
int  quantidadePessoas, menu=0, transportadora, idadePessoas, assentosAviao, idCliente[200][2];
int  poltronas[200], registrador=0,i=0,contador=0, SelecionaP, x, confirmar;
float preco, crianca = 0, valorFinal = 0;
	//inicio do codigo, aqui mostra o destino que o usuario pretende ir // valor da passsagem
    for(x = 0; x < 200; x++){	
        poltronas[x] = 0;
    }
    do{ 
        printf("Digite o destino que pretende ir:");
        fflush(stdin);
        fgets (nomeDestino, 30, stdin);
        if (nomeDestino[strlen(nomeDestino) - 1 ] == '\n') {
            nomeDestino[strlen(nomeDestino) - 1 ] = '\0';  
        }
        
        if (strlen(nomeDestino) < 2)
            printf("Nome inválido, digite novamente o nome do destino:\n");
    }while (strlen(nomeDestino) < 2);
    printf ("qual o valor da passagem para %s:", nomeDestino);
    scanf("%f", &preco);
    printf ("Agora de 1 a 3 digite a transportadora que deseja:\n1-GOL \n2-TAM \n3-AZUL\n");
    printf ("digite a opção:");
    scanf ("%d", &transportadora);
    
	//opção de transportadora usando cases
    gol=1;
    tam=2;
    azul=3;
    
    switch (transportadora){
        case 1:
            printf ("1-GOL\n");
            do{
                printf("digite a quantidade de assentos disponiveis:(90 a 200)\n");
                scanf("%d",&assentosAviao);
                fflush(stdin);
                if(assentosAviao >=90 && assentosAviao<=200){
                    printf("a quantidade de assentos está correta!!\n");
                }else
                    printf("erro, digite novamente!\n");
            }while(!(assentosAviao >=90 && assentosAviao<=200));
            break;
        case 2:
            printf ("2-TAM\n");
            do{
                printf("digite a quantidade de assentos disponiveis:(90 a 200)\n");
                scanf("%d",&assentosAviao);
                fflush(stdin);
                if(assentosAviao >=90 && assentosAviao<=200){
                    printf("a quantidade de assentos está correta!!\n");
                }else
                    printf("erro, digite novamente!\n");
            }while(!(assentosAviao >=90 && assentosAviao<=200));
            break;
        case 3:
            printf ("3-AZUL\n");
            do{
                printf("digite a quantidade de assentos disponiveis:(90 a 200)\n");
                scanf("%d",&assentosAviao);
                fflush(stdin);
                if(assentosAviao >=90 && assentosAviao<=200){
                    printf("a quantidade de assentos está correta!!\n");
                }else
                    printf("erro, digite novamente!\n");
            }while(!(assentosAviao >=90 && assentosAviao<=200));
             
            break;
            default:
                printf("opção invalida, digite novamente:");
    }
    //pausar e limpar a tela para proxima pagina
	system ("pause");
    system("cls");
 	// menu para realizar reserva,confirmar reserva, cancelar reserva, status do avião, sair
    do{ 
    printf ("=========== BEM-VINDO AO MENU SALUMAR LINHAS AEREAS ==========");
    printf("\nDigite a opção que deseja(1 a 3):\n1-REALIZAR RESERVA \n2-CONFIRMAR RESERVA\n3-CANCELAR RESERVA\n4-STATUS DO AVIÃO\n5-SAIR\nopção:");
    scanf("%d", &menu);
    system ("pause");
    system("cls");
    switch (menu){
        case 1: 
            registrador++; //inicialização para saber o id 
            do{
                printf("Qual a idade da %d° pessoa:", i+1);
                scanf("%d", &idadePessoas);
                if (idadePessoas < 1 || idadePessoas > 120){
                    printf ("valor invalido, digite novamente:\n");
                }else if( idadePessoas<=5 ){
                    printf("criança\n");
                    printf("Desconto aplicado, o valor da passagem atualizado é: R$%.2f\n", preco - (preco * 50/100));
                    crianca++;
                }else if (idadePessoas <=13 ){
                    printf("pré-adolescente\n");
                    printf("o valor da passagem é de R$%.2f\n", preco);
                }else if (idadePessoas <=17 ){
                    printf("adolescente\n");
                    printf("o valor da passagem é de R$%.2f\n", preco);
                }else if (idadePessoas <= 50){
                    printf("adulto\n");
                    printf("o valor da passagem é de R$%.2f\n", preco);
                }else if (idadePessoas <=120){
                    printf("idoso\n");
                    printf("o valor da passagem é de R$%.2f\n", preco);
                }
            }while (idadePessoas < 1 || idadePessoas > 120);
            
            if(idadePessoas<=5)
                valorFinal += preco/2; //caso ter criança a baixo de 5 anos tem desconto de %50
            else
                valorFinal += preco;
            
            printf("o valor final agora é de R$%.2f\n", valorFinal);
            printf("prossiga para próxima pagina\n");
            system ("pause");
            system("cls");
            //escolha da poltrona para saber se está disponivel/reservados/confirmados
            printf("escolha as poltronas:\n");
            printf(BLUE "C-poltronas confirmados\n" RED "R-poltronas reservados\n" GREEN "D-poltronas disponiveis\n" RESET);
            fflush(stdin);
                      
            for (int i = 0; i < assentosAviao; i++){
            	if (i % 5 == 0) {
                printf("\n");
                }
                if (poltronas[i] == 0)
                {
                    printf(GREEN "D" RESET "||");
                    continue;
                }
                else if (poltronas[i] == 1)
                {
                    printf(RED "R" RESET "||");
                    continue;
                }
                else
                {
                    printf(BLUE "C" RESET "||");
                    continue;
                }
            }
            //escolher a poltrona desejada e gerador de id
            do{
                printf("\nqual poltrona da pessoa:", contador+1);
                scanf("%d", &SelecionaP);
            }while(SelecionaP < 1 || SelecionaP >200 || poltronas[SelecionaP - 1] != 0); //seleciona a poltrona
            
            if(poltronas[SelecionaP - 1] == 0){
                poltronas[SelecionaP - 1] = 1;
            }
            
            idCliente[registrador - 1][1] = SelecionaP - 1; //saida do registrado(id)
            idCliente[registrador - 1][0] = registrador;	// saida para poltrona 
            printf ("o seu id é %d\n", registrador);
            printf("\nNão perca esse numero, pois sem ele não é possivel completa sua reserva ou cancelar\n");
          
            break;
            //usando o registrador para confirmar a reserva
            case 2:
                printf ("para confirmar sua reserva digite seu id:");
                scanf ("%d", &SelecionaP);
            
                for(x = 0; x < registrador; x++){ //for usado para saber a poltrona escolhida
                    if (idCliente[x][0] == SelecionaP){
                        poltronas[idCliente[x][1]] = 2;
                        break;
                    }
                }
                printf("\n------------------------------------------------------------------------------------------------------------------\n");
                printf ("sua passagem para %s foi reservada com sucesso, para cancelar volte ao menu e escolha a opção CANCELAR RESERVA \n", nomeDestino);
                printf("\n------------------------------------------------------------------------------------------------------------------\n");
                break;
           //cancelamento da reserva utilizando a mesma função que a confirmação utilizando meio de verificação
           case 3:
           		//while está selecionando a poltrona
                do{
                    printf ("para cancelar sua reserva digite seu id:");
                    scanf ("%d", &SelecionaP);
                }while (SelecionaP < 1 || SelecionaP >assentosAviao); 	  
                
                // for está rastreando o idcliente e depois limpando
                for(x = 0; x < registrador; x++){					
                    if (idCliente[x][0] == SelecionaP){
                        if (poltronas[idCliente[x][1]] != 2) {
                            poltronas[idCliente[x][1]] = 0;
                            idCliente[x][0] = 0;
                        }
                        break;
                    }
                }
            
                break;
    
            case 4:
            	//status do avião
                printf("status do avião");			
                printf("\n");
                for (int i = 0; i < assentosAviao; i++){
                    if (i % 5 == 0) {
                        printf("\n");
                    }
                    if (poltronas[i] == 0)
                    {
                        printf("|" GREEN "D" RESET "|\t");
                        continue;
                        
                    }
                    else if (poltronas[i] == 1)
                    {
                        printf(RED "R" RESET "||");
                        continue;
                    }
                    else
                    {
                       printf(BLUE "C" RESET "||");
                        continue;
                    }
                }
                printf("\n\n");
            case 5:
            		system("cls");
					//encerramento do programa 
                	printf ("saluma agradece a preferência, tenha um ótima dia\n");
                	fflush(stdin);
        			system("pause");
        			exit(1);
			break;
			default:
			printf("opção não encontrada\n");
			break;
    
    }

    system ("pause");
    system("cls");

} while (menu >= 1 && menu < 5);// loop para o menu 
return 0;
}

