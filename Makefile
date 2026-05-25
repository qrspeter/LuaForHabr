# Compiler to use
CXX = g++

# Compiler flags (warnings and optimization)
CXXFLAGS = -Wall -Wextra

# Target executable name
TARGET = main

# All .cpp files that need to be compiled together
SRCS = main.cpp Script.cpp

# Libraries to link against
LIBS = -llua

# The default rule that runs when you just type 'make'
all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET) $(LIBS)

# Clean rule to delete the executable
clean:
	rm -f $(TARGET)

