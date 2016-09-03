all: booking

booking: minroom.o cdroom.o main.o book.o details.o delete.o equip.o slchall.o
	g++ minroom.o cdroom.o main.o book.o details.o delete.o equip.o slchall.o -o booking

minroom.o: minroom.cpp 
	g++ -c minroom.cpp

main.o: main.cpp
	g++ -c main.cpp

book.o: book.cpp
	g++ -c book.cpp

cdroom.o: cdroom.cpp
	g++ -c cdroom.cpp

details.o: details.cpp
	g++ -c details.cpp

delete.o: delete.cpp
	g++ -c delete.cpp

equip.o: equip.cpp
	g++ -c equip.cpp

slchall.o: slchall.cpp
	g++ -c slchall.cpp

clean:
	rm *.o booking
