SDIR := src/
IFLAGS := include/
LFLAGS := -lm
main: ${SDIR}/latex_delegate.o
	g++
clean:
	rm -rf  ${SDIR}/*.o