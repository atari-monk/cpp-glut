# Project: cpp-kinematics
# Makefile originally created by Red Panda C++ 1.1.5
# edited by atari-monk

CPP      = g++.exe
CC       = gcc.exe
WINDRES  = windres.exe
OBJ      = $(ODIR)main.o $(ODIR)object.o $(ODIR)keyboard.o $(ODIR)resizer.o $(ODIR)display.o $(ODIR)printer.o $(ODIR)timer.o $(ODIR)menu.o $(ODIR)data.o $(ODIR)dataprinter.o $(ODIR)tracer.o $(ODIR)model.o $(ODIR)glutapp.o $(ODIR)framecomputer.o
LINKOBJ  = $(ODIR)main.o $(ODIR)object.o $(ODIR)keyboard.o $(ODIR)resizer.o $(ODIR)display.o $(ODIR)printer.o $(ODIR)timer.o $(ODIR)menu.o $(ODIR)data.o $(ODIR)dataprinter.o $(ODIR)tracer.o $(ODIR)model.o $(ODIR)glutapp.o $(ODIR)framecomputer.o
CLEANOBJ  =  $(ODIR)main.o $(ODIR)object.o $(ODIR)keyboard.o $(ODIR)resizer.o $(ODIR)display.o $(ODIR)printer.o $(ODIR)timer.o $(ODIR)menu.o $(ODIR)data.o $(ODIR)dataprinter.o $(ODIR)tracer.o $(ODIR)model.o $(ODIR)glutapp.o $(ODIR)framecomputer.o $(BIN)
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
PDIR 	 = C:/atari-monk/Code/cpp-kinematics/

.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after
	@echo HDIR: $(HDIR)
	@echo ODIR: $(ODIR)
	@echo SDIR: $(SDIR)
	@echo PDIR: $(PDIR)

clean: clean-custom
	${RM} $(CLEANOBJ) > NUL 2>&1

$(BIN): $(OBJ)
	$(CPP) $(LINKOBJ) -o $(BIN) $(LIBS)

$(ODIR)main.o: $(SDIR)main.cpp $(HDIR)glutapp.h $(HDIR)dataprinter.h $(HDIR)model.h $(HDIR)resizer.h $(HDIR)data.h $(HDIR)printer.h $(HDIR)tracer.h $(HDIR)timer.h $(HDIR)menu.h $(HDIR)framecomputer.h $(HDIR)display.h $(HDIR)keyboard.h $(HDIR)object.h
	$(CPP) -c $(PDIR)$(SDIR)main.cpp -o $(ODIR)main.o $(CXXFLAGS) 

$(ODIR)object.o: $(SDIR)object.cpp $(HDIR)object.h
	$(CPP) -c $(PDIR)$(SDIR)object.cpp -o $(ODIR)object.o $(CXXFLAGS) 

$(ODIR)keyboard.o: $(SDIR)keyboard.cpp $(HDIR)keyboard.h
	$(CPP) -c $(PDIR)$(SDIR)keyboard.cpp -o $(ODIR)keyboard.o $(CXXFLAGS) 

$(ODIR)resizer.o: $(SDIR)resizer.cpp $(HDIR)resizer.h
	$(CPP) -c $(PDIR)$(SDIR)resizer.cpp -o $(ODIR)resizer.o $(CXXFLAGS) 

$(ODIR)display.o: $(SDIR)display.cpp $(HDIR)display.h $(HDIR)printer.h $(HDIR)dataprinter.h
	$(CPP) -c $(PDIR)$(SDIR)display.cpp -o $(ODIR)display.o $(CXXFLAGS) 

$(ODIR)printer.o: $(SDIR)printer.cpp $(HDIR)printer.h
	$(CPP) -c $(PDIR)$(SDIR)printer.cpp -o $(ODIR)printer.o $(CXXFLAGS) 

$(ODIR)timer.o: $(SDIR)timer.cpp $(HDIR)timer.h
	$(CPP) -c $(PDIR)$(SDIR)timer.cpp -o $(ODIR)timer.o $(CXXFLAGS) 

$(ODIR)menu.o: $(SDIR)menu.cpp $(HDIR)menu.h
	$(CPP) -c $(PDIR)$(SDIR)menu.cpp -o $(ODIR)menu.o $(CXXFLAGS) 

$(ODIR)data.o: $(SDIR)data.cpp $(HDIR)data.h $(HDIR)object.h
	$(CPP) -c $(PDIR)$(SDIR)data.cpp -o $(ODIR)data.o $(CXXFLAGS) 

$(ODIR)dataprinter.o: $(SDIR)dataprinter.cpp $(HDIR)printer.h $(HDIR)dataprinter.h
	$(CPP) -c $(PDIR)$(SDIR)dataprinter.cpp -o $(ODIR)dataprinter.o $(CXXFLAGS) 

$(ODIR)tracer.o: $(SDIR)tracer.cpp $(HDIR)data.h $(HDIR)tracer.h $(HDIR)object.h
	$(CPP) -c $(PDIR)$(SDIR)tracer.cpp -o $(ODIR)tracer.o $(CXXFLAGS) 

$(ODIR)model.o: $(SDIR)model.cpp $(HDIR)dataprinter.h $(HDIR)model.h $(HDIR)resizer.h $(HDIR)data.h $(HDIR)printer.h $(HDIR)tracer.h $(HDIR)timer.h $(HDIR)menu.h $(HDIR)framecomputer.h $(HDIR)display.h $(HDIR)keyboard.h $(HDIR)object.h
	$(CPP) -c $(PDIR)$(SDIR)model.cpp -o $(ODIR)model.o $(CXXFLAGS) 

$(ODIR)glutapp.o: $(SDIR)glutapp.cpp $(HDIR)glutapp.h $(HDIR)dataprinter.h $(HDIR)model.h $(HDIR)resizer.h $(HDIR)data.h $(HDIR)printer.h $(HDIR)tracer.h $(HDIR)timer.h $(HDIR)menu.h $(HDIR)framecomputer.h $(HDIR)display.h $(HDIR)keyboard.h $(HDIR)object.h
	$(CPP) -c $(PDIR)$(SDIR)glutapp.cpp -o $(ODIR)glutapp.o $(CXXFLAGS) 

$(ODIR)framecomputer.o: $(SDIR)framecomputer.cpp $(HDIR)data.h $(HDIR)tracer.h $(HDIR)timer.h $(HDIR)framecomputer.h $(HDIR)object.h
	$(CPP) -c $(PDIR)$(SDIR)framecomputer.cpp -o $(ODIR)framecomputer.o $(CXXFLAGS)