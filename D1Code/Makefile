OBJS = main.o Control.o View.o Animal.o Filesaver.o Storage.o

d1.out: main.o Control.o View.o Animal.o Filesaver.o Storage.o
	g++ -o d1.out $(OBJS)

main.o: main.cc
	g++ -c main.cc

Control.o: Control.h Control.cc
	g++ -c Control.cc

View.o: View.h View.cc
	g++ -c View.cc

Animal.o: Animal.h Animal.cc
	g++ -c Animal.cc

Filesaver.o: Filesaver.h Filesaver.cc
	g++ -c Filesaver.cc

Storage.o: Storage.h Storage.cc
	g++ -c Storage.cc

clean:
	rm -f $(OBJS) d1.out
