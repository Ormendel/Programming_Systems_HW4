CC=gcc 
AR=ar
MAINOBJECTS=TrieNode_main.o
LIBOBJECTS=TrieNode.o TrieNode.h
LIBa=libTrieNode.a
LIBso=libTrieNode.so
FLAGS= -Wall -g 

all: TrieNoded TrieNodes mains maind 

mains: $(MAINOBJECTS) $(LIBa)
	$(CC) $(FLAGS) -o mains $(MAINOBJECTS) $(LIBa)
maind: $(MAINOBJECTS)
	$(CC) $(FLAGS) -o maind $(MAINOBJECTS) ./$(LIBso)

TrieNoded: $(LIBOBJECTS)
	$(CC) -shared -o $(LIBso) $(LIBOBJECTS)
TrieNodes: $(LIBOBJECTS)
	$(AR) -rcs $(LIBa) $(LIBOBJECTS)

TrieNode_main.o: TrieNode_main.c TrieNode.h
	$(CC) $(FLAGS) -c TrieNode_main.c
TrieNode.o: TrieNode.c TrieNode.h
	$(CC) $(FLAGS) -c -fPIC TrieNode.c

.PHONY: clean all
	mains maind 
clean: 
	rm -f *.o mains maind $(LIBso) $(LIBa)




