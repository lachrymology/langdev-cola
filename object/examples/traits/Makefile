PROGRAM = simple complex

IDC = ../idc

all : $(PROGRAM)

run : all
	./simple
	./complex

% : %.st
	$(IDC) $<

tidy: .FORCE
	rm -f *~

clean : tidy .FORCE
	rm -f $(PROGRAM) *.exe

spotless : clean .FORCE

.FORCE :
