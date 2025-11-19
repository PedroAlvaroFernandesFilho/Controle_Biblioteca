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

    TipoLista_usua *L;
    tipolista_livro *li;
    tipolista_genero *g;

    inicializador(&L);
    inicializador_livros(&li);
    inicializador_generos(&g);

    system("color 1F");

    reg_usuario *usuario;
    usuario = (reg_usuario *)malloc(sizeof(reg_usuarios));
    reg_livros *Livro;
    Livro = (reg_livros *)malloc(sizeof(reg_livros));
    reg_generos *Genero;
    Genero = (reg_generos *)malloc(sizeof(reg_generos));
    
    ler_arquivo_usuario(&L);
    ler_arquivo_Livro(&li);
    ler_arquivo_Genero(&g);  

    telainicial();
    do{
        switch (opc)
        {
        case 1:
            funcaoSwitchUsua(&L, &usuario, opc);
            break;
        case 2:
            funcaoSwitchLivro(&li, &Livro, opc);
            break;
        case 3:
            funcaoSwitchGenero(&g, &Genero, opc);
            break;
        case 4:
            funcaoSwitchMovi();            
            break;
        }

    }while(opc != 5);

    gravar_usuario(&L);
    gravar_livro(&li);
    gravar_genero(&g);

    return 0;
}


