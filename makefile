CC=gcc

main:
	$(CC) -g main.c -o main
run:
	./main
clean:
	rm main 
