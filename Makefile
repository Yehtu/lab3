question_B: Clock.o question_B.o
	g++ -o question_B Clock.o question_B.o

Clock.o: Clock.cpp Clock.h
	g++ -c Clock.cpp

question_B.o: Clock.cpp Clock.h
	g++ -c question_B.cpp

clean: rm Clock *.o
