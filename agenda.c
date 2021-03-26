#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int codigo;
    char nome[50], telefone[15], email[50], nascimento[10], observacao[10];
} agenda;

agenda contato[10];

//Função destinada para filtrar contatos da agenda.
void buscar()
{
    int codigoBusca, i;

    printf("*****************************************************\n");
    printf("Insira codigo para buscar:");
    scanf("%i", &codigoBusca);
    printf("*****************************************************\n");
    for (i = 0; i < 10; i++)
    {

        if (codigoBusca == contato[i].codigo)
        {
            printf("Codigo: %d\n", contato[i].codigo);

            printf("Nome: %s\n", contato[i].nome);

            printf("Telefone: %s\n", contato[i].telefone);

            printf("E-mail: %s\n", contato[i].email);

            printf("Data Nascimento: %s\n", contato[i].nascimento);

            printf("Observacoes: %s\n", contato[i].observacao);

            printf("\n");
            break;
        }
    }
    system("pause");
}

//Função para listar os contatos inseridos.
void listar()
{
    for (int i = 0; i < 10; i++)
    {
        printf("*****************************************************\n");
        printf("Codigo: %d\n", contato[i].codigo);

        printf("Nome: %s\n", contato[i].nome);

        printf("Telefone: %s\n", contato[i].telefone);

        printf("E-mail: %s\n", contato[i].email);

        printf("Data Nascimento: %s\n", contato[i].nascimento);

        printf("Observacoes: %s\n", contato[i].observacao);

        printf("\n");
    }
    system("pause");
}

//Função destinada para cadastrar os contatos. 
void cadastrar()
{
    for (int i = 0; i < 10; i++)
    {
        printf("*****************************************************\n");
        printf("Insira o codigo unico: ");
        scanf("%d", &contato[i].codigo);
        while (contato[i].codigo <= 0)
        {
            printf("Informe um codigo maior que zero\n");
            printf("Insira o codigo: ");
            fflush(stdin);
            scanf("%d", &contato[i].codigo);
        }

        printf("Insira o nome: ");
        fflush(stdin);
        gets(contato[i].nome);

        printf("Insira o telefone: ");
        fflush(stdin);
        gets(contato[i].telefone);

        printf("Insira o email: ");
        fflush(stdin);
        gets(contato[i].email);

        printf("Insira data de nascimento: ");
        fflush(stdin);
        gets(contato[i].nascimento);

        printf("Observacoes: ");
        fflush(stdin);
        gets(contato[i].observacao);
    }
}

//Função de menu, cada opção chama uma função.
void menu()

{
    int op;

    printf("\n*****************************************************\n");
    printf("*                  AGENDA TELEFONICA                *\n");
    printf("*****************************************************\n");
    printf("* 1 - CADASTRAR                                     *\n");
    printf("* 2 - LISTAR                                        *\n");
    printf("* 3 - BUSCAR                                        *\n");
    printf("* 4 - ALTERAR                                       *\n");
    printf("* 5 - EXCLUIR                                       *\n");
    printf("* 0 - SAIR                                          *\n");
    printf("*****************************************************\n");

    scanf("%d", &op);

    switch (op)
    {
    case 1:
        cadastrar();
        break;
    case 2:
        listar();
        break;
    case 3:
        buscar();
        break;

    default:
        break;
    }
}

//Raiz do codigo, fica em looping no menu chamando funções até ser encerrado.
int main()
{

    int op;
    while (op > 0)
    {
        menu();
    }
    return 0;
}