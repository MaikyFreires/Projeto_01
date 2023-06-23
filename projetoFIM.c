#include <stdio.h>
#include <string.h>

#define MAX_DESCRICAO 50
#define MAX_FABRICANTE 50
#define MAX_MARCAS 10
#define MAX_PRODUTOS 100
#define UNIDADE_VENDA_MAX 4
#define UNIDADE_COMPRA_FIXA 12
char tipoSabonete[MAX_DESCRICAO];

typedef struct {
    char descricao[MAX_DESCRICAO];
    int peso;
    float valorCompra;
    float valorVenda;
    float valorLucro;
    float percentualLucro;
    char fabricante[MAX_FABRICANTE];
    char tipoSabonete[MAX_DESCRICAO];
    int unidadeVenda;
    int unidadeCompra;
} Produto;

typedef struct {
    char nome[MAX_FABRICANTE];
    char site[MAX_FABRICANTE];
    char telefone[MAX_FABRICANTE];
    char uf[3];
} Fabricante;

Produto produtos[MAX_PRODUTOS];
int numProdutos = 0;

Fabricante fabricantes[MAX_MARCAS];
int numFabricantes = 0;

int lerPeso() {
    int peso;
    scanf("%d", &peso);
    getchar(); // Limpar o buffer do teclado
    return peso;
}

void calcularLucro(Produto *produto) {
    produto->valorLucro = produto->valorVenda - produto->valorCompra;
    produto->percentualLucro = (produto->valorLucro / produto->valorCompra) * 100;
}

void cadastrarProduto() {
    Produto novoProduto;
    if (numProdutos >= MAX_PRODUTOS) {
        printf("Limite de produtos atingido.\n");
        return;
    }

    int opcao;
    printf("Selecione o tipo de sabonete:\n");
    printf("1. Sabao liquido\n");
    printf("2. Sabao de barra\n");
    scanf("%d", &opcao);
    system("cls");
    switch (opcao) {
          case 1: // Sabao liquido
            printf("Tipo de sabonete: Sabao liquido\n");
            printf("1. Argila Verde, Hortela e Tea Tree \n");
            printf("2. Argila Rosa, Lavanda e Palmarosa\n");
            printf("3. Argila Vermelha, Hortela e Alecrim\n");
            printf ("4. Aloe Vera, oleo de coco, rosa mosqueta\n");
            printf("5. Carvao Ativado, Ucuuba e Litsea Cubeba\n");
            scanf("%d", &opcao);
            switch (opcao) {
                case 1:
                    strcpy(tipoSabonete, "Sabonete liquido");
                    strcpy(novoProduto.descricao, "Argila Verde, Hortela e Tea Tree");
                    break;
                case 2:
                    strcpy(tipoSabonete, "Sabonete liquido");
                    strcpy(novoProduto.descricao, "Argila Rosa, Lavanda e Palmarosa");
                    break;
                case 3:
                    strcpy(tipoSabonete, "Sabonete liquido");
                    strcpy(novoProduto.descricao, "Argila Vermelha, Hortela e Alecrim");
                    break;
                case 4:
                    strcpy(tipoSabonete, "Sabonete liquido");
                    strcpy(novoProduto.descricao, "Aloe Vera, oleo de coco, rosa mosqueta");
                    break;    
                case 5:
                    strcpy(tipoSabonete, "Sabonete liquido");
                    strcpy(novoProduto.descricao, "Carvao Ativado, Ucuuba e Litsea Cubeba");
                break;
                default:
                    printf("Opcao invalida.\n");
                    return;
            }
        printf("Digite a descricao do produto: ");
        getchar();
        fgets(novoProduto.descricao, sizeof(novoProduto.descricao), stdin);
    
            // Sabao liquido
        printf("Digite o tipo de peso:\n");
        printf("1. 200 ml\n");
        printf("2. 400 ml\n");
        printf("3. 1 litro\n");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                novoProduto.peso = 200;
                break;
            case 2:
                novoProduto.peso = 400;
                break;
            case 3:
                novoProduto.peso = 1000;
                break;
            default:
                printf("Opcao invalida.\n");
                return;
        }
            printf("Digite o valor de compra do produto: R$ ");
            scanf("%f", &novoProduto.valorCompra);

            printf("Digite o valor de venda do produto: R$ ");
            scanf("%f", &novoProduto.valorVenda);

            printf("Digite o fabricante do produto: ");
            getchar();
            fgets(novoProduto.fabricante, sizeof(novoProduto.fabricante), stdin);

            calcularLucro(&novoProduto);

            novoProduto.unidadeVenda = UNIDADE_VENDA_MAX;
            novoProduto.unidadeCompra = UNIDADE_COMPRA_FIXA;

            printf("Digite a quantidade de unidades de venda (1 a %d): ", UNIDADE_VENDA_MAX);
            scanf("%d", &novoProduto.unidadeVenda);
            printf ("------------------------------------------------\n");
            printf("Unidade de Venda: %d\n", novoProduto.unidadeVenda);
            printf("Unidade de Compra: %d\n", novoProduto.unidadeCompra);

            produtos[numProdutos] = novoProduto;
            numProdutos++;

            printf("Produto cadastrado com sucesso.\n");
            system ("pause");
            system("cls");
            break;
        case 2: // Sabao de barra
            printf("Tipo de sabonete: Sabao de barra\n");
            printf("1. Argila Verde, Hortela e Tea Tree\n");
            printf("2. Argila Rosa, Lavanda e Palmarosa\n");
            printf("3. Argila Vermelha, Hortela e Alecrim\n");
            printf("4. Aloe Vera, oleo de coco, rosa mosqueta\n");
            printf("5. Carvao Ativado, Ucuuba e Litsea Cubeba\n");

            scanf("%d", &opcao);
            switch (opcao) {
                case 1:
                    strcpy(tipoSabonete, "Sabao de barra");
                    strcpy(novoProduto.descricao, "Argila Verde, Hortela e Tea Tree");
                    break;
                case 2:
                    strcpy(tipoSabonete, "Sabao de barra");
                    strcpy(novoProduto.descricao, "Argila Rosa, Lavanda e Palmarosa");
                    break;
                case 3:
                    strcpy(tipoSabonete, "Sabao de barra");
                    strcpy(novoProduto.descricao, "Argila Vermelha, Hortela e Alecrim");
                    break;
                case 4:
                    strcpy(tipoSabonete, "Sabao de barra");
                    strcpy(novoProduto.descricao, "Aloe Vera, oleo de coco, rosa mosqueta");
                    break;
                case 5:
                    strcpy(tipoSabonete, "Sabao de barra");
                    strcpy(novoProduto.descricao, "Carvao Ativado, Ucuuba e Litsea Cubeba");
                    break;
                default:
                    printf("Opcao invalida.\n");
                    return;
            }
            printf("Digite a descricao do produto: ");
            getchar();
            fgets(novoProduto.descricao, sizeof(novoProduto.descricao), stdin);
    
            printf("Digite o tipo de peso:\n");
            printf("1. 70g\n");
            printf("2. 100g\n");
            printf("3. 150g\n");
            scanf("%d", &opcao);
            switch (opcao) {
                case 1:
                    novoProduto.peso = 70;
                    break;
                case 2:
                    novoProduto.peso = 100;
                    break;
                case 3:
                    novoProduto.peso = 150;
                    break;
                default:
                    printf("Opcao invalida.\n");
                    return;
            }
                printf("Digite o valor de compra do produto: R$ ");
                scanf("%f", &novoProduto.valorCompra);

                printf("Digite o valor de venda do produto: R$ ");
                scanf("%f", &novoProduto.valorVenda);

                printf("Digite o fabricante do produto: ");
                getchar();
                fgets(novoProduto.fabricante, sizeof(novoProduto.fabricante), stdin);

                calcularLucro(&novoProduto);

                novoProduto.unidadeVenda = UNIDADE_VENDA_MAX;
                novoProduto.unidadeCompra = UNIDADE_COMPRA_FIXA;

                printf("Digite a quantidade de unidades de venda (1 a %d): ", UNIDADE_VENDA_MAX);
                scanf("%d", &novoProduto.unidadeVenda);
                printf ("------------------------------------------------\n");
                printf("Unidade de Venda: %d\n", novoProduto.unidadeVenda);
                printf("Unidade de Compra: %d\n", novoProduto.unidadeCompra);

                produtos[numProdutos] = novoProduto;
                numProdutos++;

                printf("Produto cadastrado com sucesso.\n");
                system ("pause");
                system("cls");


            break;

        default:
            printf("Opcao invalida. Tipo de sabonete nao definido.\n");
            return;
    }


}

void cadastrarFabricante() {
    if (numFabricantes >= MAX_MARCAS) {
        printf("Limite de fabricantes atingido.\n");
        return;
    system ("pause");
    system("cls");
    }

    Fabricante novoFabricante;

    printf("Digite o nome do fabricante: ");
    fgets(novoFabricante.nome, sizeof(novoFabricante.nome), stdin);

    printf("Digite o site do fabricante: ");
    fgets(novoFabricante.site, sizeof(novoFabricante.site), stdin);

    printf("Digite o telefone do fabricante: ");
    fgets(novoFabricante.telefone, sizeof(novoFabricante.telefone), stdin);

    printf("Digite a UF do fabricante (AC, AM, AP, SP, TO): ");
    fgets(novoFabricante.uf, sizeof(novoFabricante.uf), stdin);

    fabricantes[numFabricantes++] = novoFabricante;

    printf("Fabricante cadastrado com sucesso.\n");
    system ("pause");
    system("cls");
}

void listarMarcas() {
    printf("----- Marcas Cadastradas -----\n");
    for (int i = 0; i < numFabricantes; i++) {
        printf("Marca: %s", fabricantes[i].nome);
    }
    system ("pause");
     system("cls");
}

void listarProdutos() {
    printf("----- Produtos Cadastrados -----\n");
    for (int i = 0; i < numProdutos; i++) {
        printf("descricao: %sPeso: %d\nValor de compra: R$ %.2f\nValor de venda: R$ %.2f\nValor do lucro: R$ %.2f\nPercentual de lucro: %.2f%%\nFabricante: %s\nunidadeCompra:%d\nunidadeVenda:%d\n\n",
               produtos[i].descricao, produtos[i].peso, produtos[i].valorCompra, produtos[i].valorVenda, produtos[i].valorLucro, produtos[i].percentualLucro, produtos[i].fabricante, produtos[i].unidadeCompra, produtos[i].unidadeVenda);
    }
    system ("pause");
    system("cls");
}

void listarProdutosEstado() {
    char uf[3];
    printf("Digite a UF do estado: ");
    fgets(uf, sizeof(uf), stdin);
    printf("\n----- Produtos no Estado %s -----\n", uf);
    for (int i = 0; i < numProdutos; i++) {
        if (strcmp(fabricantes[i].uf, uf) == 0) {
            printf("descricao: %sPeso: %d\nValor de compra: R$ %.2f\nValor de venda: R$ %.2f\nValor do lucro: R$ %.2f\nPercentual de lucro: %.2f%%\nFabricante: %s\nunidadeCompra:%d\nunidadeVenda:%d\n\n",
                   produtos[i].descricao, produtos[i].peso, produtos[i].valorCompra, produtos[i].valorVenda, produtos[i].valorLucro, produtos[i].percentualLucro, produtos[i].fabricante, produtos[i].unidadeCompra, produtos[i].unidadeVenda);
        }
    }
    system ("pause");
    system("cls");
}

void listarProdutosMarca() {
    char marca[MAX_FABRICANTE];
    printf("Digite o nome da marca: ");
    fgets(marca, sizeof(marca), stdin);
    printf("\n----- Produtos da Marca %s -----\n", marca);
    for (int i = 0; i < numProdutos; i++) {
        if (strcmp(produtos[i].fabricante, marca) == 0) {
            printf("descricao: %sPeso: %d\nValor de compra: R$ %.2f\nValor de venda: R$ %.2f\nValor do lucro: R$ %.2f\nPercentual de lucro: %.2f%%\nFabricante: %s\nunidadeCompra:%d\nunidadeVenda:%d\n\n",
                   produtos[i].descricao, produtos[i].peso, produtos[i].valorCompra, produtos[i].valorVenda, produtos[i].valorLucro, produtos[i].percentualLucro, produtos[i].fabricante, produtos[i].unidadeCompra, produtos[i].unidadeVenda);
        }
    }
    system ("pause");
    system("cls");
}

void estadoProdutoMaisCaro() {
    float maiorValor = 0;
    printf("----- Estado(s) com o Produto mais caro -----\n");
    for (int i = 0; i < numProdutos; i++) {
        if (produtos[i].valorVenda > maiorValor) {
            maiorValor = produtos[i].valorVenda;
        }
    }
    for (int i = 0; i < numProdutos; i++) {
        if (produtos[i].valorVenda == maiorValor) {
            printf("Produto mais caro registrado no estado: %s", fabricantes[i].uf);
        }
    }
    printf("\n");
    system ("pause");
     system("cls");
}

void fabricanteProdutoMaisBarato() {
    float menorValor = produtos[0].valorVenda;
    printf("----- Fabricante(s) com o Produto mais barato -----\n");
    for (int i = 0; i < numProdutos; i++) {
        if (produtos[i].valorVenda < menorValor) {
            menorValor = produtos[i].valorVenda;
        }
    }
    for (int i = 0; i < numProdutos; i++) {
        if (produtos[i].valorVenda == menorValor) {
            printf("Produto mais barato registrado no fabricante: %s", produtos[i].fabricante);
        }
    }
    printf("\n");
    system ("pause");
    system("cls");
}

void listarProdutosPorValor() {
    // Bubble Sort para ordenar os produtos por valor de venda em ordem crescente
    for (int i = 0; i < numProdutos - 1; i++) {
        for (int j = 0; j < numProdutos - i - 1; j++) {
            if (produtos[j].valorVenda > produtos[j + 1].valorVenda) {
                Produto temp = produtos[j];
                produtos[j] = produtos[j + 1];
                produtos[j + 1] = temp;
            }
        }
    }

    printf("----- Produtos em Ordem Crescente de Valor -----\n");
    for (int i = 0; i < numProdutos; i++) {
        printf("descricao: %sPeso: %d\nValor de compra: R$ %.2f\nValor de venda: R$ %.2f\nValor do lucro: R$ %.2f\nPercentual de lucro: %.2f%%\nFabricante: %s\nunidadeCompra:%d\nunidadeVenda:%d\n\n",
               produtos[i].descricao, produtos[i].peso, produtos[i].valorCompra, produtos[i].valorVenda, produtos[i].valorLucro, produtos[i].percentualLucro, produtos[i].fabricante, produtos[i].unidadeCompra, produtos[i].unidadeVenda);
    }
    system ("pause");
    system("cls");
}

void listarProdutosPorLucro() {
    // Bubble Sort para ordenar os produtos por valor do lucro em ordem crescente
    for (int i = 0; i < numProdutos - 1; i++) {
        for (int j = 0; j < numProdutos - i - 1; j++) {
            if (produtos[j].valorLucro > produtos[j + 1].valorLucro) {
                Produto temp = produtos[j];
                produtos[j] = produtos[j + 1];
                produtos[j + 1] = temp;
            }
        }
    }
    printf("----- Produtos em Ordem Crescente de Valor do Lucro -----\n");
    for (int i = 0; i < numProdutos; i++) {
        printf("descricao: %sPeso: %d\nValor de compra: R$ %.2f\nValor de venda: R$ %.2f\nValor do lucro: R$ %.2f\nPercentual de lucro: %.2f%%\nFabricante: %s\nunidadeCompra:%d\nunidadeVenda:%d\n\n",
               produtos[i].descricao, produtos[i].peso, produtos[i].valorCompra, produtos[i].valorVenda, produtos[i].valorLucro, produtos[i].percentualLucro, produtos[i].fabricante, produtos[i].unidadeCompra, produtos[i].unidadeVenda);
    }
    system ("pause");
    system("cls");
}

void exibirMenu() {
    printf("\n----- MENU ----- PURELUX -----");
    printf ("\n------------------------------\n");
    printf("1. Cadastrar produto\n");
    printf("2. Cadastrar fabricante\n");
    printf("3. Listar todas as marcas\n");
    printf("4. Listar todos os produtos\n");
    printf("5. Listar os produtos de um determinado estado\n");
    printf("6. Listar os produtos de uma determinada marca\n");
    printf("7. Apresentar o(s) estado(s) onde esta registrado o produto mais caro\n");
    printf("8. Apresentar o(s) fabricante(s) onde esta registrado o produto mais barato\n");
    printf("9. Listar todos os produtos em ordem crescente de valor\n");
    printf("10. Listar todos os produtos em ordem crescente de valor do lucro\n");
    printf("0. Sair\n");
    printf("Digite a opcao desejada: ");
}

int main() {
    int opcao;

    do {
        exibirMenu();
        scanf("%d", &opcao);
        system("cls");
        
        getchar(); // Limpar o buffer do teclado

        switch (opcao) {
            case 1:
                printf("\n----- PRODUTO ----- PURELUX -----");
                printf ("\n------------------------------\n");
                cadastrarProduto();
                break;
            case 2:
                printf("\n----- FABRICANTE ----- PURELUX -----");
                printf ("\n------------------------------\n");
                cadastrarFabricante();
                break;
            case 3:
                printf("\n----- MARCAS ----- PURELUX -----");
                printf ("\n------------------------------\n");
                listarMarcas();
                break;
            case 4:
                printf("\n----- PRODUTOS ----- PURELUX -----");
                printf ("\n------------------------------\n");
                listarProdutos();
                break;
            case 5:
                printf("\n----- ESTADOS ----- PURELUX -----");
                printf ("\n------------------------------\n");
                listarProdutosEstado();
                break;
            case 6:
                printf("\n----- MARCAS ----- PURELUX -----");
                printf ("\n------------------------------\n");
                listarProdutosMarca();
                break;
            case 7:
                printf("\n----- MAIOR PRECO ----- PURELUX -----");
                printf ("\n------------------------------\n");
                estadoProdutoMaisCaro();
                break;
            case 8:
                printf("\n----- MENOR PRECO ----- PURELUX -----");
                printf ("\n------------------------------\n");
                fabricanteProdutoMaisBarato();
                break;
            case 9:
                printf("\n----- PRECO POR VALOR ----- PURELUX -----");
                printf ("\n------------------------------\n");
                listarProdutosPorValor();
                break;
            case 10:
                printf("\n----- PRECO POR LUCRO ----- PURELUX -----");
                printf ("\n------------------------------\n");
                listarProdutosPorLucro();
                break;
            case 0:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("opcao invalida. Digite novamente.\n");
                break;
        }
    } while (opcao != 0);
      system("cls");
    return 0;
}
