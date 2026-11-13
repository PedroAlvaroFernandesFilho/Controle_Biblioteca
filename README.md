# Controle_Biblioteca
Trabalho de Estutura de Dados para o controle de uma biblioteca. 

## Como compilar e executar (Windows)

O programa usa `windows.h` e `conio.h`, então roda apenas no Windows (MinGW / Code::Blocks).

```bash
mkdir output
gcc *.c -o output/biblioteca.exe
output\biblioteca.exe
```

## Situação atual

- Funcionando: menu principal, menu de usuários e **inclusão de usuários** (no início, no fim ou em uma posição da lista).
- Ainda não implementado: consulta, alteração e exclusão de usuários; livros, gêneros, movimentação e relatórios (as telas existem, mas ainda não salvam dados).
