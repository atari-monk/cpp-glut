# Project: cpp-kinematics
# Makefile created by Red Panda C++ 1.1.5
# edited by AtariMonk

CPP      = g++.exe
CC       = gcc.exe
WINDRES  = windres.exe
RES      = cpp-kinematics_private.res
OBJ      = main.o object.o keyboard.o resizer.o display.o printer.o timer.o menu.o data.o dataprinter.o tracer.o model.o glutapp.o framecomputer.o $(RES)
LINKOBJ  = main.o object.o keyboard.o resizer.o display.o printer.o timer.o menu.o data.o dataprinter.o tracer.o model.o glutapp.o framecomputer.o $(RES)
CLEANOBJ  =  main.o object.o keyboard.o resizer.o display.o printer.o timer.o menu.o data.o dataprinter.o tracer.o model.o glutapp.o framecomputer.o cpp-kinematics_private.res cpp-kinematics.exe
LIBS     =  -mwindows -lm -lfreeglut.dll -lopengl32 -lglu32 -lwinmm -lgdi32
INCS     =  
CXXINCS  =  
BIN      = bin\Release\publish\cpp-kinematics.exe
CXXFLAGS = $(CXXINCS)  -g3 -pipe -Wall -Wextra -D__DEBUG__
CFLAGS   = $(INCS)  -g3 -pipe -Wall -Wextra -D__DEBUG__
RM       = del /q /f
HDIR 	 = h/
ODIR 	 = bin/
SDIR 	 = cpp/

.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after
	@echo HDIR: $(HDIR)
	@echo ODIR: $(ODIR)
	@echo SDIR: $(SDIR)

clean: clean-custom
	${RM} $(CLEANOBJ) > NUL 2>&1

$(BIN): $(OBJ)
	$(CPP) $(LINKOBJ) -o $(BIN) $(LIBS)

main.o: $(SDIR)main.cpp $(HDIR)glutapp.h $(HDIR)dataprinter.h $(HDIR)model.h $(HDIR)resizer.h $(HDIR)data.h $(HDIR)printer.h $(HDIR)tracer.h $(HDIR)timer.h $(HDIR)menu.h $(HDIR)framecomputer.h $(HDIR)display.h $(HDIR)keyboard.h $(HDIR)object.h
	$(CPP) -c C:/kmazanek.gmail.com/Code/cpp-kinematics/$(SDIR)main.cpp -o $(ODIR)main.o $(CXXFLAGS) 

object.o: $(SDIR)object.cpp $(HDIR)object.h
	$(CPP) -c C:/kmazanek.gmail.com/Code/cpp-kinematics/$(SDIR)object.cpp -o $(ODIR)object.o $(CXXFLAGS) 

keyboard.o: $(SDIR)keyboard.cpp $(HDIR)keyboard.h
	$(CPP) -c C:/kmazanek.gmail.com/Code/cpp-kinematics/$(SDIR)keyboard.cpp -o $(ODIR)keyboard.o $(CXXFLAGS) 

resizer.o: $(SDIR)resizer.cpp $(HDIR)resizer.h
	$(CPP) -c C:/kmazanek.gmail.com/Code/cpp-kinematics/$(SDIR)resizer.cpp -o $(ODIR)resizer.o $(CXXFLAGS) 

display.o: $(SDIR)display.cpp $(HDIR)display.h $(HDIR)printer.h $(HDIR)dataprinter.h
	$(CPP) -c C:/kmazanek.gmail.com/Code/cpp-kinematics/$(SDIR)display.cpp -o $(ODIR)display.o $(CXXFLAGS) 

printer.o: $(SDIR)printer.cpp $(HDIR)printer.h
	$(CPP) -c C:/kmazanek.gmail.com/Code/cpp-kinematics/$(SDIR)printer.cpp -o $(ODIR)printer.o $(CXXFLAGS) 

timer.o: $(SDIR)timer.cpp $(HDIR)timer.h
	$(CPP) -c C:/kmazanek.gmail.com/Code/cpp-kinematics/$(SDIR)timer.cpp -o $(ODIR)timer.o $(CXXFLAGS) 

menu.o: $(SDIR)menu.cpp $(HDIR)menu.h
	$(CPP) -c C:/kmazanek.gmail.com/Code/cpp-kinematics/$(SDIR)menu.cpp -o $(ODIR)menu.o $(CXXFLAGS) 

data.o: $(SDIR)data.cpp $(HDIR)data.h $(HDIR)object.h
	$(CPP) -c C:/kmazanek.gmail.com/Code/cpp-kinematics/$(SDIR)data.cpp -o $(ODIR)data.o $(CXXFLAGS) 

dataprinter.o: $(SDIR)dataprinter.cpp $(HDIR)printer.h $(HDIR)dataprinter.h
	$(CPP) -c C:/kmazanek.gmail.com/Code/cpp-kinematics/$(SDIR)dataprinter.cpp -o $(ODIR)dataprinter.o $(CXXFLAGS) 

tracer.o: $(SDIR)tracer.cpp $(HDIR)data.h $(HDIR)tracer.h $(HDIR)object.h
	$(CPP) -c C:/kmazanek.gmail.com/Code/cpp-kinematics/$(SDIR)tracer.cpp -o $(ODIR)tracer.o $(CXXFLAGS) 

model.o: $(SDIR)model.cpp $(HDIR)dataprinter.h $(HDIR)model.h $(HDIR)resizer.h $(HDIR)data.h $(HDIR)printer.h $(HDIR)tracer.h $(HDIR)timer.h $(HDIR)menu.h $(HDIR)framecomputer.h $(HDIR)display.h $(HDIR)keyboard.h $(HDIR)object.h
	$(CPP) -c C:/kmazanek.gmail.com/Code/cpp-kinematics/$(SDIR)model.cpp -o $(ODIR)model.o $(CXXFLAGS) 

glutapp.o: $(SDIR)glutapp.cpp $(HDIR)glutapp.h $(HDIR)dataprinter.h $(HDIR)model.h $(HDIR)resizer.h $(HDIR)data.h $(HDIR)printer.h $(HDIR)tracer.h $(HDIR)timer.h $(HDIR)menu.h $(HDIR)framecomputer.h $(HDIR)display.h $(HDIR)keyboard.h $(HDIR)object.h
	$(CPP) -c C:/kmazanek.gmail.com/Code/cpp-kinematics/$(SDIR)glutapp.cpp -o $(ODIR)glutapp.o $(CXXFLAGS) 

framecomputer.o: $(SDIR)framecomputer.cpp $(HDIR)data.h $(HDIR)tracer.h $(HDIR)timer.h $(HDIR)framecomputer.h $(HDIR)object.h
	$(CPP) -c C:/kmazanek.gmail.com/Code/cpp-kinematics/$(SDIR)framecomputer.cpp -o $(ODIR)framecomputer.o $(CXXFLAGS) 

cpp-kinematics_private.res: cpp-kinematics_private.rc 
	$(WINDRES) -i cpp-kinematics_private.rc --input-format=rc -o cpp-kinematics_private.res -O coff