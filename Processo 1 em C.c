//Código em C

#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(){
	pid_t procID;
	procID = fork();
	if (procID < 0){
		printf("Erro na criação do novo processo\n");
		return -1;
	}
	else if (procID == 0){
		printf("Processo filho - para o FILHO o fork devolveu %d\n", procID);
		printf("Processo filho - PID = %d\n", getpid());
		return 0;
	}
	else{
		printf("Processo Pai - para o PAI o fork devolveu %d\n", procID);
		printf("Processo Pai - PID = %d\n", getpid());
		return 0;
	}
}


//Comandos Linux

laboratorio@lab25dt09:~/UFN$ gedit processos.c
  
laboratorio@lab25dt09:~/UFN$ gcc -o processos processos.c
  
laboratorio@lab25dt09:~/UFN$ ./processos
  
Processo Pai - para o PAI o fork devolveu 9029

Processo Pai - PID = 9028
  
Processo filho - para o FILHO o fork devolveu 0
  
Processo filho - PID = 9029



