CXX = g++
CXXFLAGS = -std=c++23 -Wall -Wextra
LDFLAGS = -lsfml-graphics -lsfml-window -lsfml-system

TARGET = app
SRC = DDA.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC) $(LDFLAGS)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
