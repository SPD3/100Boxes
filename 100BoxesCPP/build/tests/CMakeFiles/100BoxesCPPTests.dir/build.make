# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.10.0/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.10.0/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/seandoyle/git/100Boxes/100BoxesCPP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/seandoyle/git/100Boxes/100BoxesCPP/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/100BoxesCPPTests.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/100BoxesCPPTests.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/100BoxesCPPTests.dir/flags.make

tests/CMakeFiles/100BoxesCPPTests.dir/ExampleTests.cpp.o: tests/CMakeFiles/100BoxesCPPTests.dir/flags.make
tests/CMakeFiles/100BoxesCPPTests.dir/ExampleTests.cpp.o: ../tests/ExampleTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/seandoyle/git/100Boxes/100BoxesCPP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/100BoxesCPPTests.dir/ExampleTests.cpp.o"
	cd /Users/seandoyle/git/100Boxes/100BoxesCPP/build/tests && /usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/100BoxesCPPTests.dir/ExampleTests.cpp.o -c /Users/seandoyle/git/100Boxes/100BoxesCPP/tests/ExampleTests.cpp

tests/CMakeFiles/100BoxesCPPTests.dir/ExampleTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/100BoxesCPPTests.dir/ExampleTests.cpp.i"
	cd /Users/seandoyle/git/100Boxes/100BoxesCPP/build/tests && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/seandoyle/git/100Boxes/100BoxesCPP/tests/ExampleTests.cpp > CMakeFiles/100BoxesCPPTests.dir/ExampleTests.cpp.i

tests/CMakeFiles/100BoxesCPPTests.dir/ExampleTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/100BoxesCPPTests.dir/ExampleTests.cpp.s"
	cd /Users/seandoyle/git/100Boxes/100BoxesCPP/build/tests && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/seandoyle/git/100Boxes/100BoxesCPP/tests/ExampleTests.cpp -o CMakeFiles/100BoxesCPPTests.dir/ExampleTests.cpp.s

tests/CMakeFiles/100BoxesCPPTests.dir/ExampleTests.cpp.o.requires:

.PHONY : tests/CMakeFiles/100BoxesCPPTests.dir/ExampleTests.cpp.o.requires

tests/CMakeFiles/100BoxesCPPTests.dir/ExampleTests.cpp.o.provides: tests/CMakeFiles/100BoxesCPPTests.dir/ExampleTests.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/100BoxesCPPTests.dir/build.make tests/CMakeFiles/100BoxesCPPTests.dir/ExampleTests.cpp.o.provides.build
.PHONY : tests/CMakeFiles/100BoxesCPPTests.dir/ExampleTests.cpp.o.provides

tests/CMakeFiles/100BoxesCPPTests.dir/ExampleTests.cpp.o.provides.build: tests/CMakeFiles/100BoxesCPPTests.dir/ExampleTests.cpp.o


# Object files for target 100BoxesCPPTests
100BoxesCPPTests_OBJECTS = \
"CMakeFiles/100BoxesCPPTests.dir/ExampleTests.cpp.o"

# External object files for target 100BoxesCPPTests
100BoxesCPPTests_EXTERNAL_OBJECTS =

tests/100BoxesCPPTests: tests/CMakeFiles/100BoxesCPPTests.dir/ExampleTests.cpp.o
tests/100BoxesCPPTests: tests/CMakeFiles/100BoxesCPPTests.dir/build.make
tests/100BoxesCPPTests: lib/libgtest_main.a
tests/100BoxesCPPTests: libLib.a
tests/100BoxesCPPTests: lib/libgtest.a
tests/100BoxesCPPTests: tests/CMakeFiles/100BoxesCPPTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/seandoyle/git/100Boxes/100BoxesCPP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 100BoxesCPPTests"
	cd /Users/seandoyle/git/100Boxes/100BoxesCPP/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/100BoxesCPPTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/100BoxesCPPTests.dir/build: tests/100BoxesCPPTests

.PHONY : tests/CMakeFiles/100BoxesCPPTests.dir/build

tests/CMakeFiles/100BoxesCPPTests.dir/requires: tests/CMakeFiles/100BoxesCPPTests.dir/ExampleTests.cpp.o.requires

.PHONY : tests/CMakeFiles/100BoxesCPPTests.dir/requires

tests/CMakeFiles/100BoxesCPPTests.dir/clean:
	cd /Users/seandoyle/git/100Boxes/100BoxesCPP/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/100BoxesCPPTests.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/100BoxesCPPTests.dir/clean

tests/CMakeFiles/100BoxesCPPTests.dir/depend:
	cd /Users/seandoyle/git/100Boxes/100BoxesCPP/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/seandoyle/git/100Boxes/100BoxesCPP /Users/seandoyle/git/100Boxes/100BoxesCPP/tests /Users/seandoyle/git/100Boxes/100BoxesCPP/build /Users/seandoyle/git/100Boxes/100BoxesCPP/build/tests /Users/seandoyle/git/100Boxes/100BoxesCPP/build/tests/CMakeFiles/100BoxesCPPTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/100BoxesCPPTests.dir/depend

