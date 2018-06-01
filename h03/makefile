##################################################
#   GENERIC G++ MAKEFILE
#   MODIFY BELOW
##################################################
# REPLACE THIS WITH THE NAME OF YOUR EXECUTABLE
EXE = main.exe

# SUPPLY CPP FILES BELOW, OR, USE SECOND LINE FOR ALL CPP FILES IN FOLDER
# All cpp files in folder
SRC = $(wildcard *.cpp)

# Modify compiler flags as desired
CXXFLAGS = -std=c++11 -Wall -Wextra -Wconversion -pedantic -Os


######################################################
#	GENERALLY WON'T CHANGE ANY OF THIS
######################################################
ifeq ($(strip $(EXE)),)
empty-exe-error:
	@echo FORGOT TO SUPPLY A NAME TO EXE IN MAKEFILE
endif

# .o file for every .cpp
OBJS = $(SRC:.cpp=.o)

# C++ Compiler
CXX = g++

# Run psuedo target
run: $(EXE)
	@$(EXE)

# Rule to build the executable
$(EXE): $(OBJS)
	$(CXX) $(LDFLAGS) $(OBJS) -o $@ $(LIBS) 

# Rule for g++ to build .o files from .cpp files
%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $<

# Remove object files from folder
clean:
	@del /Q *.o
	@del /Q *.exe

