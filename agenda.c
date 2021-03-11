#include <stdio.h>
#include <string.h>

typedef struct
{
    int codigo;
    char nome[50], telefone[15], email[50], nascimento[10], observacao[10];
} agenda;

main()
{

    agenda contato[10];
    int i, op;

    printf("*****************************************************\n");
    printf("*                  AGENDA TELEFONICA                *\n");
    printf("*****************************************************\n");
    printf("* 1 - CADASTRAR                                     *\n");
    printf("* 2 - LISTAR                                        *\n");
    printf("* 3 - BUSCAR                                        *\n");
    printf("* 4 - ALTERAR                                       *\n");
    printf("* 5 - EXCLUIR                                       *\n");
    printf("* 0 - SAIR                                          *\n");
    printf("*****************************************************\n");
    printf("Insira uma opcao: ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        for (int i = 0; i < 10; i++)
        {
            printf("Insira o codigo unico: ");
            scanf("%d", &contato[i].codigo);
            while(contato[i].codigo <= 0)
            {
                printf("Informe um codigo maior que zero\n");
                printf("Insira o codigo: ");
                scanf("%d", &contato[i].codigo);
            }

            printf("Insira o nome: ");
            fflush(stdin);
            scanf("%s", contato[i].nome);

            printf("Insira o telefone: ");
            fflush(stdin);
            scanf("%s", contato[i].telefone);

            printf("Insira o email: ");
            fflush(stdin);
            scanf("%s", contato[i].email);

            printf("Insira data de nascimento: ");
            fflush(stdin);
            scanf("%s", contato[i].nascimento);

            printf("Observacoes: ");
            fflush(stdin);
            scanf("%s", contato[i].observacao);
        }
        break;

    case 2:
        printf("Funcao indisponivel");
        break;

    case 3:
        printf("Funcao indisponivel");
        break;

    case 4:
        printf("Funcao indisponivel");
        break;

    case 5:
        printf("Funcao indisponivel");
        break;

    case 0:
        break;

    default:
        printf("Opcao Invalida");
        break;
    }
}