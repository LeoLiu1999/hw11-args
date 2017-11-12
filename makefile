all: c.c
	gcc -o executo c.c

run: all
	./executo

clean:
	rm executo *~
