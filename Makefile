#Object specifiers
OBJ = main.cpp Truckloads.cpp Reverser.cpp EfficientTruckloads.cpp 

#Compiler specifier
CC = g++

#Compiler flags
CFLAG = -w

#object name
OBJNAME = main

all : ${OBJ}
	${CC} ${OBJ} ${CFLAG} -o ${OBJNAME}