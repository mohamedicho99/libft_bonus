
all:
	cc -g3 main.c

clean:
	rm -f a.out

re: clean all

.PHONY: clean
