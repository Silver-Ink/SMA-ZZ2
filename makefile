CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wno-missing-braces -O1
LDFLAGS = -L /raylib/src -lraylib
INCLUDES = -I include/
SRCDIR = src
BUILDDIR = bin
TARGET = res
SOURCES = $(wildcard $(SRCDIR)/*.cpp) 
OBJECTS = $(patsubst $(SRCDIR)/%.cpp, $(BUILDDIR)/%.o, $(SOURCES))

all: $(TARGET)

$(TARGET): $(BUILDDIR)/main.o $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) $^ -o $@ $(LDFLAGS)

$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	mkdir -p $(BUILDDIR)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@ $(LDFLAGS)

$(BUILDDIR)/main.o: main.cpp
	mkdir -p $(BUILDDIR)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@ $(LDFLAGS)

.PHONY: clean

clean:
	rm -f $(BUILDDIR)/*.o $(TARGET)