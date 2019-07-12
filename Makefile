CFLAGS=-g -Wall -O3
LDLIBS=
CC=c99

clean:
	rm -rf */build/*

01hello: 01hello/build/hello
01hello/build/hello: 01hello/hello.c
	$(CC) $(CFLAGS) $< -o $@

02countchar: 02countchar/build/countchar
02countchar/build/countchar: 02countchar/countchar.c
	$(CC) $(CFLAGS) $< -o $@
