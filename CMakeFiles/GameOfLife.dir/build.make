# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cserv1_a/soc_ug/ed18src/Desktop/CStuff/ed18src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cserv1_a/soc_ug/ed18src/Desktop/CStuff/ed18src

# Include any dependencies generated for this target.
include CMakeFiles/GameOfLife.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GameOfLife.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GameOfLife.dir/flags.make

CMakeFiles/GameOfLife.dir/main.c.o: CMakeFiles/GameOfLife.dir/flags.make
CMakeFiles/GameOfLife.dir/main.c.o: main.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cserv1_a/soc_ug/ed18src/Desktop/CStuff/ed18src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/GameOfLife.dir/main.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/GameOfLife.dir/main.c.o   -c /home/cserv1_a/soc_ug/ed18src/Desktop/CStuff/ed18src/main.c

CMakeFiles/GameOfLife.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/GameOfLife.dir/main.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/cserv1_a/soc_ug/ed18src/Desktop/CStuff/ed18src/main.c > CMakeFiles/GameOfLife.dir/main.c.i

CMakeFiles/GameOfLife.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/GameOfLife.dir/main.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/cserv1_a/soc_ug/ed18src/Desktop/CStuff/ed18src/main.c -o CMakeFiles/GameOfLife.dir/main.c.s

CMakeFiles/GameOfLife.dir/main.c.o.requires:
.PHONY : CMakeFiles/GameOfLife.dir/main.c.o.requires

CMakeFiles/GameOfLife.dir/main.c.o.provides: CMakeFiles/GameOfLife.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/GameOfLife.dir/build.make CMakeFiles/GameOfLife.dir/main.c.o.provides.build
.PHONY : CMakeFiles/GameOfLife.dir/main.c.o.provides

CMakeFiles/GameOfLife.dir/main.c.o.provides.build: CMakeFiles/GameOfLife.dir/main.c.o

CMakeFiles/GameOfLife.dir/game.c.o: CMakeFiles/GameOfLife.dir/flags.make
CMakeFiles/GameOfLife.dir/game.c.o: game.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cserv1_a/soc_ug/ed18src/Desktop/CStuff/ed18src/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/GameOfLife.dir/game.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/GameOfLife.dir/game.c.o   -c /home/cserv1_a/soc_ug/ed18src/Desktop/CStuff/ed18src/game.c

CMakeFiles/GameOfLife.dir/game.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/GameOfLife.dir/game.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/cserv1_a/soc_ug/ed18src/Desktop/CStuff/ed18src/game.c > CMakeFiles/GameOfLife.dir/game.c.i

CMakeFiles/GameOfLife.dir/game.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/GameOfLife.dir/game.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/cserv1_a/soc_ug/ed18src/Desktop/CStuff/ed18src/game.c -o CMakeFiles/GameOfLife.dir/game.c.s

CMakeFiles/GameOfLife.dir/game.c.o.requires:
.PHONY : CMakeFiles/GameOfLife.dir/game.c.o.requires

CMakeFiles/GameOfLife.dir/game.c.o.provides: CMakeFiles/GameOfLife.dir/game.c.o.requires
	$(MAKE) -f CMakeFiles/GameOfLife.dir/build.make CMakeFiles/GameOfLife.dir/game.c.o.provides.build
.PHONY : CMakeFiles/GameOfLife.dir/game.c.o.provides

CMakeFiles/GameOfLife.dir/game.c.o.provides.build: CMakeFiles/GameOfLife.dir/game.c.o

CMakeFiles/GameOfLife.dir/display.c.o: CMakeFiles/GameOfLife.dir/flags.make
CMakeFiles/GameOfLife.dir/display.c.o: display.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cserv1_a/soc_ug/ed18src/Desktop/CStuff/ed18src/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/GameOfLife.dir/display.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/GameOfLife.dir/display.c.o   -c /home/cserv1_a/soc_ug/ed18src/Desktop/CStuff/ed18src/display.c

CMakeFiles/GameOfLife.dir/display.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/GameOfLife.dir/display.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/cserv1_a/soc_ug/ed18src/Desktop/CStuff/ed18src/display.c > CMakeFiles/GameOfLife.dir/display.c.i

CMakeFiles/GameOfLife.dir/display.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/GameOfLife.dir/display.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/cserv1_a/soc_ug/ed18src/Desktop/CStuff/ed18src/display.c -o CMakeFiles/GameOfLife.dir/display.c.s

CMakeFiles/GameOfLife.dir/display.c.o.requires:
.PHONY : CMakeFiles/GameOfLife.dir/display.c.o.requires

CMakeFiles/GameOfLife.dir/display.c.o.provides: CMakeFiles/GameOfLife.dir/display.c.o.requires
	$(MAKE) -f CMakeFiles/GameOfLife.dir/build.make CMakeFiles/GameOfLife.dir/display.c.o.provides.build
.PHONY : CMakeFiles/GameOfLife.dir/display.c.o.provides

CMakeFiles/GameOfLife.dir/display.c.o.provides.build: CMakeFiles/GameOfLife.dir/display.c.o

# Object files for target GameOfLife
GameOfLife_OBJECTS = \
"CMakeFiles/GameOfLife.dir/main.c.o" \
"CMakeFiles/GameOfLife.dir/game.c.o" \
"CMakeFiles/GameOfLife.dir/display.c.o"

# External object files for target GameOfLife
GameOfLife_EXTERNAL_OBJECTS =

GameOfLife: CMakeFiles/GameOfLife.dir/main.c.o
GameOfLife: CMakeFiles/GameOfLife.dir/game.c.o
GameOfLife: CMakeFiles/GameOfLife.dir/display.c.o
GameOfLife: CMakeFiles/GameOfLife.dir/build.make
GameOfLife: CMakeFiles/GameOfLife.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable GameOfLife"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GameOfLife.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GameOfLife.dir/build: GameOfLife
.PHONY : CMakeFiles/GameOfLife.dir/build

CMakeFiles/GameOfLife.dir/requires: CMakeFiles/GameOfLife.dir/main.c.o.requires
CMakeFiles/GameOfLife.dir/requires: CMakeFiles/GameOfLife.dir/game.c.o.requires
CMakeFiles/GameOfLife.dir/requires: CMakeFiles/GameOfLife.dir/display.c.o.requires
.PHONY : CMakeFiles/GameOfLife.dir/requires

CMakeFiles/GameOfLife.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GameOfLife.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GameOfLife.dir/clean

CMakeFiles/GameOfLife.dir/depend:
	cd /home/cserv1_a/soc_ug/ed18src/Desktop/CStuff/ed18src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cserv1_a/soc_ug/ed18src/Desktop/CStuff/ed18src /home/cserv1_a/soc_ug/ed18src/Desktop/CStuff/ed18src /home/cserv1_a/soc_ug/ed18src/Desktop/CStuff/ed18src /home/cserv1_a/soc_ug/ed18src/Desktop/CStuff/ed18src /home/cserv1_a/soc_ug/ed18src/Desktop/CStuff/ed18src/CMakeFiles/GameOfLife.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GameOfLife.dir/depend

