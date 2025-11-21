#ifndef FUNCOES_H
#define FUNCOES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>

/*
    =====================================================================
    ESTRUTURAS DE DADOS
    =====================================================================
*/

/* estrutura de dado do tipo usuario (Pedro Vinicius Souza Batista) */
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

/* estrutura de dado do tipo livros (Pedro Vinicius Souza Batista) */
typedef struct Livros {

    int id_livro;
    char titulo[50];
    char autor[50];
    char editora[50];
    char ano_publicacao[15];
    int status;
    int id_usuario;
    char dt_emprestimo[13];
    char dt_devolucao[13];
    float vl_multas;

} reg_livros;

/* estrutura de dado do tipo generos (Pedro Vinicius Souza Batista) */
typedef struct generos {

    int id_genero;
    char ds_genero[40];
    int status;

} reg_generos;

/*
    =====================================================================
    TIPOS DE DADOS UTILITARIOS DE USUARIO
    =====================================================================
*/

/* definicao do dado que aponta os locais para o usuario (Pedro Vinicius Souza Batista) */
typedef struct TipoItem_usua *TipoApontador_usua;

/* inicio e fim da lista de usuarios (Pedro Vinicius Souza Batista) */
typedef struct {

    TipoApontador_usua primeiro;
    TipoApontador_usua ultimo;

} TipoLista_usua;

/* cria o tipo usuario que contem o conteudo, proximo e anterior (Pedro Vinícius Souza Batista) */
typedef struct TipoItem_usua {

    TipoApontador_usua anterior;
    TipoApontador_usua proximo;
    reg_usuario conteudos;

} TipoItem_usua;

/*
    =====================================================================
    TIPOS DE DADOS UTILITARIOS DE LIVRO
    =====================================================================
*/

/* definicao do dado que aponta os locais do livro (Pedro Vinicius Souza Batista) */
typedef struct tipoitem_livro *tipoapontador_livro;

/* aponta para as cabeças da lista de livro (Pedro Vinicius Souza Batista) */
typedef struct {

    tipoapontador_livro primeiro;
    tipoapontador_livro ultimo;

} tipolista_livro;

/* cria o tipo livro que contem o conteudo, proximo e anterior (Pedro Vinícius Souza Batista) */
typedef struct tipoitem_livro {

    tipoapontador_livro anterior;
    tipoapontador_livro proximo;
    reg_livros conteudos;

} tipoitem_livros;

/*
    =====================================================================
    TIPOS DE DADOS UTILITARIOS DE GENERO
    =====================================================================
*/

/* definicao do dado que aponta os locais do genero (Pedro Vinicius Souza Batista) */
typedef struct tipoitem_genero *tipoapontador_genero;

/* aponta para as cabeças da lista de genero (Pedro Vinicius Souza Batista) */
typedef struct tipolista_generos {

    tipoapontador_genero primeiro;
    tipoapontador_genero ultimo;

} tipolista_genero;

/* cria o tipo genero que contem o conteudo, proximo e anterior (Pedro Vinícius Souza Batista) */
typedef struct tipoitem_genero {

    tipoapontador_genero anterior;
    tipoapontador_genero proximo;
    reg_generos conteudos;

} tipoitem_genero;

/*
    =====================================================================
    FUNCOES GERAIS / TELAS
    =====================================================================
*/

/* tela padrão que mostra a moldura (Pedro Vinicius Souza Batista) */
void tela(void);

/* tela inicial do sistema (Pedro Vinicius Souza Batista) */
void telainicial(void);

/* funcao que localiza pontos da tela (Pedro Vinicius Souza Batista) */
void gotoxy(int x, int y);

/* funcao que inicializa as cabecas da lista de usuarios (Pedro Vinicius Souza Batista) */
void inicializador(TipoLista_usua *L);

/* inicializa a lista de livros (Pedro Vinicius Souza Batista) */
void inicializador_livros(tipolista_livro *li);

/* inicializa a lista de generos (Pedro Alvaro Fernandes Filho) */
void inicializador_generos(tipolista_genero *g);

/* tela que da as opções de trabalho com o usuario (Pedro Vinicius Souza Batista) */
void tela_Menu_Usuarios(void);

/* tela que contem os campos de cadastro de usuarios (Pedro Vinicius Souza Batista) */
void tela_usuarios(void);

/* tela que contem os campos de cadastro de livros (Pedro Vinicius Souza Batista) */
void tela_Livro(void);

/* tela que contem as opcoes de generos (Pedro Vinicius Souza Batista) */
void tela_genero(void);

/* tela que contem as opcoes de movimentacao (Pedro Vinicius Souza Batista) */
void tela_movimentacao(void);

/*
    =====================================================================
    FUNCOES DE USUARIO
    =====================================================================
*/

/* funcao que insere usuario na lista, chamando as outras funcoes de cadastro (Pedro Vinicius Souza Batista) */
void InsereUsuaLista(TipoLista_usua *L, reg_usuario *usuario, int opc);

/* funcao que cadastra usuario no fim da lista (Pedro Vinicius Souza Batista) */
void CadastroUsuaFinal(TipoLista_usua *L, reg_usuario usuario);

/* funcao que cadastra usuario no inicio da lista (Pedro Vinicius Souza Batista) */
void CadastroUsuainicio(TipoLista_usua *L, reg_usuario usuario);

/* funcao que cadastra usuario em uma posicao da lista (Pedro Vinicius Souza Batista) */
void CadastroUsuaPosicao(TipoLista_usua *L, reg_usuario usuario, int posicao);

/* funcao que altera dados do usuario (Pedro Vinicius Souza Batista) */
void altera_usuario(TipoLista_usua *L, reg_usuario *usuario);

/* funcao que consulta e ordena os usuarios (Pedro Vinicius Souza Batista) */
void consultar_lista(TipoLista_usua *L, int opc);

/* funcao que consulta um unico usuario (Pedro Vinicius Souza Batista) */
void consultaUsuaUnico(TipoLista_usua *L);

/* funcao que chama o menu de consultas de usuario (Pedro Vinicius Souza Batista) */
void menu_consultar(TipoLista_usua *L, reg_usuario *usuario);

/* funcao que ordena usuarios por matricula (Pedro Vinicius Souza Batista) */
void ordenar_matricula(TipoLista_usua *L);

/* funcao que ordena usuarios em ordem alfabetica (Pedro Vinicius Souza Batista) */
void ordenar_nome(TipoLista_usua *L);

/* funcao que remove usuario no inicio da lista (Pedro Vinicius Souza Batista) */
void removeUsuaInicio(TipoLista_usua *L);

/* funcao que remove usuario no fim da lista (Pedro Vinicius Souza Batista) */
void removeUsuaFim(TipoLista_usua *L);

/* funcao que remove usuario na posicao desejada (Pedro Vinicius Souza Batista) */
void removeUsuaPosicao(TipoLista_usua *L);

/* funcao que pesquisa usuario pela matricula (Pedro Vinicius Souza Batista) */
TipoApontador_usua pesquisa_usuario(TipoLista_usua *L, int matricula);

/*
    =====================================================================
    FUNCOES DE LIVRO
    =====================================================================
*/

/* funcao que insere livros na lista, chamando as funcoes de cadastro (Pedro Vinicius Souza Batista) */
void insereLivroLista(tipolista_livro *li, reg_livros *Livros, int opc);

/* funcao que cadastra livro no inicio da lista (Pedro Vinicius Souza Batista) */
void cadastroLivroinicio(tipolista_livro *li, reg_livros Livros);

/* funcao que cadastra livro no fim da lista (Pedro Vinicius Souza Batista) */
void cadastroLivroFinal(tipolista_livro *li, reg_livros Livros);

/* funcao que cadastra livro em uma posicao da lista (Pedro Vinicius Souza Batista) */
void cadastroLivroPosicao(tipolista_livro *li, reg_livros Livros, int posicao);

/* funcao que altera dados de um livro (Pedro Vinicius Souza Batista) */
void altera_livro(tipolista_livro *li);

/* funcao que consulta fichario geral de livros (Pedro Alvaro Fernandes Filho) */
void consulta_livros_geral(tipolista_livro *li);

/* funcao que chama as ordenacoes e o menu geral de livros (Pedro Vinicius Souza Batista) */
void consultar_lista_livro(tipolista_livro *li, int opc);

/* funcao que ordena os livros por codigo (Pedro Vinicius Souza Batista) */
void ordenar_codigo_livro(tipolista_livro *li);

/* funcao que ordena o nome do livro (Pedro Vinicius Souza Batista) */
void ordenar_nome_livro();

/* funcao que remove livro no inicio da lista (Pedro Alvaro Fernandes Filho) */
void removeLivroInicio(tipolista_livro *li);

/* funcao que remove livro no fim da lista (Pedro Alvaro Fernandes Filho) */
void removeLivroFim(tipolista_livro *li);

/* funcao que remove livro em uma posicao da lista (Pedro Alvaro Fernandes Filho) */
void removeLivroPosicao(tipolista_livro *li);

/* funcao que pesquisa livro pelo codigo (Pedro Vinicius Souza Batista) */
tipoapontador_livro pesquisa_livro(tipolista_livro *li, int id_livro);

/* menu de livros (Pedro Alvaro Fernandes Filho) */
void menu_livros(tipolista_livro *L);

/*
    =====================================================================
    FUNCOES DE GENERO
    =====================================================================
*/

/* funcao que insere generos na lista (Pedro Alvaro Fernandes Filho) */
void InsereGeneroLista(tipolista_genero *g, reg_generos *genero, int opc);

/* funcao que cadastra genero no inicio da lista (Pedro Alvaro Fernandes Filho) */
void cadastroGeneroInicio(tipolista_genero *g, reg_generos genero);

/* funcao que cadastra genero no fim da lista (Pedro Alvaro Fernandes Filho) */
void cadastroGeneroFinal(tipolista_genero *g, reg_generos genero);

/* funcao que cadastra genero em uma posicao da lista (Pedro Alvaro Fernandes Filho) */
void cadastroGeneroPosicao(tipolista_genero *g, reg_generos genero, int posicao);

/* funcao que consulta generos com ordenacao (Pedro Vinicius Souza Batista) */
void consultar_lista_genero(tipolista_genero *g, int opc);

/* funcao que ordena generos por codigo (Pedro Vinicius Souza Batista) */
void ordenar_codigo_genero(tipolista_genero *g);

/* funcao que ordena generos por descricao (Pedro Vinicius Souza Batista) */
void ordenar_nome_genero(tipolista_genero *g);

/* funcao que pesquisa genero pelo codigo (Pedro Vinicius Souza Batista) */
tipoapontador_genero pesquisa_genero(tipolista_genero *g, int id_genero);

/*
    =====================================================================
    FUNCOES DE ARQUIVO
    =====================================================================
*/

/* funcao que carrega os usuarios do arquivo para a lista (Pedro Vinicius Souza Batista) */
void ler_arquivo_usuario(TipoLista_usua *L);

/* funcao que carrega os livros do arquivo para a lista (Pedro Vinicius Souza Batista) */
void ler_arquivo_Livro(tipolista_livro *li);

/* funcao que carrega os generos do arquivo para a lista (Pedro Vinicius Souza Batista) */
void ler_arquivo_Genero(tipolista_genero *g);

/*
    =====================================================================
    FUNCOES DE MOVIMENTACAO (EMPRESTIMO / DEVOLUCAO)
    =====================================================================
*/

/* funcao que realiza emprestimo de publicacao (Pedro Alvaro Fernandes Filho) */
void emprestimo(TipoLista_usua *L, tipolista_livro *li);

/* funcao que realiza devolucao de publicacao (Pedro Alvaro Fernandes Filho) */
void devolucao(TipoLista_usua *L, tipolista_livro *li);

/*
    =====================================================================
    FUNCOES DE MENU / SWITCHES
    =====================================================================
*/

/* funcao que chama o menu de usuarios (Pedro Vinicius Souza Batista) */
void funcaoSwitchUsua(TipoLista_usua *L);

/* funcao que chama o menu de livros (Pedro Vinicius Souza Batista) */
void funcaoSwitchLivro(tipolista_livro *li);

/* funcao que chama o menu de generos (Pedro Alvaro Fernandes Filho) */
void funcaoSwitchGenero(tipolista_genero *g);

/* funcao que chama o menu de movimentacao (Pedro Vinicius Souza Batista) */
void funcaoSwitchMovi(TipoLista_usua *L, tipolista_livro *li);

/* funcao que chama o menu de consultas de livros (Pedro Vinicius Souza Batista) */
void menu_consultar_livro(tipolista_livro *li, reg_livros *livro);

/*
    =====================================================================
    FUNCOES PARA GRAVACAO EM ARQUIVOS
    =====================================================================
*/

/* funcao que grava usuarios no arquivo .dat (Pedro Vinicius Souza Batista) */
void grava_usuario(TipoLista_usua *L);

/* funcao que grava livros no arquivo .dat (Pedro Vinicius Souza Batista) */
void grava_livros(tipolista_livro *li);

/* funcao que grava generos no arquivo .dat (Pedro Vinicius Souza Batista) */
void grava_genero(tipolista_genero *g);

#endif
