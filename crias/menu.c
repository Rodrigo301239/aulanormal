#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cadastro.c"


void menu (){
    int opcao;

    printf ("Digite:\n1 - Para cadastrar um livro\n2 - Para consultar os livros disponiveis\n3 - para comprar um livro\n4 - para consultar estoque\n5 - para sair\n");
    printf ("opcao: ");
    scanf ("%d", &opcao);

    switch (opcao)
    {
    case 1:
        cadastro ();
        menu();
        break;
    case 2:
        consulta ();
        break;
    case 3:
        //compra ();
        break;
    case 4:
        //estoque ();
        break;
    case 5:
        printf ("saindo do programa...");
        break;
    default:
        break;
    }
}