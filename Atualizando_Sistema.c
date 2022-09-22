#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main(void)
{

	char escolha;
	int systemOperation;
	setlocale(LC_ALL, "portuguese");

	printf("|------------------ Selecione a sua Distro Linux ------------------| ");
	printf("|------------------ 1 - Debian / Ubuntu / Mint --------------------| ");
	printf("|------------------ 2 - RedHat / Fedora / CentOS ------------------| ");
	printf("|------------------ 3 - SUSE / OpenSuse / MangOeS -----------------| ");

	switch (systemOperation)
	{
	case 1:

		printf("\n \n DISTRIBUIÇÕES SELECIONADAS -| Debian / Ubuntu / Mint |- \n \n");

		printf("\n Deseja atualizar a distro: [S/n] Sim/Nao: ");
		scanf("%s", &escolha);

		escolha = toupper(escolha);

		switch (escolha)
		{
		case 'S':
			printf("\n \n-----SERÁ SOLICITADO A SENHA ADMINISTRADOR----- \n \n");
			system("sudo apt update -y && sudo apt upgrade -y && sudo apt dist-upgrade && sudo apt auto-remove > ~/atualizacaodoScript.txt");
			printf("\n Atualização Concluida com Sucesso \n");
			break;

		case 'N':
			printf("\n ------O PROGRAMA SERÁ FINALIZADO------ \n");
			printf("\n Nenhum de arquivo de LOG foi criado \n");
			system("exit");
			break;

		default:
			printf("Valor inserido incorreto");
		}

		break;

	case 2:

		printf("\n \n DISTRIBUIÇÕES SELECIONADAS -| RedHat / Fedora / CentOS |- \n \n");

		printf("\n Deseja atualizar a distro: [S/n] Sim/Nao: ");
		scanf("%s", &escolha);

		escolha = toupper(escolha);

		switch (escolha)
		{
		case 'S':
			printf("\n \n-----SERÁ SOLICITADO A SENHA ADMINISTRADOR----- \n \n");
			system("sudo dnf update -y && sudo dnf upgrade -y && sudo dnf system-upgrade && sudo dnf autoremove > ~/atualizacaodoScript.txt");
			printf("\n Atualização Concluida com Sucesso \n");
			break;

		case 'N':
			printf("\n ------O PROGRAMA SERÁ FINALIZADO------ \n");
			printf("\n Nenhum de arquivo de LOG foi criado \n");
			system("exit");
			break;

		default:
			printf("Valor inserido incorreto");
		}

		break;

	case 3:

		printf("\n \n DISTRIBUIÇÕES SELECIONADAS -| SUSE / OpenSuse / MangOeS |- \n \n");

		printf("\n Deseja atualizar a distro: [S/n] Sim/Nao: ");
		scanf("%s", &escolha);

		escolha = toupper(escolha);

		switch (escolha)
		{
		case 'S':
			printf("\n \n-----SERÁ SOLICITADO A SENHA ADMINISTRADOR----- \n \n");
			system("sudo zypper refresh -y && sudo dnf upgrade -y  > ~/atualizacaodoScript.txt");
			printf("\n Atualização Concluida com Sucesso \n");
			break;

		case 'N':
			printf("\n ------O PROGRAMA SERÁ FINALIZADO------ \n");
			printf("\n Nenhum de arquivo de LOG foi criado \n");
			system("exit");
			break;

		default:
			printf("Valor inserido incorreto");
		}

		break;

	default:
		printf("Valor incorreto");
		break;
	}

	getchar();

	return 0;
}
