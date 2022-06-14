#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float mediaAluno1, mediaAluno2, mediaAluno3, mediaAluno4, mediaAluno5;
    int maior;
    
    struct dadosdealuno
    {
        float nota01;
        float nota02;
        float nota03;
        char numerodaMatricula;
        char nome[51];
    } Aluno1, Aluno2, Aluno3, Aluno4, Aluno5;
    
    printf("//-------------------------------------------\n");//1------------------------------------


    mediaAluno1 = (Aluno1.nota01 + Aluno1.nota02 + Aluno1.nota03)/3;

    for (int i = 1; i < 6; i++)//NOME DO ALUNO
    {
        printf("Nome do aluno: ");
        scanf("%s", Aluno1.nome);
    }
    printf("Completo\n\t\tProximo >>>\n");
    
    for (int i = 1; i < 6; i++)//NUMERO DA MATRICULA
    {
        printf("Digite a matricula do aluno: ");
        scanf("%s", Aluno1.numerodaMatricula);
    }
    printf("Completo\n\t\tProximo >>>\n");

    for (int i = 1; i < 4; i++)//NOTAS
    {
        printf("Digite a nota 01: ");
        scanf("%s", Aluno1.nota01);
        printf("Digite a nota 02: ");
        scanf("%s", Aluno1.nota02);
        printf("Digite a nota 03: ");
        scanf("%s", Aluno1.nota03);
    }
    printf("Completo\n\t\tProximo >>>\n");

    printf("//-------------------------------------------\n");//2------------------------------------

    mediaAluno2 = (Aluno2.nota01 + Aluno2.nota02 + Aluno2.nota03)/3;

    for (int i = 1; i < 6; i++)//NOME DO ALUNO
    {
        printf("Nome do aluno: ");
        scanf("%s", Aluno2.nome);
    }
    printf("Completo\n\t\tProximo >>>\n");
    
    for (int i = 1; i < 6; i++)//NUMERO DA MATRICULA
    {
        printf("Digite a matricula do aluno: ");
        scanf("%s", Aluno2.numerodaMatricula);
    }
    printf("Completo\n\t\tProximo >>>\n");

    for (int i = 1; i < 4; i++)//NOTAS
    {
        printf("Digite a nota 01: ");
        scanf("%s", Aluno2.nota01);
        printf("Digite a nota 02: ");
        scanf("%s", Aluno2.nota02);
        printf("Digite a nota 03: ");
        scanf("%s", Aluno2.nota03);
    }
    printf("Completo\n\t\tProximo >>>\n");

    printf("//-------------------------------------------\n");//3------------------------------------

    mediaAluno3 = (Aluno3.nota01 + Aluno3.nota02 + Aluno3.nota03)/3;

    for (int i = 1; i < 6; i++)//NOME DO ALUNO
    {
        printf("Nome do aluno: ");
        scanf("%s", Aluno3.nome);
    }
    printf("Completo\n\t\tProximo >>>\n");
    
    for (int i = 1; i < 6; i++)//NUMERO DA MATRICULA
    {
        printf("Digite a matricula do aluno: ");
        scanf("%s", Aluno3.numerodaMatricula);
    }
    printf("Completo\n\t\tProximo >>>\n");

    for (int i = 1; i < 4; i++)//NOTAS
    {
        printf("Digite a nota 01: ");
        scanf("%s", Aluno3.nota01);
        printf("Digite a nota 02: ");
        scanf("%s", Aluno3.nota02);
        printf("Digite a nota 03: ");
        scanf("%s", Aluno3.nota03);
    }
    printf("Completo\n\t\tProximo >>>\n");

    printf("//-------------------------------------------\n");//4------------------------------------

    mediaAluno4 = (Aluno4.nota01 + Aluno4.nota02 + Aluno4.nota03)/3;

    for (int i = 1; i < 6; i++)//NOME DO ALUNO
    {
        printf("Nome do aluno: ");
        scanf("%s", Aluno4.nome);
    }
    printf("Completo\n\t\tProximo >>>\n");
    
    for (int i = 1; i < 6; i++)//NUMERO DA MATRICULA
    {
        printf("Digite a matricula do aluno: ");
        scanf("%s", Aluno4.numerodaMatricula);
    }
    printf("Completo\n\t\tProximo >>>\n");

    for (int i = 1; i < 4; i++)//NOTAS
    {
        printf("Digite a nota 01: ");
        scanf("%s", Aluno4.nota01);
        printf("Digite a nota 02: ");
        scanf("%s", Aluno4.nota02);
        printf("Digite a nota 03: ");
        scanf("%s", Aluno4.nota03);
    }
    printf("Completo\n\t\tProximo >>>\n");

    printf("//-------------------------------------------\n");//5------------------------------------

    mediaAluno5 = (Aluno5.nota01 + Aluno5.nota02 + Aluno5.nota03)/3;

    for (int i = 1; i < 6; i++)//NOME DO ALUNO
    {
        printf("Nome do aluno: ");
        scanf("%s", Aluno5.nome);
    }
    printf("Completo\n\t\tProximo >>>\n");
    
    for (int i = 1; i < 6; i++)//NUMERO DA MATRICULA
    {
        printf("Digite a matricula do aluno: ");
        scanf("%s", Aluno5.numerodaMatricula);
    }
    printf("Completo\n\t\tProximo >>>\n");

    for (int i = 1; i < 4; i++)//NOTAS
    {
        printf("Digite a nota 01: ");
        scanf("%s", Aluno5.nota01);
        printf("Digite a nota 02: ");
        scanf("%s", Aluno5.nota02);
        printf("Digite a nota 03: ");
        scanf("%s", Aluno5.nota03);
    }
    printf("Completo\n\t\tProximo >>>\n");

    for (int i = 1; i < 6; i++)
    {
        if (mediaAluno1 > mediaAluno2 && mediaAluno1 > mediaAluno4 && mediaAluno4 > mediaAluno5 && mediaAluno1 > mediaAluno3)
        {
            maior = mediaAluno1;
        }else if (mediaAluno2 > mediaAluno1 && mediaAluno2 > mediaAluno4 && mediaAluno4 > mediaAluno5 && mediaAluno2 > mediaAluno3)
        {
            maior = mediaAluno2;
        }else if (mediaAluno3 > mediaAluno2 && mediaAluno3 > mediaAluno4 && mediaAluno4 > mediaAluno5 && mediaAluno3 > mediaAluno2)
        {
            maior = mediaAluno3;
        }else if (mediaAluno4 > mediaAluno2 && mediaAluno4 > mediaAluno1 && mediaAluno4 > mediaAluno5 && mediaAluno4 > mediaAluno3)
        {
            maior = mediaAluno4;
        }else{
            maior = mediaAluno5;
        }
        printf("a maior media de notas e a %d", maior);
        
        
        
        
    }
    
    return 0;
}