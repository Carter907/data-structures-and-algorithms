build: main.cpp
	mkdir build
	g++ -g -Wall -Werror main.cpp -lm
	mv a.out ./build

debug: clean build
	gdb ./build/a.out

run: clean build
	./build/a.out

clean:
	rm -rf ./build

