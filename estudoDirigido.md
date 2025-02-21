<h1>Estudo Dirigido 🔍💻</h1>

<h3>1. Caracterize um sistema de computação moderno</h3>

> Composto por hardware (CPU, memória, dispositivos de I/O) e software (sistemas operacionais), gerenciando e processando dados de forma eficiente.

<h3>2. Quais a etapas de inicialização do computador?</h3>

> <br>1. POST (Power-On Self Test): Ao ligar o computador, o BIOS/UEFI executa uma série de testes para garantir que o hardware básico esteja funcionando corretamente (memória RAM, processador, etc.). <br>
> <br>2. Carregamento do BIOS/UEFI: O BIOS/UEFI é carregado para inicializar o sistema básico de entrada/saída. Ele pode configurar parâmetros e gerenciar a inicialização do sistema. <br>
> <br>3. Carregamento do carregador de inicialização (bootloader): O BIOS/UEFI localiza e carrega o bootloader, que é responsável por carregar o sistema operacional. <br>
> <br> 4. Carregamento do sistema operacional: O bootloader carrega o kernel do sistema operacional na memória RAM. <br>
> <br>5. Execução de processos do sistema: Uma vez carregado o kernel, ele começa a iniciar os processos necessários para que o sistema operacional entre em funcionamento, como a gestão de usuários, serviços e aplicativos. <br>

<h3>3. O que é interrupção? Como os Sistemas Operacionais tratam as interrupções?</h3>

> A ocorrência de um evento normalmente é sinalizada por uma interrupção do hardware ou do software. O hardware pode disparar uma interrupção a qualquer momento, enviando um sinal àCPU, em geral por meio do barramento do sistema. O software pode disparar uma interrupçãoexecutando uma operação especial, denominada system call (chamada de sistema) ou monitor call (chamada ao monitor).
> Quando a CPU é interrompida, ela para o que está fazendo e imediatamente transfere a execuçãopara uma locação fixa de memória. Essa locação fixa contém o endereço inicial no qual está localizada a rotina de atendimento da interrupção. A rotina de atendimento da interrupção é executada; ao terminar, a CPU retoma a computação interrompida.
> <br><br>**Resumindo:** Uma interrupção é um sinal enviado ao processador para que ele interrompa o seu ciclo de execução atual e trate uma condição específica.

<h3>4. Defina I/O síncrona e I/O assíncrona. Qual permite melhor uso da CPU</h3>

> **I/O síncrona:** Quando uma operação de I/O é realizada de forma síncrona, o processo de aplicação fica bloqueado até que a operação de I/O seja concluída. Durante esse tempo, a CPU fica inativa, esperando a conclusão.
> <br><br>**I/O assíncrona:** Na I/O assíncrona, o processo de aplicação não fica bloqueado. Ele pode continuar a execução enquanto a operação de I/O é realizada em paralelo. Uma vez que a operação de I/O seja concluída, o sistema envia uma notificação (interrupção ou callback).
> <br> <br> A I/O assíncrona permite um melhor uso da CPU, pois evita que o processador fique ocioso esperando a conclusão de tarefas de I/O.

<h3>5. Qual a finalidade da DMA – Direct Memory Access? </h3>

> DMA (Acesso Direto à Memória) permite que dispositivos de I/O acessem diretamente a memória principal (RAM) sem a intervenção da CPU. Isso libera a CPU de realizar operações de transferência de dados, permitindo que ela execute outras tarefas enquanto a transferência de dados ocorre em paralelo. A DMA melhora a eficiência do sistema, especialmente para transferências de grandes volumes de dados.

<h3>6. Como funciona a RAM? Qual o ciclo básico de execução de uma instrução? </h3>

> **A RAM (Random Access Memory)** é uma memória volátil que armazena dados temporários enquanto o computador está em funcionamento. Ela é usada para armazenar dados que são acessados frequentemente pela CPU, como variáveis de programas em execução.

> O ciclo básico de execução de uma instrução envolve os seguintes passos:

> **Busca (Fetch):** A CPU busca a próxima instrução da memória (RAM).
> <br>**Decodificação (Decode):** A CPU decodifica a instrução para entender qual operação precisa ser executada.
> <br>**Execução (Execute):** A CPU executa a operação, seja uma operação aritmética, lógica, ou de movimentação de dados.
> <br>**Escrita (Write):** Se necessário, a CPU escreve o resultado de volta na memória ou nos registradores.

<h3>7. Caracterize a estrutura de armazenamento de um sistema de computação.</h3>

> A estrutura de armazenamento de um sistema de computação inclui diferentes camadas de memória, organizadas em termos de velocidade e capacidade:

> **Registradores:** Memória extremamente rápida, usada para armazenar dados temporários durante o processamento.

> **Cache:** Memória de acesso ultra-rápido que armazena dados e instruções de uso frequente, para reduzir o tempo de acesso à memória principal.

> **RAM:** Memória volátil que armazena dados temporários enquanto o sistema está ligado.

> **Armazenamento secundário:** Dispositivos como HDs e SSDs, usados para armazenar dados permanentemente, mesmo quando o computador é desligado.

> **Armazenamento em rede:** Armazenamento acessado remotamente, como NAS (Network Attached Storage) e serviços em nuvem.

<h3>8. Em que consiste o uso de cache?</h3>

> O cache é uma memória de acesso ultra-rápido usada para armazenar dados frequentemente acessados ou instruções, de modo a reduzir o tempo de acesso à memória principal (RAM). A CPU usa o cache para armazenar as informações que são frequentemente necessárias, como instruções de programas em execução ou dados temporários, garantindo que o tempo de acesso seja mínimo.

<h3>9. Caracterize os diferentes tipos de proteção de hardware suportados em um sistema de computação.</h3>

> A proteção de hardware em um sistema de computação pode ser implementada por diferentes técnicas, incluindo:

> **Proteção de memória:** O uso de mecanismos para garantir que processos não acessem áreas de memória de outros processos ou do próprio sistema operacional sem permissão.

> **Controle de acesso:** Dispositivos de controle de acesso para limitar a interação entre a CPU e os dispositivos de entrada/saída. Por exemplo, os controladores de I/O podem restringir o acesso a certos dispositivos.

> **Modo de execução:** Muitos sistemas operacionais implementam diferentes modos de execução, como modo usuário e modo kernel, para proteger o sistema contra comportamentos maliciosos ou falhas dos programas.

> **Segurança física:** Proteção física dos dispositivos de hardware, como BIOS/UEFI com senhas para impedir o acesso não autorizado.
