laboratorio@lab25dt09:~$ ls -L
aluno  'Área de Trabalho'   Documentos   Downloads   Imagens   Modelos   Música   Público   snap   Vídeos
laboratorio@lab25dt09:~$ cd Documentos
laboratorio@lab25dt09:~/Documentos$ pwd
/home/laboratorio/Documentos
laboratorio@lab25dt09:~/Documentos$ mkdir aluno
laboratorio@lab25dt09:~/Documentos$ cd aluno
laboratorio@lab25dt09:~/Documentos/aluno$ pwd
/home/laboratorio/Documentos/aluno
laboratorio@lab25dt09:~/Documentos/aluno$ gedit novo.txt
laboratorio@lab25dt09:~/Documentos/aluno$ ls -L
novo.txt
laboratorio@lab25dt09:~/Documentos/aluno$ man ls
laboratorio@lab25dt09:~/Documentos/aluno$ cp ovo.txt copia.txt
cp: não foi possível obter estado de 'ovo.txt': Arquivo ou diretório inexistente
laboratorio@lab25dt09:~/Documentos/aluno$ cp novo.txt copia.txt
laboratorio@lab25dt09:~/Documentos/aluno$ ls -L
copia.txt  novo.txt
laboratorio@lab25dt09:~/Documentos/aluno$ gedit copia.txt
