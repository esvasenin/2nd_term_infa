# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/esvasenin/github/2nd_term_infa/contest_2/I

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/esvasenin/github/2nd_term_infa/contest_2/I/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/I.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/I.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/I.dir/flags.make

CMakeFiles/I.dir/main.cpp.o: CMakeFiles/I.dir/flags.make
CMakeFiles/I.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/esvasenin/github/2nd_term_infa/contest_2/I/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/I.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/I.dir/main.cpp.o -c /Users/esvasenin/github/2nd_term_infa/contest_2/I/main.cpp

CMakeFiles/I.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/I.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/esvasenin/github/2nd_term_infa/contest_2/I/main.cpp > CMakeFiles/I.dir/main.cpp.i

CMakeFiles/I.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/I.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/esvasenin/github/2nd_term_infa/contest_2/I/main.cpp -o CMakeFiles/I.dir/main.cpp.s

# Object files for target I
I_OBJECTS = \
"CMakeFiles/I.dir/main.cpp.o"

# External object files for target I
I_EXTERNAL_OBJECTS =

I : CMakeFiles/I.dir/main.cpp.o
I : CMakeFiles/I.dir/build.make
I : CMakeFiles/I.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/esvasenin/github/2nd_term_infa/contest_2/I/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable I"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/I.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/I.dir/build: I

.PHONY : CMakeFiles/I.dir/build

CMakeFiles/I.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/I.dir/cmake_clean.cmake
.PHONY : CMakeFiles/I.dir/clean

CMakeFiles/I.dir/depend:
	cd /Users/esvasenin/github/2nd_term_infa/contest_2/I/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/esvasenin/github/2nd_term_infa/contest_2/I /Users/esvasenin/github/2nd_term_infa/contest_2/I /Users/esvasenin/github/2nd_term_infa/contest_2/I/cmake-build-debug /Users/esvasenin/github/2nd_term_infa/contest_2/I/cmake-build-debug /Users/esvasenin/github/2nd_term_infa/contest_2/I/cmake-build-debug/CMakeFiles/I.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/I.dir/depend

