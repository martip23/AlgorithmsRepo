# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /cygdrive/c/Users/Patrick/.CLion2018.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Patrick/.CLion2018.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/github/AlgorithmsRepo/MidElementStack

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/github/AlgorithmsRepo/MidElementStack/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MidElementStack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MidElementStack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MidElementStack.dir/flags.make

CMakeFiles/MidElementStack.dir/main.cpp.o: CMakeFiles/MidElementStack.dir/flags.make
CMakeFiles/MidElementStack.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/github/AlgorithmsRepo/MidElementStack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MidElementStack.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MidElementStack.dir/main.cpp.o -c /cygdrive/c/github/AlgorithmsRepo/MidElementStack/main.cpp

CMakeFiles/MidElementStack.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MidElementStack.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/github/AlgorithmsRepo/MidElementStack/main.cpp > CMakeFiles/MidElementStack.dir/main.cpp.i

CMakeFiles/MidElementStack.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MidElementStack.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/github/AlgorithmsRepo/MidElementStack/main.cpp -o CMakeFiles/MidElementStack.dir/main.cpp.s

# Object files for target MidElementStack
MidElementStack_OBJECTS = \
"CMakeFiles/MidElementStack.dir/main.cpp.o"

# External object files for target MidElementStack
MidElementStack_EXTERNAL_OBJECTS =

MidElementStack.exe: CMakeFiles/MidElementStack.dir/main.cpp.o
MidElementStack.exe: CMakeFiles/MidElementStack.dir/build.make
MidElementStack.exe: CMakeFiles/MidElementStack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/github/AlgorithmsRepo/MidElementStack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MidElementStack.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MidElementStack.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MidElementStack.dir/build: MidElementStack.exe

.PHONY : CMakeFiles/MidElementStack.dir/build

CMakeFiles/MidElementStack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MidElementStack.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MidElementStack.dir/clean

CMakeFiles/MidElementStack.dir/depend:
	cd /cygdrive/c/github/AlgorithmsRepo/MidElementStack/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/github/AlgorithmsRepo/MidElementStack /cygdrive/c/github/AlgorithmsRepo/MidElementStack /cygdrive/c/github/AlgorithmsRepo/MidElementStack/cmake-build-debug /cygdrive/c/github/AlgorithmsRepo/MidElementStack/cmake-build-debug /cygdrive/c/github/AlgorithmsRepo/MidElementStack/cmake-build-debug/CMakeFiles/MidElementStack.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MidElementStack.dir/depend

