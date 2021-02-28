all: master helper

master: source1.cpp
	g++ -o master source1.cpp

helper: source2.cpp
	g++ -o helper source2.cpp

clean:
	rm master
	rm helper
