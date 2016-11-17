CC = gcc -g
LIBS = -lkernel32

uptime: uptime.o
	$(CC) -o uptime uptime.o $(LIBS)
uptime.o: uptime.c
	$(CC) -c uptime.c
clean:
	rm -f uptime.o uptime.exe
install: uptime.exe
	install -s uptime.exe /usr/local/bin
