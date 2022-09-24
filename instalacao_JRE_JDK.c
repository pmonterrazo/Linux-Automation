#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    char escolha;

    printf("======== Deseja continuar com a Instalação ?? [S/n] ======== : ");
    scanf("%s", &escolha);

    escolha = toupper(escolha);
    switch (escolha)
    {
    case 'S':

        printf("\n |------------ Removendo o JDK e JRE ------------| \n");
        system("sudo apt remove default-jre -y && sudo apt remove default-jdk -y && sudo apt install default-jdk -y > ~/instalacao_JRE_JDK.txt");

        printf(" \n |------------ Limpando o Cache ------------| \n ");
        system("sudo apt auto-remove -y");

        printf(" \n |------------ Limpando o Cache ------------| \n ");
        system("sudo apt auto-remove -y");

        printf("\n |------------ Instalando o JDK e JRE ------------| \n");
        system("sudo apt install default-jre -y && sudo apt install default-jdk -y >> ~/instalacao_JRE_JDK.txt");

        printf("\n |------------ Validando Instalação ------------| \n");
        system("java -version && javac -version >> ~/instalacao_JRE_JDK.txt");
        break;

    case 'N':
        printf(" \n |------------ Programa Finalizado ------------| \n ");
        system("exit");

    default:
        printf(" Entrada Invalida, Verifique e tente novamente");
        break;
    }
}