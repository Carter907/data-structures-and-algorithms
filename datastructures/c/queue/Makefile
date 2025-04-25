build: main.c queue.c
	mkdir build
	gcc -g -Wall -Werror main.c queue.c -lm
	mv a.out ./build

debug: clean build
	gdb ./build/a.out

run: clean build
	./build/a.out

clean:
	rm -rf ./build

