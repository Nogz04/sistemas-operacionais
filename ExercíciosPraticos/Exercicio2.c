//2 – Escreva um programa formado por 3 processos concorrentes, que executam um laço de
//repetição de N interações. Neste laço, cada processo imprime sua identificação. A partir da
//execução do programa, identifique como acontece o escalonamento dos processos.

pid_t procID;
pid_t procID2;
pid_t procID3;

int valorFor;

printf("Digite um valor para o for: ")
scanf("%d", &valorFor);

procID = fork();
procID2 = fork();
procID3 = fork();

for(int i = 0; i< valorFor; i++){

	

}

