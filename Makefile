SDIR := src/
IFLAGS := include/
LFLAGS := -lm
main: ${SDIR}/latex_delegate.o
	g++ ${SDIR}/latex_delegate.o -o test.exe

clean:
	del ${SDIR}/*.o