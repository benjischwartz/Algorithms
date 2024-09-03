CXX = g++
CXXFLAGS = -std=c++17 -I/usr/local/opt/googletest/include
LDFLAGS = -L/usr/local/opt/googletest/lib -lgtest -lgtest_main

TARGET = test_UnionFind
SOURCES = test_UnionFind.cpp ../code/UnionFind.cpp
OBJECTS = test_UnionFind.o ../code/UnionFind.o

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(SOURCES) $(LDFLAGS) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@ 

clean:
	rm -f $(TARGET) $(OBJECTS)

