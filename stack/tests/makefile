SOURCES := $(wildcard ./*.cpp)
OBJECTS := $(patsubst ./%.cpp, ./%.o, $(SOURCES))
DEPENDS := $(patsubst ./%.cpp, ./%.dep, $(SOURCES))
DEPENDS +=  ./node.dep ./stack.dep
LIBS := ./node.o  ./stack.o
INCLUDES := -I./../src

./test : $(OBJECTS) $(LIBS)
	@g++ $^ -o $@
	   
./%.o : ./%.cpp 
	@g++  -c $< $(INCLUDES) -o $@

./%.o : ./../src/%.cpp
	@g++ -c $< $(INCLUDES) -o $@

./%.dep : ./%.cpp
	@g++ -MM $< -MT "$@ $(subst %.dep, %.o, $@)" -o $@ $(INCLUDES)

./%.dep : ./../src/%.cpp
	 @g++ -MM $< -MT "$@ $(subst %.dep, %.o, $@)" -o $@ $(INCLUDES)


-include $(DEPENDS)

.PHONY : clean
clean :
	@echo "cleaning..."
	@rm *.o *.dep test
