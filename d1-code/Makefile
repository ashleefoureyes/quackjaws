CPP = g++
CFLAGS = -c -Wall -Wextra
OBJS = main.o Control.o View.o Animal.o Filesaver.o Storage.o
EXE = d1.out

d1.out: main.o Control.o View.o Animal.o Filesaver.o Storage.o
	$(CPP) -o $(EXE) $(OBJS)

main.o: main.cc
	$(CPP) $(CFLAGS) main.cc

Control.o: Control.h Control.cc
	$(CPP) $(CFLAGS) Control.cc

View.o: View.h View.cc
	$(CPP) $(CFLAGS) View.cc

Animal.o: Animal.h Animal.cc
	$(CPP) $(CFLAGS) Animal.cc

Filesaver.o: Filesaver.h Filesaver.cc
	$(CPP) $(CFLAGS) Filesaver.cc

Storage.o: Storage.h Storage.cc
	$(CPP) $(CFLAGS) Storage.cc

clean:
	rm -f $(OBJS) $(EXE)
