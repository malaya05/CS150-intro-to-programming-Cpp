##################################################
#   GENERIC G++ MAKEFILE
#   MODIFY BELOW
##################################################
# REPLACE THIS WITH THE NAME OF YOUR EXECUTABLE
EXE = main.exe

# All cpp files in folder
SRC = $(wildcard *.cpp)

# Modify compiler flags as desired
CXXFLAGS = -std=c++11 -Wall -Wextra -Wconversion -pedantic -Os

######################################################
#	GENERALLY WON'T CHANGE ANY OF THIS
######################################################
# .o file for every .cpp
OBJS = $(SRC:.cpp=.o)

# C++ Compiler
CXX = g++

# Run psuedo target
run: $(EXE)
		@echo.
		@$(EXE)
		@echo.

# Rule to build the executable
$(EXE): $(OBJS)
	$(CXX) $(LDFLAGS) $(OBJS) -o $@ $(LIBS) 

# Rule for g++ to build .o files from .cpp files
%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $<

# Remove object files from folder
clean:
	@del /Q *.o 2>NUL
	@del /Q *.exe 2>NUL

