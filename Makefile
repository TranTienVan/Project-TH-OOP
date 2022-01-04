CC = g++

all: jsoncpp.o main.o user.o topic_vocabulary.o vocabulary.o grammar.o topic.o topic_grammar.o process.o
	$(CC) jsoncpp.o main.o user.o topic_vocabulary.o vocabulary.o grammar.o topic.o topic_grammar.o process.o -o main

jsoncpp.o: ./source/source/jsoncpp.cpp
	$(CC) -g -c ./source/source/jsoncpp.cpp

user.o: ./source/source/user/user.cpp
	$(CC) -g -c ./source/source/user/user.cpp

vocabulary.o: ./source/source/vocabulary/vocabulary.cpp
	$(CC) -g -c ./source/source/vocabulary/vocabulary.cpp

grammar.o: ./source/source/grammar/grammar.cpp
	$(CC) -g -c ./source/source/grammar/grammar.cpp

topic.o: ./source/source/topic/topic.cpp
	$(CC) -g -c ./source/source/topic/topic.cpp

topic_grammar.o: ./source/source/topic/topic_grammar.cpp
	$(CC) -g -c ./source/source/topic/topic_grammar.cpp

topic_vocabulary.o: ./source/source/topic/topic_vocabulary.cpp
	$(CC) -g -c ./source/source/topic/topic_vocabulary.cpp

process.o: ./source/source/process/process.cpp	
	$(CC) -g -c ./source/source/process/process.cpp

main.o: main.cpp
	$(CC) -g -c main.cpp

clean:
	del -f *.o *.log *.exe *.txt
