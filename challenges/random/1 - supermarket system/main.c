#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct Produto{
    char marca[20];
    char produto[30];
    float preco;
    int quantidade;
};

struct Cliente{
    long long cpf;
    char nome[70];
    char sobrenome[30];
    struct Produto carrinhoDeCompras[30];
    float total;
};


void imprimir(struct Produto produtos[], int tamanho, char c){
    for(int i = 0; i < tamanho; i++){
        if(c == 's') printf("ITEM %i\n", i+1);
        printf("Marca: %s", produtos[i].marca);
        printf("\nProduto: %s", produtos[i].produto);
        printf("\nPreço: R$ %.2f", produtos[i].preco);
        printf("\nQuantidade: %i un.", produtos[i].quantidade);
        printf("\n");
        if(i != tamanho-1){
            printf("\n");
        }
    }
}

struct Produto* inserirProdutos(){
    static struct Produto produtos[5];
    int tamanho = sizeof(produtos) / sizeof(produtos[0]);
    
    strcpy(produtos[0].marca, "Marca1");
    strcpy(produtos[0].produto, "Produto1 100ml");
    produtos[0].preco = 4.90;
    produtos[0].quantidade = 4;

    strcpy(produtos[1].marca, "Marca2");
    strcpy(produtos[1].produto, "Produto2 200ml");
    produtos[1].preco = 9.99;
    produtos[1].quantidade = 2;

    strcpy(produtos[2].marca, "Marca3");
    strcpy(produtos[2].produto, "Produto3 500ml");
    produtos[2].preco = 12.50;
    produtos[2].quantidade = 3;

    strcpy(produtos[3].marca, "Marca4");
    strcpy(produtos[3].produto, "Produto4 1L");
    produtos[3].preco = 19.99;
    produtos[3].quantidade = 1;
    
    strcpy(produtos[4].marca, "Marca5");
    strcpy(produtos[4].produto, "Produto5 1L");
    produtos[4].preco = 29.99;
    produtos[4].quantidade = 9;
    
    imprimir(produtos, tamanho, 's');
    
    return produtos;
}

void imprimirCompra(struct Cliente cliente, struct Produto produtos[], int quantidade){
    printf("-- DADOS DO CLIENTE --\n");
    printf("NOME: %s\n", cliente.nome);
    printf("SOBRENOME: %s\n", cliente.sobrenome);
    printf("CPF: %lld\n", cliente.cpf);
    printf("===== CARRINHO =====\n");
    imprimir(produtos, quantidade, 'n');
    printf("==================\n");
    printf("TOTAL: R$ %.2f", cliente.total);
}

int main(){
    setlocale(LC_ALL, "pt_BR");
     
    char role[10];

    printf("Seja bem-vindo(a) ao Supermercado Braz Cubas!\n\n");
    printf("Você é cliente ou vendedor?\n");

    do{
        printf("-> ");
        scanf("%s", role);
        if(strcmp(role, "cliente") != 0 && strcmp(role, "vendedor") != 0){
            printf("\n'%s' não é uma opção válida! \nTente novamente\n\n", role);
        }
    }while(strcmp(role, "cliente") != 0 && strcmp(role, "vendedor") != 0);
    
    
    
        if(strcmp(role, "vendedor") == 0){
            system("clear");
            printf("==== PAINEL VENDEDOR ====\n\n");
            int tentativas = 3;
            do{
                char senha[20];
                
                printf("Digite a senha: \n-> ");
                scanf("%s", senha);
                
                if(strcmp(senha, "giganteDaColinaVasco") == 0){
                    system("clear");
                    
                    int itensQtd, i = 0;
                    printf("ACESSO CONFIRMADO!\n\n");
                    printf("Quantos itens você deseja adicionar?\n");
                    scanf("%i", &itensQtd);
                    printf("\n");
                    
                    struct Produto produtos[itensQtd];
                    getchar();
                    
                    for(i = 0; i < itensQtd; i++){
                       printf("ITEM %i\n", i+1);
                       printf("Digite a marca: ");
                       fgets(produtos[i].marca, sizeof(produtos[i].marca), stdin);
                       
                       printf("Digite o produto: ");
                       fgets(produtos[i].produto, sizeof(produtos[i].produto), stdin);
                       
                       printf("Digite o preço (un.): ");
                       scanf("%f", &produtos[i].preco);
                       
                       printf("Digite a quantidade: ");
                       scanf("%i", &produtos[i].quantidade);
                        
                       printf("\n");
                       getchar();
                    }
                    
                    system("clear");
                    printf("\n====== INTES ADICIONADOS ======\n");
                    for(i = 0; i < itensQtd; i++){
                        printf("ITEM %i", i+1);
                        printf("\nMarca: %s", produtos[i].marca);
                        printf("Produto: %s", produtos[i].produto);
                        printf("Preço: R$ %.2f", produtos[i].preco);
                        printf("\nQuantidade: %i un.", produtos[i].quantidade);
                        printf("\n\n");
                    }
                    
                    return 0;
                       
                } else {
                    tentativas--;
                    if(tentativas == 0){
                        printf("\nVocê excedeu o limite de tentativas.\nDesligando!");
                        return 0;
                    }
                    printf("\nSenha incorreta! Você possui %i tentativas.\n\n", tentativas);
                }
            }while(tentativas > 0);
        }
        if(strcmp(role, "cliente") == 0){
            struct Cliente cliente;
            int qtd;
            
            system("clear");
            printf("==== PAINEL CLIENTE ====\n\n");
            printf("Seja bem-vindo(a)!\n\n");
            printf("Qual seu nome?\n-> ");
            scanf("%s", cliente.nome);
            fflush(stdin);
            
            printf("\nQual seu sobrenome?\n-> ");
            scanf("%s", cliente.sobrenome);
            fflush(stdin);

            printf("\nQual seu CPF?\n-> ");
            scanf("%lld", &cliente.cpf);
            fflush(stdin);
            
            char nome[100];
            strcpy(nome, cliente.nome);
            strcat(nome, " ");
            strcat(nome, cliente.sobrenome);
            
            system("clear");
            printf("==== PAINEL CLIENTE ====\n\n");
            printf("VAMOS AS COMPRAS, %s!\n", nome);
            
            printf("\n--- ITENS DISPONÍVEIS ---\n");
            struct Produto* produtosDisp = inserirProdutos();
            printf("-------------------------\n\n");
            
            do{
                printf("DIGITE A QUANTIDADE DE ITENS A ADICIONAR: ");
                scanf("%i", &qtd);
                if(qtd > 5 || qtd < 1){
                    printf("ERRO! Temos apenas 5 itens.\n");
                }
            }while(qtd > 5 || qtd < 1);
            
            printf("\n");
            
            int numero, unidades;
            
            for(int i = 0; i < qtd; i++){
                do{
                    printf("Digite o NÚMERO DO ITEM: ");
                    scanf("%i", &numero);
                    if(numero > 5 || numero < 1){
                        printf("ERRO! Temos apenas 5 itens.\n");
                    }
                }while(numero > 5 || numero < 1);
                
                do{
                    printf("Digite a QUANTIDADE (UN.) DESEJADA: ");
                    scanf("%i", &unidades);
                    if(unidades > produtosDisp[numero-1].quantidade){
                        printf("ERRO! A quantidade disponivel é: %i un.\n", produtosDisp[numero-1].quantidade);
                    }
                }while(unidades > produtosDisp[numero-1].quantidade);

                
                strcpy(cliente.carrinhoDeCompras[i].marca, produtosDisp[numero-1].marca);
                strcpy(cliente.carrinhoDeCompras[i].produto, produtosDisp[numero-1].produto);
                cliente.carrinhoDeCompras[i].preco = produtosDisp[numero-1].preco;
                cliente.carrinhoDeCompras[i].quantidade = unidades;
                cliente.total += (produtosDisp[numero-1].preco * unidades);
                printf("\n");
            }
            
            system("clear");
            imprimirCompra(cliente, cliente.carrinhoDeCompras, qtd);
            
        }
} 
