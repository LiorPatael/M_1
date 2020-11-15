CC=gcc
AR=ar
FLAGS= -Wall -g

all: mymathd mymaths mains maind



#dynamic
maind: main.o mymathd
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so
#static
mains: main.o mymaths
	$(CC) $(FLAGS) -o mains main.o libmyMath.a
#creating dynamic lib .so
mymathd: basicMath.o power.o 
	$(CC) -shared -o libmyMath.so basicMath.o power.o 
#creating static lib .a
mymaths: basicMath.o power.o 
	$(AR) -rcs libmyMath.a basicMath.o power.o 


.PHONY: clean

clean:
	rm -f *.o  mains maind *.a *.so *.h.gch
