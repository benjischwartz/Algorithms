CXX = g++
CXXFLAGS = -std=c++17 -I/usr/local/opt/googletest/include
LDFLAGS = -L/usr/local/opt/googletest/lib -lgtest -lgtest_main

TARGET = test_ThreeSum
SOURCES = test_ThreeSum.cpp ../code/3Sum.cpp
OBJECTS = test_ThreeSum.o ../code/3Sum.o

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(SOURCES) $(LDFLAGS) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@ 

clean:
	rm -f $(TARGET) $(OBJECTS)

