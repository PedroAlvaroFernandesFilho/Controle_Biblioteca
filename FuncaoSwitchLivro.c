/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 18/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: funcao que de switch que chama as outras funcoes
*/

#include "funcoes.h"

void funcaoSwitchLivro(tipolista_livro *li)
{
    int opc;
    reg_livros livro;

    do{
        menu_livros(li);
        gotoxy(15, 23);
        scanf("%d", &opc);

        switch(opc)
        {
        case 1:
            insereLivroLista(li, &livro, opc);
            break;

        case 2:
            menu_consultar_livro(li, &livro);
            break;

        case 3:
            altera_livro(li);
            break;

        case 4:
            removeLivroPosicao(li);
            break;
        }

    }while(opc != 5);
}
