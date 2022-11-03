#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <windows.h>

int del=1, opcao, opcao2, cpf;
char nome;
float salario;

int menu(){
    printf("---------- MENU ----------");
    sleep(del);
    printf("\n 1. Novo cadastro");
    sleep(del);
    printf("\n 2. Alterar cadastro");
    sleep(del);
    printf("\n 3. Calcular décimo terceiro");
    sleep(del);
    printf("\n 4. Calcular férias");
    sleep(del);
    printf("\n 5. Sair");
    sleep(del);
    printf("\n---------------------------");
    return 0;
}
int main()
{
    menu();
    scanf("%d", &opcao);
    system("cls");

    switch(opcao){
    case 1:
        printf("Digite seu nome: ");
        scanf("%s", nome);
        printf("Digite seu CPF: ");
        scanf("%d", cpf);
        printf("Digite seu salário: ");
        scanf("%f", salario);
        system("cls");
        main();
        break;
    case 2:
        printf("-------------------");
        printf("1. Alterar nome");
        printf("2. Alterar CPF");
        printf("3. Alterar salário");
        printf("-------------------");
        scanf("%d", &opcao2);

        switch(opcao2){
        case 1:
            printf("Digite o nome: ");
            scanf("%s", nome);
            system("cls");
            main();
            break;
        case 2:
            printf("Digite o CPF: ");
            scanf("%d", &opcao2);
            system("cls");
            main();
            break;
        case 3:
            printf("Digite o salario: ");
            scanf("%f", &salario);
            system("cls");
            main();
            break;

        }
    }
}
