<h1>Questões Iniciais 📝🖥️</h1>

<h2>Sistemas Operacionais</h2>

<h3> 1. Como vocês definem o que é um Sistema Operacional? </h3>

> R: Um sistema operacional, na computação, é um conjunto de programas que permite o gerenciamento dos hardwares e softwares, periféricos, armazenamento, entrada e saída e permite gerenciar downloads, configurações específicas do usuário e utilizar programas, isso tudo com Interface. Exemplos de sistemas operacionais: Windows, IOS, Linux, etc...

<h3> 2. Descreva como acontece a execução dos vários programas “simultaneamente” em um computador?</h3>

> R: O processador é dividido para suportar a execução simultânea de vários programas, ele decide quanto de processador cada programa irá utilizar. Várias threads em execução ao mesmo tempo

<h3> 3. Há necessidade dos diferentes programas trocarem dados entre si? Se sim, como isto pode acontecer? </h3>

> R: Sim, pode acontecer utilizando banco de dados compartilhados, sockets, variáveis de ambiente, trocas de mensagens, mamória compartilhada, via rede de comunicação.

<h3> 4. Há diferentes tipos de memórias em um sistema de computação moderno. Como está organizada a hierarquia de memória nesse sistema? </h3>

> R: Registradores, Memória Cache, RAM, Memória Primária, Memória Secundária (memória Interna).

<h3> 5. Para que é utilizada a Memória Virtual? </h3>

> R: A memória virtual é uma técnica usada pelos sistemas operacionais para gerenciar a memória de maneira mais eficiente, permitindo que os programas usem mais memória do que a quantidade fisicamente disponível na RAM do computador. Ela funciona criando uma "ilusão" de que o sistema tem mais memória do que realmente possui, utilizando parte do disco rígido ou SSD como uma extensão da memória RAM. Aqui estão as principais finalidades da memória virtual:

> **Ampliar a capacidade de memória:** Permite que os aplicativos e processos usem mais memória do que a memória RAM fisicamente disponível. Quando a RAM se esgota, a memória virtual entra em ação, armazenando dados temporários no disco rígido/SSD.

> **Isolamento de processos:** Cada programa ou processo tem seu próprio espaço de memória virtual, isolado de outros. Isso ajuda a evitar que um programa acesse ou corrompa a memória de outro, promovendo segurança e estabilidade.

> **Eficiência e multitarefa:** Com a memória virtual, o sistema operacional pode gerenciar melhor os processos em execução, movendo dados entre a RAM e o disco de forma dinâmica, de modo que vários programas possam ser executados simultaneamente, mesmo que a quantidade de RAM física seja limitada.

> **Gerenciamento de páginas (paging):** A memória virtual é organizada em unidades chamadas "páginas". Quando a RAM está cheia, o sistema pode mover páginas não usadas para o disco rígido e trazer de volta as páginas necessárias para a RAM. Esse processo é conhecido como swap.

<h3> 6. Em um sistema de computação, há os dispositivos de armazenamento e de entrada/saída. Como acontece o uso destes dispositivos pelos vários programas que estão executando? </h3>

> R: Em um sistema de computação, o sistema operacional gerencia o uso de dispositivos de armazenamento e entrada/saída (I/O) pelos programas em execução. Quando um programa precisa acessar dados no disco, o sistema operacional organiza a leitura e escrita, controlando o espaço de armazenamento e o uso de memória virtual. Para dispositivos de I/O, como teclados ou monitores, o sistema operacional coordena a entrada de dados (como cliques ou digitação) e a saída (como exibição de texto ou envio para impressoras), garantindo que múltiplos programas possam usar esses dispositivos de forma segura e eficiente, com o uso de buffers, interrupções e controle de acesso.

<h3> 7. Qual a finalidade de um Sistema de Arquivos? Considere sua experiência e relate o uso que fez de Sistemas de Arquivos </h3>

> R: A finalidade de um Sistema de Arquivos é organizar e gerenciar dados em dispositivos de armazenamento, facilitando o acesso e a manipulação dos arquivos. Ele estrutura os dados em arquivos e pastas, controla o espaço disponível e define permissões de acesso. No meu uso diário, ao salvar documentos em programas como Word ou Excel, o sistema de arquivos organiza esses arquivos no disco rígido ou SSD, permitindo que eu os acesse facilmente quando necessário.


