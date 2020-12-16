all: StringMemeficator.c 
	gcc -g -Wextra -o StringMemeficator StringMemeficator.c

clean: 
	rm -f StringMemeficator

