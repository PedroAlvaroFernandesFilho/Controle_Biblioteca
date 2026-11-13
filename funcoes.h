#ifndef FUNCOES_H
#define FUNCOES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>

typedef struct usuario{

    int matricula;
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

} TipoLista_usua;

// Cria o tipo usuario que contem o conteudo, proximo e anterior (Pedro Vinícius Souza Batista) //
typedef struct TipoItem_usua {

    TipoApontador_usua anterior;
    TipoApontador_usua proximo;
    reg_usuario conteudos;

} TipoItem_usua;

// tela padrão que mostra a moldura (Pedro Vinicius Souza Batista) //
void tela(void);

// tela inicial com o menu principal (Pedro Vinicius Souza Batista) //
void telainicial(void);

// funcao que inicializa as cabecas da lista de usuarios (Pedro Vinicius Souza Batista) //
void inicializador(TipoLista_usua *L);

// tela que contem os pedidos de dados do usuario (Pedro Vinicius Souza Batista) //
void tela_usuarios(void);

// tela que contem os pedidos de dados dos livros (Pedro Vinicius Souza Batista) //
void tela_livro(void);

// tela que contem as opcoes de generos (Pedro Vinicius Souza Batista) //
void tela_genero(void);

// tela que contem as opcoes de movimentacao (Pedro Vinicius Souza Batista) //
void tela_movimentacao(void);

// funcao que pesquisa a matricula do usuario (Pedro Vinicius Souza Batista) //
TipoApontador_usua pesquisa(TipoLista_usua *L, int matricula);

// tela que da as opcoes de trabalho com o usuario (Pedro Vinicius Souza Batista) //
void tela_Menu_Usuarios(void);

// funcoes de cadastro na lista de usuarios (Pedro Vinicius Souza Batista) //
void inserir_usua_inicio(TipoLista_usua *L, reg_usuario usuario);
void inserir_usua_fim(TipoLista_usua *L, reg_usuario usuario);
void inserir_usua_posicao(TipoLista_usua *L, reg_usuario usuario, int posicao);
void insere_usua_lista(TipoLista_usua *L, reg_usuario *usuario, int opc);

// funcao que localiza pontos da tela (Pedro Vinicius Souza Batista)//
void gotoxy(int x, int y);


#endif