#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX_LIVROS 20

struct livronovo
{
    int barras [10], anopubli [10], quantiestoque[10];
    char titulo [10], autor [10];
    float valor [10];
};

struct libros
{
    struct livronovo guardar[MAX_LIVROS];
};

void cadastro (){
    struct libros libros;
    int quantidade;

    printf ("Voce esta cadastrando um livro\n\nse for mais de um livro DIFERENTE do outro, digite a quantidade, senao, digite apenas 1\n");
    printf ("responda: ");
    scanf ("%d", &quantidade);
    system("cls");
    
    for (int i = 0; i < quantidade; i++)
    {     
    printf ("Digite o codigo de barras do livro %d: ", i+1);
    scanf ("%d",&libros.guardar[i].barras);
    printf ("Qual o titulo do livro %d: ", i+1);
    scanf ("%s",libros.guardar[i].titulo);
    printf("Qual e o autor do livro %d: ", i+1);
    scanf ("%s",libros.guardar[i].autor);
    printf ("Qual e o ano de publicacao do livro %d: ", i+1);
    scanf ("%d",&libros.guardar[i].anopubli);
    printf ("Qual a quantidade de estoque disponivel do livro %d: ", i+1);
    scanf ("%d",&libros.guardar[i].quantiestoque);
    printf ("Qual o valor de venda do livro %d: ", i+1);
    scanf ("%f",&libros.guardar[i].valor);

    system("cls");
}
    printf ("livro cadastrado...\n");
}
