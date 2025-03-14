![image](https://github.com/user-attachments/assets/12dc4057-caa1-4e05-afe6-c5f17581ed1d)

<h3>Explicação</h3>

> 1- Primeiro temos um executavel, que está apenas na memória como arquivo.

> 2 - Após isso iremos executar ele, irá abrir um processo através do fork(), ele estará pronto.

> 3 - Se for apenas 1 processo, o escalonador irá escolher ele, se houver mais de 1, ele irá escolher 1 entre todos através de critérios, temos diferentes tipos de escalonador (escalonador de disco, rede, CPU, etc...)

> 4- Após isso ele estará em execução, caso haja uma interrupção, ele voltará ao estado pronto novamente para poder ser passado para o escalonador e ser executado

> 5- Caso nao haja interrupção, ele irá voltar ao estado pronto e irá guardar na memória o contexto do processo.

> 6 - Caso tenha uma operacao de I/O ou evento, durante a execucao do processo, no caso alguém estar digitando um printf ou algo, sem estiver concluido, ele sera colocado em espera até o final da conclusao de I/O ou evento, após concluir a escrita, ele voltará ao estado pronto.

<h3>Filas e escalonadores</h3>

> - Temos filas em NOVO, PRONTO & Em Espera
 
> NOVO: Escalonador de Longo Prazo
> PRONTO: Escalonador de Curto Prazo
> EM ESPERA: Escalonador de longo prazo

Escalonador de médio prazo: Swaping
