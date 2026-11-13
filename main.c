/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 15/10/2025
Membros..: Autor 1: 269554-2024 |
           Autor 2: 291150-2025 |
objetivo.: Desenvolver a tela inicial do programa, onde poderá ser selecionado duas vertentes (Usuario e Publicações)
Subfuncao: Programa main que executara todos os arquivos.
*/
#include "funcoes.h"

// mostra uma mensagem na linha MSG e espera uma tecla //
void aviso(const char *msg)
{
    gotoxy(8, 23);
    printf("%-70s", msg);
    gotoxy(8 + (int)strlen(msg), 23);
    getch();
}

int main()
{

    int opc = 0;
    int opc_usua;
    TipoLista_usua L_usua;
    reg_usuario usuario;

    inicializador(&L_usua);

    do{
        telainicial();
        gotoxy(8, 23);
        printf("Digite a opcao: ");
        opc = 0;
        scanf("%d", &opc);
        fflush(stdin);
        switch(opc)
        {
            case 1:
                do{
                    tela_Menu_Usuarios();
                    gotoxy(8, 23);
                    printf("Digite a opcao: ");
                    opc_usua = 0;
                    scanf("%d", &opc_usua);
                    fflush(stdin);
                    switch(opc_usua)
                    {
                        case 1:
                            insere_usua_lista(&L_usua, &usuario, 0);
                        break;
                        case 2:
                        case 3:
                        case 4:
                            aviso("Funcao ainda nao implementada. Tecle algo...");
                        break;
                        case 5:
                        break;
                        default:
                            aviso("Opcao invalida. Tecle algo...");
                    }
                }while(opc_usua != 5);
            break;
            case 2:
                tela_livro();
                aviso("Funcao ainda nao implementada. Tecle algo...");
            break;
            case 3:
                tela_genero();
                aviso("Funcao ainda nao implementada. Tecle algo...");
            break;
            case 4:
                tela_movimentacao();
                aviso("Funcao ainda nao implementada. Tecle algo...");
            break;
            case 5:
                aviso("Funcao ainda nao implementada. Tecle algo...");
            break;
            case 6:
            break;
            default:
                aviso("Opcao invalida. Tecle algo...");
        }


    }while(opc != 6);

    system("cls");
    return 0;
}
