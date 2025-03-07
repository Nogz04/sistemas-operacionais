laboratorio@lab25dt09:~/Documentos/aluno$ mv copia.txt novo.txt

laboratorio@lab25dt09:~/Documentos/aluno$ gedit novo.txt

laboratorio@lab25dt09:~/Documentos/aluno$ rm novo.txt

laboratorio@lab25dt09:~/Documentos/aluno$ gedit novo.txt

laboratorio@lab25dt09:~/Documentos/aluno$ cd ..

laboratorio@lab25dt09:~/Documentos$ pwd

/home/laboratorio/Documentos

laboratorio@lab25dt09:~/Documentos$ rmdir aluno

laboratorio@lab25dt09:~/Documentos$ strace pwd




laboratorio@lab25dt09:~/UFN$ cd disciplinas

laboratorio@lab25dt09:~/UFN/disciplinas$ cd SO

laboratorio@lab25dt09:~/UFN/disciplinas/SO$ gedit comandos.txt

laboratorio@lab25dt09:~/UFN/disciplinas/SO$ ls -L

comandos.txt  trabalhos

laboratorio@lab25dt09:~/UFN/disciplinas/SO$ gedit comandos.txt

laboratorio@lab25dt09:~/UFN/disciplinas/SO$ mv comandos.txt texto.txt

laboratorio@lab25dt09:~/UFN/disciplinas/SO$ ls -L

texto.txt  trabalhos

laboratorio@lab25dt09:~/UFN/disciplinas/SO$ gedit texto.txt

laboratorio@lab25dt09:~/UFN/disciplinas/SO$ cd ..

laboratorio@lab25dt09:~/UFN/disciplinas$ cd..

cd..: comando não encontrado

laboratorio@lab25dt09:~/UFN/disciplinas$ cd ..

laboratorio@lab25dt09:~/UFN$ cd ..

laboratorio@lab25dt09:~$ cd Documentos

laboratorio@lab25dt09:~/Documentos$ rmdir Documentos

rmdir: falhou em remover 'Documentos': Arquivo ou diretório inexistente

laboratorio@lab25dt09:~/Documentos$ cd ..

laboratorio@lab25dt09:~$ rmdir Documentos

laboratorio@lab25dt09:~$ pwd

/home/laboratorio

laboratorio@lab25dt09:~$ ls -L

aluno  'Área de Trabalho'   Downloads   Imagens   Modelos   Música   Público   snap   UFN   Vídeos
 
laboratorio@lab25dt09:~$ strace pwd

