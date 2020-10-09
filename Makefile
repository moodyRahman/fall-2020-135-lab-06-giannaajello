main: main.o funcs.o caesar.o vigenere.o decryption.o
	g++ -o main main.o funcs.o caesar.o vigenere.o decryption.o

tests: tests.o 
	g++ -o tests tests.o 


funcs.o: funcs.cpp funcs.h

main.o: main.cpp funcs.h caesar.h vigenere.h decryption.h

caesar.o: caesar.cpp caesar.h

vigenere.o: vigenere.cpp vigenere.h

decryption.o: decryption.cpp decryption.h caesar.h



tests.o: tests.cpp  doctest.h

clean:
	rm -f main.o tests.o funcs.o caesar.o decryption.o vigenere.o

help:
	@echo  make main : make executable named main
	@echo make tests : make test suite named tests




