#ifndef FUNCOES_H
#define FUNCOES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>

typedef struct usuario{

    int codigo;
    char nome[40];
    char endereco[50];
    char telefone[15];
    char email[30];
    char dt_nascimento[13];
    char dt_cadastro[13];
    int status;
    int qt_emprestimos;
    char dt_emprestimo[13];
    char dt_devolucao[13];
    float vl_multas;

} reg_usuario;

// definicao do dado que aponta os locais (Pedro Vinicius Souza Batista) //
typedef struct TipoItem_usua *TipoApontador_usua;

// inicio e fim da lista (Pedro Vinicius Souza Batista) //
typedef struct {
    
    TipoApontador_usua primeiro;
    TipoApontador_usua ultimo;

} TipoLista;

// Cria o tipo usuario que contem o conteudo, proximo e anterior (Pedro Vinícius Souza Batista) //
typedef struct TipoItem_usua {

    TipoApontador_usua anterior;
    TipoApontador_usua proximo;
    reg_usuario conteudos;

} TipoItem_usua;

// tela padrão que mostra a moldura (Pedro Vinicius Souza Batista) //
void telaPadrao();

// funcao que inicializa as cabecas da lista de usuarios (Pedro Vinicius Souza Batista) //
void inicializador();

 























#endif