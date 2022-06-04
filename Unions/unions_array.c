#include <stdio.h>


union value
{
    int ival;
    char *sval;
};

int main()
{
    union value v[11];

    for (int i = 0; i < 11; i++)
    {
        if (i < 6)
            v[i].ival = i;
        else
            v[i].sval = "Aprovado";
    }

    for (int i = 0; i < 11 ; i++)
    {
        if (i < 6 )
            printf("Sua nota foi: %d , você foi reprovado \n", v[i].ival);
        else
            printf("Você foi : %s\n", v[i].sval);
    }
    return 0;
}