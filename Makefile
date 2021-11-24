#Select the compiler
CXX?=g++

#INCLUDES (.h) directories, can have as many as we want
CLASSES_LOCATION=classes/
INCLUDES= -I. -I$(CLASSES_LOCATION)

#Library stuff
LIB_FLAGS=

#
OTHER_FLAGS= -O3 -lm -lrt -std=gnu++17 

SOURCES = main.cpp $(CLASSES_LOCATION)/*.cpp


PROGRAM_NAME=testInputs.bin
PROGRAM_DIR=.
PROGRAM_PATH=$(PROGRAM_DIR)/$(PROGRAM_NAME) 


all:
	$(CXX) $(SOURCES) $(INCLUDES) $(LIB_FLAGS) $(OTHER_FLAGS) -o $(PROGRAM_PATH)
	
run:
	./$(PROGRAM_PATH)
	
clean:
	@rm -r $(PROGRAM_PATH)
