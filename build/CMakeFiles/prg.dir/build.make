# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/admin123/sem1/c_sem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/admin123/sem1/c_sem/build

# Include any dependencies generated for this target.
include CMakeFiles/prg.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/prg.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/prg.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/prg.dir/flags.make

CMakeFiles/prg.dir/main.c.o: CMakeFiles/prg.dir/flags.make
CMakeFiles/prg.dir/main.c.o: /home/admin123/sem1/c_sem/main.c
CMakeFiles/prg.dir/main.c.o: CMakeFiles/prg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/admin123/sem1/c_sem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/prg.dir/main.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/prg.dir/main.c.o -MF CMakeFiles/prg.dir/main.c.o.d -o CMakeFiles/prg.dir/main.c.o -c /home/admin123/sem1/c_sem/main.c

CMakeFiles/prg.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/prg.dir/main.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/admin123/sem1/c_sem/main.c > CMakeFiles/prg.dir/main.c.i

CMakeFiles/prg.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/prg.dir/main.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/admin123/sem1/c_sem/main.c -o CMakeFiles/prg.dir/main.c.s

CMakeFiles/prg.dir/list.c.o: CMakeFiles/prg.dir/flags.make
CMakeFiles/prg.dir/list.c.o: /home/admin123/sem1/c_sem/list.c
CMakeFiles/prg.dir/list.c.o: CMakeFiles/prg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/admin123/sem1/c_sem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/prg.dir/list.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/prg.dir/list.c.o -MF CMakeFiles/prg.dir/list.c.o.d -o CMakeFiles/prg.dir/list.c.o -c /home/admin123/sem1/c_sem/list.c

CMakeFiles/prg.dir/list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/prg.dir/list.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/admin123/sem1/c_sem/list.c > CMakeFiles/prg.dir/list.c.i

CMakeFiles/prg.dir/list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/prg.dir/list.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/admin123/sem1/c_sem/list.c -o CMakeFiles/prg.dir/list.c.s

CMakeFiles/prg.dir/matrix.c.o: CMakeFiles/prg.dir/flags.make
CMakeFiles/prg.dir/matrix.c.o: /home/admin123/sem1/c_sem/matrix.c
CMakeFiles/prg.dir/matrix.c.o: CMakeFiles/prg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/admin123/sem1/c_sem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/prg.dir/matrix.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/prg.dir/matrix.c.o -MF CMakeFiles/prg.dir/matrix.c.o.d -o CMakeFiles/prg.dir/matrix.c.o -c /home/admin123/sem1/c_sem/matrix.c

CMakeFiles/prg.dir/matrix.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/prg.dir/matrix.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/admin123/sem1/c_sem/matrix.c > CMakeFiles/prg.dir/matrix.c.i

CMakeFiles/prg.dir/matrix.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/prg.dir/matrix.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/admin123/sem1/c_sem/matrix.c -o CMakeFiles/prg.dir/matrix.c.s

CMakeFiles/prg.dir/parser.c.o: CMakeFiles/prg.dir/flags.make
CMakeFiles/prg.dir/parser.c.o: /home/admin123/sem1/c_sem/parser.c
CMakeFiles/prg.dir/parser.c.o: CMakeFiles/prg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/admin123/sem1/c_sem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/prg.dir/parser.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/prg.dir/parser.c.o -MF CMakeFiles/prg.dir/parser.c.o.d -o CMakeFiles/prg.dir/parser.c.o -c /home/admin123/sem1/c_sem/parser.c

CMakeFiles/prg.dir/parser.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/prg.dir/parser.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/admin123/sem1/c_sem/parser.c > CMakeFiles/prg.dir/parser.c.i

CMakeFiles/prg.dir/parser.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/prg.dir/parser.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/admin123/sem1/c_sem/parser.c -o CMakeFiles/prg.dir/parser.c.s

CMakeFiles/prg.dir/stack.c.o: CMakeFiles/prg.dir/flags.make
CMakeFiles/prg.dir/stack.c.o: /home/admin123/sem1/c_sem/stack.c
CMakeFiles/prg.dir/stack.c.o: CMakeFiles/prg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/admin123/sem1/c_sem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/prg.dir/stack.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/prg.dir/stack.c.o -MF CMakeFiles/prg.dir/stack.c.o.d -o CMakeFiles/prg.dir/stack.c.o -c /home/admin123/sem1/c_sem/stack.c

CMakeFiles/prg.dir/stack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/prg.dir/stack.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/admin123/sem1/c_sem/stack.c > CMakeFiles/prg.dir/stack.c.i

CMakeFiles/prg.dir/stack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/prg.dir/stack.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/admin123/sem1/c_sem/stack.c -o CMakeFiles/prg.dir/stack.c.s

# Object files for target prg
prg_OBJECTS = \
"CMakeFiles/prg.dir/main.c.o" \
"CMakeFiles/prg.dir/list.c.o" \
"CMakeFiles/prg.dir/matrix.c.o" \
"CMakeFiles/prg.dir/parser.c.o" \
"CMakeFiles/prg.dir/stack.c.o"

# External object files for target prg
prg_EXTERNAL_OBJECTS =

prg: CMakeFiles/prg.dir/main.c.o
prg: CMakeFiles/prg.dir/list.c.o
prg: CMakeFiles/prg.dir/matrix.c.o
prg: CMakeFiles/prg.dir/parser.c.o
prg: CMakeFiles/prg.dir/stack.c.o
prg: CMakeFiles/prg.dir/build.make
prg: CMakeFiles/prg.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/admin123/sem1/c_sem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable prg"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/prg.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/prg.dir/build: prg
.PHONY : CMakeFiles/prg.dir/build

CMakeFiles/prg.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/prg.dir/cmake_clean.cmake
.PHONY : CMakeFiles/prg.dir/clean

CMakeFiles/prg.dir/depend:
	cd /home/admin123/sem1/c_sem/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/admin123/sem1/c_sem /home/admin123/sem1/c_sem /home/admin123/sem1/c_sem/build /home/admin123/sem1/c_sem/build /home/admin123/sem1/c_sem/build/CMakeFiles/prg.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/prg.dir/depend

