#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/** Esse programa visa solucionar o problema de garantir um bom atendimentos aos clientes do Hotel Descanso Garantido,
    a partir das principais atividades hoteleiras tais como:
    - Reserva de quarto
    - Informações de cliente
    - Informações de funcionários!
    -
    -
 */
typedef struct DATA{
    int dia;
    int mes;
    int ano;
}DATA;

typedef struct CLIENTE{
    int codigo;
    char nome[40], sobrenome[50];
    char endereco[100];
    int telefone;
}CLIENTE;

typedef struct FUNCIONARIO{
    int codigo;
    char nome[40], sobrenome[50];
    int telefone;
    char cargo[30];
    int salario;
}FUNCIONARIO;

typedef struct ESTADIA{
    int codigo;
    DATA entrada;
    DATA saida;
    int diarias;
    int codigoQuarto;

}ESTADIA;

typedef struct QUARTO{
    int codigoQuarto;
    int quantidadeHospedes;
    int valorDiaria;
    int status;
}QUARTO;

int opt(){
    printf("O que deseja fazer?\n");
    printf("(1) Informações do Hotel;");
}

int main()
{
    printf("\n\n___|Hotel Descanso Garantido|___\n\n", setlocale(LC_ALL,""));
    printf("Seja bem-vindo ao nosso sistema de Auto-Atendimento!\n");
    opt();
}
