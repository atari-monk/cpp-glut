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

main.o: $(SDIR)main.cpp glutapp.h dataprinter.h model.h $(HDIR)resizer.h data.h $(HDIR)printer.h tracer.h $(HDIR)timer.h menu.h framecomputer.h $(HDIR)display.h $(HDIR)keyboard.h $(HDIR)object.h
	$(CPP) -c C:/kmazanek.gmail.com/Code/cpp-kinematics/$(SDIR)main.cpp -o $(ODIR)main.o $(CXXFLAGS) 

object.o: $(SDIR)object.cpp $(HDIR)object.h
	$(CPP) -c C:/kmazanek.gmail.com/Code/cpp-kinematics/$(SDIR)object.cpp -o $(ODIR)object.o $(CXXFLAGS) 

keyboard.o: $(SDIR)keyboard.cpp $(HDIR)keyboard.h
	$(CPP) -c C:/kmazanek.gmail.com/Code/cpp-kinematics/$(SDIR)keyboard.cpp -o $(ODIR)keyboard.o $(CXXFLAGS) 

resizer.o: $(SDIR)resizer.cpp $(HDIR)resizer.h
	$(CPP) -c C:/kmazanek.gmail.com/Code/cpp-kinematics/$(SDIR)resizer.cpp -o $(ODIR)resizer.o $(CXXFLAGS) 

display.o: $(SDIR)display.cpp $(HDIR)display.h $(HDIR)printer.h dataprinter.h
	$(CPP) -c C:/kmazanek.gmail.com/Code/cpp-kinematics/$(SDIR)display.cpp -o $(ODIR)display.o $(CXXFLAGS) 

printer.o: $(SDIR)printer.cpp $(HDIR)printer.h
	$(CPP) -c C:/kmazanek.gmail.com/Code/cpp-kinematics/$(SDIR)printer.cpp -o $(ODIR)printer.o $(CXXFLAGS) 

timer.o: $(SDIR)timer.cpp $(HDIR)timer.h
	$(CPP) -c C:/kmazanek.gmail.com/Code/cpp-kinematics/$(SDIR)timer.cpp -o $(ODIR)timer.o $(CXXFLAGS) 

menu.o: menu.cpp menu.h
	$(CPP) -c C:/kmazanek.gmail.com/Code/cpp-kinematics/menu.cpp -o menu.o $(CXXFLAGS) 

data.o: data.cpp data.h $(HDIR)object.h
	$(CPP) -c C:/kmazanek.gmail.com/Code/cpp-kinematics/data.cpp -o data.o $(CXXFLAGS) 

dataprinter.o: dataprinter.cpp $(HDIR)printer.h dataprinter.h
	$(CPP) -c C:/kmazanek.gmail.com/Code/cpp-kinematics/dataprinter.cpp -o dataprinter.o $(CXXFLAGS) 

tracer.o: tracer.cpp data.h tracer.h $(HDIR)object.h
	$(CPP) -c C:/kmazanek.gmail.com/Code/cpp-kinematics/tracer.cpp -o tracer.o $(CXXFLAGS) 

model.o: model.cpp dataprinter.h model.h $(HDIR)resizer.h data.h $(HDIR)printer.h tracer.h $(HDIR)timer.h menu.h framecomputer.h $(HDIR)display.h $(HDIR)keyboard.h $(HDIR)object.h
	$(CPP) -c C:/kmazanek.gmail.com/Code/cpp-kinematics/model.cpp -o model.o $(CXXFLAGS) 

glutapp.o: glutapp.cpp glutapp.h dataprinter.h model.h $(HDIR)resizer.h data.h $(HDIR)printer.h tracer.h $(HDIR)timer.h menu.h framecomputer.h $(HDIR)display.h $(HDIR)keyboard.h $(HDIR)object.h
	$(CPP) -c C:/kmazanek.gmail.com/Code/cpp-kinematics/glutapp.cpp -o glutapp.o $(CXXFLAGS) 

framecomputer.o: framecomputer.cpp data.h tracer.h $(HDIR)timer.h framecomputer.h $(HDIR)object.h
	$(CPP) -c C:/kmazanek.gmail.com/Code/cpp-kinematics/framecomputer.cpp -o framecomputer.o $(CXXFLAGS) 

cpp-kinematics_private.res: cpp-kinematics_private.rc 
	$(WINDRES) -i cpp-kinematics_private.rc --input-format=rc -o cpp-kinematics_private.res -O coff 

