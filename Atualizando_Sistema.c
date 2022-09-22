#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){

  char escolha;
  
  printf("\n Deseja atualizar a distro: [S/n] Sim/Nao: ");
  
  scanf("%s", &escolha);
  
  escolha = toupper(escolha);
  
  switch (escolha){
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
  	
  	default :
  	printf("Valor inserido incorreto");
  } 
  
  getchar();
  
  return 0;
}
