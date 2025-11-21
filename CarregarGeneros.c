/*
Autor....: Pedro Vinícius Souza Batista / Pedro Alvaro Fernandes Filho (pequenas correcoes)
Data.....: 16/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Funcao que carrega os genero
*/

#include "funcoes.h"

void ler_arquivo_Genero(tipolista_genero *g){

    FILE *ptr;
    char *filename = "Generos.dat";
    char *modo_gravacao = "rb";

    reg_generos genero;
    tipoapontador_genero p;

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
            if(fread(&genero, sizeof(genero),1, ptr) != 0){
                p = (tipoapontador_genero)malloc(sizeof(tipoitem_genero));
                p->conteudos = genero;
                if(g->primeiro == NULL){
                    p->proximo = NULL;
                    p->anterior = NULL;
                    g->primeiro = p;
                    g->ultimo = p;
                }else{
                    p->anterior = g->ultimo;
                    g->ultimo->proximo = p;
                    p->proximo = NULL;
                    g->ultimo = p;
                }
            }
        }
        fclose(ptr);
        gotoxy(07,23);
        printf("DADOS LIDOS COM SUCESSO");
    }
}