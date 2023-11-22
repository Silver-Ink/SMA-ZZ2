CXX = g++
CXXFLAGS = -std=c++11 -Wall -D_DEFAULT_SOURCE -Wno-missing-braces -Wunused-result -O2 -D_DEFAULT_SOURCE -I. -I/mnt/c/Users/thodu/OneDrive/Bureau/isima/second_annee/architecture_logiciel/amongus_project_simulation/SMA-ZZ2/raylib -I/mnt/c/Users/thodu/OneDrive/Bureau/isima/second_annee/architecture_logiciel/amongus_project_simulation/SMA-ZZ2/raylib/external -I/usr/local/include -I/mnt/c/Users/thodu/OneDrive/Bureau/isima/second_annee/architecture_logiciel/amongus_project_simulation/SMA-ZZ2/raylib/external/glfw/include -L. -L/mnt/c/Users/thodu/OneDrive/Bureau/isima/second_annee/architecture_logiciel/amongus_project_simulation/SMA-ZZ2/raylib -L/mnt/c/Users/thodu/OneDrive/Bureau/isima/second_annee/architecture_logiciel/amongus_project_simulation/SMA-ZZ2/raylib -L/usr/local/lib -lraylib -lGL -lm -lpthread -ldl -lrt -lX11 -latomic -DPLATFORM_DESKTOP
INCLUDES = -D_DEFAULT_SOURCE -Wno-missing-braces -Wunused-result -O2 -D_DEFAULT_SOURCE -I. -I/mnt/c/Users/thodu/OneDrive/Bureau/isima/second_annee/architecture_logiciel/amongus_project_simulation/SMA-ZZ2/raylib -I/mnt/c/Users/thodu/OneDrive/Bureau/isima/second_annee/architecture_logiciel/amongus_project_simulation/SMA-ZZ2/raylib/external -I/usr/local/include -I/mnt/c/Users/thodu/OneDrive/Bureau/isima/second_annee/architecture_logiciel/amongus_project_simulation/SMA-ZZ2/raylib/external/glfw/include -L. -L/mnt/c/Users/thodu/OneDrive/Bureau/isima/second_annee/architecture_logiciel/amongus_project_simulation/SMA-ZZ2/raylib -L/mnt/c/Users/thodu/OneDrive/Bureau/isima/second_annee/architecture_logiciel/amongus_project_simulation/SMA-ZZ2/raylib -L/usr/local/lib -lraylib -lGL -lm -lpthread -ldl -lrt -lX11 -latomic -DPLATFORM_DESKTOP
SRCDIR = src
BUILDDIR = bin
TARGET = res
SOURCES = $(wildcard $(SRCDIR)/*.cpp) 
OBJECTS = $(patsubst $(SRCDIR)/%.cpp, $(BUILDDIR)/%.o, $(SOURCES))

all: $(TARGET)

$(TARGET): $(BUILDDIR)/main.o $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) $^ -o $@

$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	mkdir -p $(BUILDDIR)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

$(BUILDDIR)/main.o: main.cpp
	mkdir -p $(BUILDDIR)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

.PHONY: clean

clean:
	rm -f $(BUILDDIR)/*.o $(TARGET)