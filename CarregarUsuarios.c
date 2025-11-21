/*
Autor....: Pedro Vinícius Souza Batista / Pedro Alvaro Fernandes Filho (pequenas correcoes)
Data.....: 16/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Funcao que carrega os usuarios
*/

#include "funcoes.h"

void ler_arquivo_usuario(TipoLista_usua *L){

    FILE *ptr;
    char *filename = "usuarios.dat";
    char *modo_gravacao = "rb";

    reg_usuario usua;
    TipoApontador_usua p;

    tela();
    gotoxy(25, 03);
    printf("CARREGA DADOS DO ARQUIVO PARA LISTA");
    
    ptr = fopen(filename, modo_gravacao);
    if(ptr == NULL){
        gotoxy(07,23);
        printf("ERRO AO ABRIR O ARQUIVO");
        getch();
    }else{
        while(!feof(ptr)){
            if(fread(&usua, sizeof(usua),1, ptr) != 0){
                p = (TipoApontador_usua)malloc(sizeof(TipoItem_usua));
                p->conteudos = usua;
                if(L->primeiro == NULL){
                    p->proximo = NULL;
                    p->anterior = NULL;
                    L->primeiro = p;
                    L->ultimo = p;
                }else{
                    p->anterior = L->ultimo;
                    L->ultimo->proximo = p;
                    p->proximo = NULL;
                    L->ultimo = p;
                }
            }
        }
        fclose(ptr);
        gotoxy(07,23);
        printf("DADOS LIDOS COM SUCESSO");
    }
}