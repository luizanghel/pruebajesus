main.o: main.c add.h sub.h
	gcc main.c -g -c
  
TEST_main.o: TEST_main.c add.h sub.h
	gcc TEST_main.c -g -c

add.o: add.c add.h
	gcc add.c -g -c
  
prod: main.o add.o sub.o
	gcc main.o add.o sub.o -o executable
 
test: TEST_main.o add.o sub.o
	gcc TEST_main.o add.o sub.o -g -o executable
