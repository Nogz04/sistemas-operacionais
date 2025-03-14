![image](https://github.com/user-attachments/assets/12dc4057-caa1-4e05-afe6-c5f17581ed1d)

<h3>Explicação</h3>

> 1- Primeiro temos um executavel, que está apenas na memória como arquivo.

> 2 - Após isso iremos executar ele, irá abrir um processo através do fork(), ele estará pronto.

> 3 - Se for apenas 1 processo, o escalonador irá escolher ele, se houver mais de 1, ele irá escolher 1 entre todos através de critérios, temos diferentes tipos de escalonador (escalonador de disco, rede, CPU, etc...)

> 4- Após isso ele estará em execução, caso haja uma interrupção, ele voltará ao estado pronto novamente para poder ser passado para o escalonador e ser executado

> 5- Caso nao haja interrupção, ele irá voltar ao estado pronto e irá guardar na memória o contexto do processo.

> 6 - Caso tenha uma operacao de I/O ou evento, durante a execucao do processo, no caso alguém estar digitando um printf ou algo, sem estiver concluido, ele sera colocado em espera até o final da conclusao de I/O ou evento, após concluir a escrita, ele voltará ao estado pronto.

<h3>Filas e escalonadores</h3>

> Temos filas em NOVO, PRONTO & Em Espera
 
> NOVO: Escalonador de Longo Prazo, pois as vezes ningúem esta mexendo no PC sem abrir arquivos

> PRONTO: Escalonador de Curto Prazo, pois caso haja processos na fila, ele irá ser executado em fila rápida

> EM ESPERA: Escalonador de longo prazo, pois em relação ao tempo de processador ele tem frequência de minutos


Escalonador de médio prazo: Swaping


<h2>QUESTÕES</h2>

- É correto afirmar que devido a Multiprogramação há uma menor utilização do processador? Justifique.

  > Sim, pois devido a utilização do escalonador para escolher e priorizar processos específicos e com o sistemas de filas, ajuda o processador a não sobrecarregar.
  
- A partir do conceito de processo, justifique o escalonamento de processos

  > O escalonamento de processos faz a priorização e seleção de qual processo ele irá escolher para executar, no caso do escalonador do processador, o escalonamento irá decidir quais processos irá utilizar ele

- Caracterize o que é um processo em Sistemas Operacionais. Inclua nesta caracterização, o bloco descritor de processo.

  > Processo é um executavel que foi executado no sistema, ele irá abrir um processo ao ser executado. Um arquivo antes de ser executado, ele só está no disco, após ser executado ele vira um processo.
  
  > PCB (bloco descritor de processo): Ele é digamos que um struct, que armazena informações de tudo que ocorreu durante o processo ao final de um chaveamento de contexto. Após uma interrupção, ele guarda as informações no PCB para retoma-las quando necessario
