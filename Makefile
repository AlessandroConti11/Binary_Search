#Executable name
EXECUTABLE = binary_search

#Compiler
CXX = g++
CXXFLAGS = -std=c++20 -Wall -Werror -Wextra -O2

#Source directories
SRC_DIRS = adaptive_binary_search \
		   boundless_binary_range_search \
		   boundless_binary_search \
		   doubletapped_binary_search \
		   monobound_binary_search \
		   monobound_interpolated_binary_search \
		   monobound_quaternary_search \
		   standard_binary_search \
		   tripletapped_binary_search \

#Source file
SRC = main.cpp \
      $(wildcard $(patsubst %, %/*.cpp, $(SRC_DIRS)))

#Objective file
OBJ = $(SRC:.cpp=.o)


#Main rule
all: $(EXECUTABLE)

#Executable creation rule
$(EXECUTABLE): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

#Rule for compiling .cpp files into .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@


#Clean objects and executable files
clean:
	rm -f $(OBJ) $(EXECUTABLE)