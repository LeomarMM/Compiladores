Para compilar, digite make, caso não tenha o programa make instalado
digite 

gcc src/main.c src/automata.c src/stack.c src/predef.c src/queue.c -ansi -pedantic-errors -o compiler

no terminal.

Ao executar o programa "compiler", e selecionar um arquivo, a análise será salva no arquivos arquivos:
* lexical.txt
* syntactical.txt
* semantical.txt