all: src1 src2

src1: source1.cpp
	g++ -o src1 source1.cpp

src2: source2.cpp
	g++ -o src2 source2.cpp

clean:
	rm src1
	rm src2
