all: master helper

master: source1.cpp
	g++ -o src1 source1.cpp

helper: source2.cpp
	g++ -o src2 source2.cpp

clean:
	rm master
	rm helper
