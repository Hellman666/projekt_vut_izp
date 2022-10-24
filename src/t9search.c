#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>

char str[100];

//2d list vyuzivanych znaku
char list_znaku[10][5] = 
{
    {'+','\0'},
    {'\0'},
    {'a', 'b', 'c','\0'},
    {'d','e','f','\0'},
    {'g','h','i','\0'},
    {'j','k','l','\0'},
    {'m','n','o','\0'},
    {'p','q','r','s','\0'},
    {'t','u','v','\0'},
    {'w','x','y','z','\0'}
};



int kontrolaJmena()
{
    printf("Kontrola Jmena\n");
}

int kontrolaCisla()
{
    printf("Kontrola Cisla");
}

int main(int argc, char *argv[])
{
    //ulozeni vyhledavaneho cisla do promenne x
    char telCislo = argv[1];
    int argvNumber = (int)strtol(argv[1], NULL, 10);
    //printf("%s\n", list_znaku[argvNumber]);
    char* pismena = list_znaku[argvNumber];
    printf("%s", pismena);

    if(argv[argc] == NULL)
    {
        vsechnyKontakty(telCislo);
    } else
    {
        fprintf(stderr, "vas %s prikaz byl zadan spatne\n", "argv");
    }

    printf(" \n----novy radek----\n");
       


    printf(" \n----novy radek----\n");
    //rozdeli cisla na jednotlive
    //TODO: ulozeni jednotlivych cisel do prommene a jejich nasledne vypsani zadanych pismen
    /*while(argvNumber > 0)
    {
        int n = argvNumber % 10;
        printf("%d ",n);
    
        argvNumber = argvNumber / 10;
    }
    */

    //printf("%s\n", x);

    //int x = (intptr_t)argv[1];

    //printf("%s\n", list_znaku[2]);

    //printf("%s\n", &number[2]);

    //printf("%s\n", argv[1]);

    return 0;
}

void vsechnyKontakty(char telCislo)
{
    while (fgets(str, 100, stdin) != NULL)
    {
        fgets(telCislo, 100, stdin);

        if(kontrolaJmena() == 0 || kontrolaCisla == 0)
        {

        }

        //odstranění znaku \0 a vypsání souboru
        str[strlen(str) - 1] = '\0';
        printf("%s, ", str);

        fgets(str, 100, stdin);
        printf("%s\n", str);
    }
}