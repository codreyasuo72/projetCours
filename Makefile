libmylib.a : palindrome.o anagrame.o
	ar -rs $@ $^
palindrome.o : palindrome.c mylib.h
	gcc -c palindrome.c -Wall
anagrame.o : anagrame.c  mylib.h
	gcc -c anagrame.c -Wall
