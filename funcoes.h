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
void tela(); // telapadrao //

// funcao que inicializa as cabecas da lista de usuarios (Pedro Vinicius Souza Batista) //
void inicializador(); // inicializador //

// tela que da as opções de  do usuario (Pedro Vinicius Souza Batista) //
void tela_Menu_usuarios();  // telausuario //

// tela que contem os pedidos de dados dos livros (Pedro Vinicius Souza Batista) // 
void tela_livro(); // telacadastrolivro //

// tela que contem as opcoes de generos (Pedro Vinicius Souza Batista) // 
void tela_genero(); // telacadastrogenero //

// tela que contem as opcoes de movimentacao (Pedro Vinicius Souza Batista) //
void tela_movimentacao(); // telademovimentacao //

// funcao que pesquisa a matricula do usuario (Pedro Vinicius Souza Batista) //
int pesquisa(); // pesquisacodUsua // 

// tela que da as opcoes de trabalho com o usuario (Pedro Vinicius Souza Batista) //
void tela_usuarios(); // telacadastroUsua //

// funcao que localiza pontos da tela (Pedro Vinicius Souza Batista)//
void gotoxy(); // gotoxy //

//funcao que chama as outras funcoes de inserir na lista (Pedro Vinicius souza Batista)//
void InsereUsuaLista(); // insereUsuaLista //

// funcao que cadastra no fim (Pedro Vinicius Souza Batista)//
void CadastroUsuaFinal(); 

//funcao que cadastra no inicio (Pedro Vinicius Souza Batista)//
void CadastroUsuainicio();

//funcao que cadastra na posicao (Pedro Vinicius Souza Batista)//
void CadastroUsuaPosicao();

// funcao que altera dados do usuario (Pedro Vinicius Souza Batista) //
void altera_usuario();

// funcao que consulta e ordena os usuarios (Pedro Vinicius Souza Batista) //
void consultar_lista();

// funcao que consulta um unico usuario (Pedro Vinicius Souza Batista) //
void consultaUsuaUnico();

// funcao que chama as outras funcoes de ordenacao e a de consulta (Pedro Vinicius Souza Batista) //
void menu_consultar();

// funcao que ordena matricula |Codigo| (Pedro Vinicius Souza Batista) //
void ordenar_matricula();

// funcao que ordena nome em ordem alfabetica (Pedro Vinicius Souza Batista) //
void ordenar_nome();

// funcao que remove usuario no inicio da lista (Pedro Vinicius Souza Batista) //
void removeUsuaInicio();

// funcao que remove usuario no fim da lista (Pedro Vinicius Souza Batista) //
void removeUsuaFim();

// funcao que remove usuario na posicao desejada (Pedro Vinicius Souza Batista) //
void removeUsuaPosicao();
#endif