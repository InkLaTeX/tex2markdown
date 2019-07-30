SDIR := src/
IFLAGS := include/
LFLAGS := -lm
main: ${SDIR}/latex_delegate.o
	g++ ${SDIR}/latex_delegate.o -o test.exe

test:
	rm -rf ${SDIR}/*.o