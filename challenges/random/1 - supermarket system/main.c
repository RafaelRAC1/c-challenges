#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct Item{
    char marca[20];
    char produto[30];
    float preco;
    int quantidade;
};

struct Cliente{
    long long cpf;
    char nome[70];
    char sobrenome[30];
    struct Item carrinhoDeCompras[30];
    float total;
};


void imprimir(struct Item itens[], int tamanho, char c){
    for(int i = 0; i < tamanho; i++){
        if(c == 's') printf("ITEM %i\n", i+1);
        printf("Marca: %s", itens[i].marca);
        printf("\nProduto: %s", itens[i].produto);
        printf("\nPreço: R$ %.2f", itens[i].preco);
        printf("\nQuantidade: %i un.", itens[i].quantidade);
        printf("\n");
        if(i != tamanho-1){
            printf("\n");
        }
    }
}

struct Item* inseriritens(){
    static struct Item itens[5];
    int tamanho = sizeof(itens) / sizeof(itens[0]);
    
    strcpy(itens[0].marca, "Marca1");
    strcpy(itens[0].produto, "Produto1 100ml");
    itens[0].preco = 4.90;
    itens[0].quantidade = 4;

    strcpy(itens[1].marca, "Marca2");
    strcpy(itens[1].produto, "Produto2 200ml");
    itens[1].preco = 9.99;
    itens[1].quantidade = 2;

    strcpy(itens[2].marca, "Marca3");
    strcpy(itens[2].produto, "Produto3 500ml");
    itens[2].preco = 12.50;
    itens[2].quantidade = 3;

    strcpy(itens[3].marca, "Marca4");
    strcpy(itens[3].produto, "Produto4 1L");
    itens[3].preco = 19.99;
    itens[3].quantidade = 1;
    
    strcpy(itens[4].marca, "Marca5");
    strcpy(itens[4].produto, "Produto5 1L");
    itens[4].preco = 29.99;
    itens[4].quantidade = 9;
    
    imprimir(itens, tamanho, 's');
    
    return itens;
}

void imprimirCompra(struct Cliente cliente, struct Item itens[], int quantidade){
    printf("-- DADOS DO CLIENTE --\n");
    printf("NOME: %s\n", cliente.nome);
    printf("SOBRENOME: %s\n", cliente.sobrenome);
    printf("CPF: %lld\n", cliente.cpf);
    printf("===== CARRINHO =====\n");
    imprimir(itens, quantidade, 'n');
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
                    
                    struct Item itens[itensQtd];
                    getchar();
                    
                    for(i = 0; i < itensQtd; i++){
                       printf("ITEM %i\n", i+1);
                       printf("Digite a marca: ");
                       fgets(itens[i].marca, sizeof(itens[i].marca), stdin);
                       
                       printf("Digite o produto: ");
                       fgets(itens[i].produto, sizeof(itens[i].produto), stdin);
                       
                       printf("Digite o preço (un.): ");
                       scanf("%f", &itens[i].preco);
                       
                       printf("Digite a quantidade: ");
                       scanf("%i", &itens[i].quantidade);
                        
                       printf("\n");
                       getchar();
                    }
                    
                    system("clear");
                    printf("\n====== INTES ADICIONADOS ======\n");
                    for(i = 0; i < itensQtd; i++){
                        printf("ITEM %i", i+1);
                        printf("\nMarca: %s", itens[i].marca);
                        printf("Item: %s", itens[i].produto);
                        printf("Preço: R$ %.2f", itens[i].preco);
                        printf("\nQuantidade: %i un.", itens[i].quantidade);
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
            struct Item* itensDisp = inseriritens();
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
                    if(unidades > itensDisp[numero-1].quantidade){
                        printf("ERRO! A quantidade disponivel é: %i un.\n", itensDisp[numero-1].quantidade);
                    }
                }while(unidades > itensDisp[numero-1].quantidade);

                
                strcpy(cliente.carrinhoDeCompras[i].marca, itensDisp[numero-1].marca);
                strcpy(cliente.carrinhoDeCompras[i].produto, itensDisp[numero-1].produto);
                cliente.carrinhoDeCompras[i].preco = itensDisp[numero-1].preco;
                cliente.carrinhoDeCompras[i].quantidade = unidades;
                cliente.total += (itensDisp[numero-1].preco * unidades);
                printf("\n");
            }
            
            system("clear");
            imprimirCompra(cliente, cliente.carrinhoDeCompras, qtd);
            
        }
} 
