#include <stdio.h>
#include <string.h>
#include "cadastro.c"

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

void consulta(){
    struct libros libros;
    int barra;

    printf ("Qual o codigo de barras do livro?\n");
    scanf ("%d",barra);

    for (int i = 0; i < 1; i++)
    {    
    
    if (barra == libros.guardar[i].barras)
    {
        printf ("ok");
    }
    }


    
    

   
    
}