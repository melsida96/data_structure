SOURCES := $(wildcard src/*.cpp)
OBJECTS := $(patsubst src/%.cpp, obj/%.o, $(SOURCES))
DEPENDS := $(patsubst src/%.cpp, deps/%.dep, $(SOURCES))
TARGET  := $(addprefix bin/, run)

$(TARGET) : $(OBJECTS)
	@mkdir -p ./bin
	@g++  $^ -o $@ 

obj/%.o : src/%.cpp
	@mkdir -p ./obj
	@g++ -c $< -I./src -o $@

deps/%.dep : src/%.cpp
	@mkdir -p ./deps
	@g++ -MM $< -MT "$@ $(patsubst deps/%.dep, obj/%.o, $@)" -o $@ -I./src

-include $(DEPENDS)

.PHONY: clean
clean :
	@echo "cleaning..."
	@rm -rf obj bin deps
.PHONY: run
run : $(TARGET)
	@./bin/run
