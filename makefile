CXX = g++
CXXFLAGS = -gcc
EXEC = master
OBJS = source1.o source2.o #two source files

${EXEC}: ${OBJS}
	${CXX} ${CXXFLAGS} -o ${EXEC} ${OBJS}

source1.o: source1.cpp source1.h
	${CXX} ${CXXFLAGS} -c source1.cpp

source2.o: source2.cpp source2.h
	${CXX} ${CXXFLAGS} -c source2.cpp

clean:
	rm -f ${EXEC} ${OBJS}
