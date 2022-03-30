main: src/main.c src/automata.c src/stack.c src/predef.c src/queue.c
	gcc src/main.c src/automata.c src/stack.c src/predef.c src/queue.c -ansi -pedantic-errors -O2 -o compiler