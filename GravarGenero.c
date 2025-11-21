/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 16/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: funcao que grava generos no arquivo .dat
*/

#include "funcoes.h"

void grava_genero(tipolista_genero *g){

    FILE *ptr;
    char *filename = "Generos.dat";
    char *modo_gravacao = "wb";

    reg_generos genero;
    tipoapontador_genero p;

    p = g->primeiro;
    tela();
    gotoxy(07,23);
    printf("GRAVAR DADOS DA LISTA NO ARQUIVO EM DISCO");
    if(p == NULL){
        gotoxy(07,23);
        printf("LISTA VAZIA....");
        getch();
    }else{
        if((ptr = fopen(filename, modo_gravacao)) == NULL){
            gotoxy(07,23);
            printf("ERRO AO ABRIR O ARQUIVO");
            getch();

        }else{
            while(p != NULL){
                genero = p->conteudos;
                fwrite(&genero, sizeof(genero),1, ptr);
                p = p->proximo;
            }
            fclose(ptr);
            gotoxy(07, 23);
            printf("DADOS SALVOS COM SUCESSO");
            getch();
        }
    }
}