# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/x64/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/lucas/CLionProjects/Training

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/lucas/CLionProjects/Training/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Training_.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Training_.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Training_.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Training_.dir/flags.make

CMakeFiles/Training_.dir/main.c.o: CMakeFiles/Training_.dir/flags.make
CMakeFiles/Training_.dir/main.c.o: /Users/lucas/CLionProjects/Training/main.c
CMakeFiles/Training_.dir/main.c.o: CMakeFiles/Training_.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/lucas/CLionProjects/Training/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Training_.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Training_.dir/main.c.o -MF CMakeFiles/Training_.dir/main.c.o.d -o CMakeFiles/Training_.dir/main.c.o -c /Users/lucas/CLionProjects/Training/main.c

CMakeFiles/Training_.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/Training_.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/lucas/CLionProjects/Training/main.c > CMakeFiles/Training_.dir/main.c.i

CMakeFiles/Training_.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/Training_.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/lucas/CLionProjects/Training/main.c -o CMakeFiles/Training_.dir/main.c.s

CMakeFiles/Training_.dir/cell.c.o: CMakeFiles/Training_.dir/flags.make
CMakeFiles/Training_.dir/cell.c.o: /Users/lucas/CLionProjects/Training/cell.c
CMakeFiles/Training_.dir/cell.c.o: CMakeFiles/Training_.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/lucas/CLionProjects/Training/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Training_.dir/cell.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Training_.dir/cell.c.o -MF CMakeFiles/Training_.dir/cell.c.o.d -o CMakeFiles/Training_.dir/cell.c.o -c /Users/lucas/CLionProjects/Training/cell.c

CMakeFiles/Training_.dir/cell.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/Training_.dir/cell.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/lucas/CLionProjects/Training/cell.c > CMakeFiles/Training_.dir/cell.c.i

CMakeFiles/Training_.dir/cell.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/Training_.dir/cell.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/lucas/CLionProjects/Training/cell.c -o CMakeFiles/Training_.dir/cell.c.s

CMakeFiles/Training_.dir/node_.c.o: CMakeFiles/Training_.dir/flags.make
CMakeFiles/Training_.dir/node_.c.o: /Users/lucas/CLionProjects/Training/node\ .c
CMakeFiles/Training_.dir/node_.c.o: CMakeFiles/Training_.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/lucas/CLionProjects/Training/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Training_.dir/node_.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Training_.dir/node_.c.o -MF CMakeFiles/Training_.dir/node_.c.o.d -o CMakeFiles/Training_.dir/node_.c.o -c "/Users/lucas/CLionProjects/Training/node .c"

CMakeFiles/Training_.dir/node_.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/Training_.dir/node_.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/lucas/CLionProjects/Training/node .c" > CMakeFiles/Training_.dir/node_.c.i

CMakeFiles/Training_.dir/node_.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/Training_.dir/node_.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/lucas/CLionProjects/Training/node .c" -o CMakeFiles/Training_.dir/node_.c.s

CMakeFiles/Training_.dir/queue.c.o: CMakeFiles/Training_.dir/flags.make
CMakeFiles/Training_.dir/queue.c.o: /Users/lucas/CLionProjects/Training/queue.c
CMakeFiles/Training_.dir/queue.c.o: CMakeFiles/Training_.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/lucas/CLionProjects/Training/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/Training_.dir/queue.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Training_.dir/queue.c.o -MF CMakeFiles/Training_.dir/queue.c.o.d -o CMakeFiles/Training_.dir/queue.c.o -c /Users/lucas/CLionProjects/Training/queue.c

CMakeFiles/Training_.dir/queue.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/Training_.dir/queue.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/lucas/CLionProjects/Training/queue.c > CMakeFiles/Training_.dir/queue.c.i

CMakeFiles/Training_.dir/queue.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/Training_.dir/queue.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/lucas/CLionProjects/Training/queue.c -o CMakeFiles/Training_.dir/queue.c.s

CMakeFiles/Training_.dir/list.c.o: CMakeFiles/Training_.dir/flags.make
CMakeFiles/Training_.dir/list.c.o: /Users/lucas/CLionProjects/Training/list.c
CMakeFiles/Training_.dir/list.c.o: CMakeFiles/Training_.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/lucas/CLionProjects/Training/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/Training_.dir/list.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Training_.dir/list.c.o -MF CMakeFiles/Training_.dir/list.c.o.d -o CMakeFiles/Training_.dir/list.c.o -c /Users/lucas/CLionProjects/Training/list.c

CMakeFiles/Training_.dir/list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/Training_.dir/list.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/lucas/CLionProjects/Training/list.c > CMakeFiles/Training_.dir/list.c.i

CMakeFiles/Training_.dir/list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/Training_.dir/list.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/lucas/CLionProjects/Training/list.c -o CMakeFiles/Training_.dir/list.c.s

# Object files for target Training_
Training__OBJECTS = \
"CMakeFiles/Training_.dir/main.c.o" \
"CMakeFiles/Training_.dir/cell.c.o" \
"CMakeFiles/Training_.dir/node_.c.o" \
"CMakeFiles/Training_.dir/queue.c.o" \
"CMakeFiles/Training_.dir/list.c.o"

# External object files for target Training_
Training__EXTERNAL_OBJECTS =

Training_: CMakeFiles/Training_.dir/main.c.o
Training_: CMakeFiles/Training_.dir/cell.c.o
Training_: CMakeFiles/Training_.dir/node_.c.o
Training_: CMakeFiles/Training_.dir/queue.c.o
Training_: CMakeFiles/Training_.dir/list.c.o
Training_: CMakeFiles/Training_.dir/build.make
Training_: CMakeFiles/Training_.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/lucas/CLionProjects/Training/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable Training_"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Training_.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Training_.dir/build: Training_
.PHONY : CMakeFiles/Training_.dir/build

CMakeFiles/Training_.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Training_.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Training_.dir/clean

CMakeFiles/Training_.dir/depend:
	cd /Users/lucas/CLionProjects/Training/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/lucas/CLionProjects/Training /Users/lucas/CLionProjects/Training /Users/lucas/CLionProjects/Training/cmake-build-debug /Users/lucas/CLionProjects/Training/cmake-build-debug /Users/lucas/CLionProjects/Training/cmake-build-debug/CMakeFiles/Training_.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Training_.dir/depend
