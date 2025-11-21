/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 15/10/2025
Membros..: Autor 1: 269554-2024 |
           Autor 2: 291150-2025 |
objetivo.: Desenvolver a tela inicial do programa, onde poderá ser selecionado duas vertentes (Usuario e Publicações)
Subfuncao: Programa main que executara todos os arquivos.
*/
#include "funcoes.h"

int main()
{
    int opc;

    TipoLista_usua L;
    tipolista_livro li;
    tipolista_genero g;

    inicializador(&L);
    inicializador_livros(&li);
    inicializador_generos(&g);

    system("color 1F");

    ler_arquivo_usuario(&L);
    ler_arquivo_Livro(&li);
    ler_arquivo_Genero(&g);

    do
    {
        telainicial();

        gotoxy(2, 23);
        printf("MSG.:                                     ");

        gotoxy(15, 23);
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            funcaoSwitchUsua(&L);
            break;
        case 2:
            funcaoSwitchLivro(&li);
            break;
        case 3:
            funcaoSwitchGenero(&g);
            break;
        case 4:
            funcaoSwitchMovi(&L, &li);
            break;
        }
    } while (opc != 5);

    grava_usuario(&L);
    grava_livros(&li);
    grava_genero(&g);

    return 0;
}
