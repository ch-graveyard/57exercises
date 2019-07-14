CFLAGS=-g -Wall -O3 -Icommonheaders
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

03printquote: 03printquote/build/printquote
03printquote/build/printquote: 03printquote/printquote.c
	$(CC) $(CFLAGS) $< -o $@

04madlib: 04madlib/build/madlib
04madlib/build/madlib: 04madlib/madlib.c
	$(CC) $(CFLAGS) $< -o $@

05simplemath: 05simplemath/build/simplemath
05simplemath/build/simplemath: 05simplemath/simplemath.c
	$(CC) $(CFLAGS) $< -o $@

06retirement: 06retirement/build/retirement
06retirement/build/retirement: 06retirement/retirement.c
	$(CC) $(CFLAGS) $< -o $@

07rectroomarea: 07rectroomarea/build/rectroomarea
07rectroomarea/build/rectroomarea: 07rectroomarea/rectroomarea.c
	$(CC) $(CFLAGS) $< -o $@

08pizzaparty: 08pizzaparty/build/pizzaparty
08pizzaparty/build/pizzaparty: 08pizzaparty/pizzaparty.c
	$(CC) $(CFLAGS) $< -o $@

09paintcalculator: 09paintcalculator/build/paintcalculator
09paintcalculator/build/paintcalculator: 09paintcalculator/paintcalculator.c
	$(CC) $(CFLAGS) $< -o $@
