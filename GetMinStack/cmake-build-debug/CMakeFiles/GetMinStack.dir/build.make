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
CMAKE_SOURCE_DIR = /cygdrive/c/github/AlgorithmsRepo/GetMinStack

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/github/AlgorithmsRepo/GetMinStack/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/GetMinStack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GetMinStack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GetMinStack.dir/flags.make

CMakeFiles/GetMinStack.dir/main.cpp.o: CMakeFiles/GetMinStack.dir/flags.make
CMakeFiles/GetMinStack.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/github/AlgorithmsRepo/GetMinStack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GetMinStack.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GetMinStack.dir/main.cpp.o -c /cygdrive/c/github/AlgorithmsRepo/GetMinStack/main.cpp

CMakeFiles/GetMinStack.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GetMinStack.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/github/AlgorithmsRepo/GetMinStack/main.cpp > CMakeFiles/GetMinStack.dir/main.cpp.i

CMakeFiles/GetMinStack.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GetMinStack.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/github/AlgorithmsRepo/GetMinStack/main.cpp -o CMakeFiles/GetMinStack.dir/main.cpp.s

# Object files for target GetMinStack
GetMinStack_OBJECTS = \
"CMakeFiles/GetMinStack.dir/main.cpp.o"

# External object files for target GetMinStack
GetMinStack_EXTERNAL_OBJECTS =

GetMinStack.exe: CMakeFiles/GetMinStack.dir/main.cpp.o
GetMinStack.exe: CMakeFiles/GetMinStack.dir/build.make
GetMinStack.exe: CMakeFiles/GetMinStack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/github/AlgorithmsRepo/GetMinStack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable GetMinStack.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GetMinStack.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GetMinStack.dir/build: GetMinStack.exe

.PHONY : CMakeFiles/GetMinStack.dir/build

CMakeFiles/GetMinStack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GetMinStack.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GetMinStack.dir/clean

CMakeFiles/GetMinStack.dir/depend:
	cd /cygdrive/c/github/AlgorithmsRepo/GetMinStack/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/github/AlgorithmsRepo/GetMinStack /cygdrive/c/github/AlgorithmsRepo/GetMinStack /cygdrive/c/github/AlgorithmsRepo/GetMinStack/cmake-build-debug /cygdrive/c/github/AlgorithmsRepo/GetMinStack/cmake-build-debug /cygdrive/c/github/AlgorithmsRepo/GetMinStack/cmake-build-debug/CMakeFiles/GetMinStack.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GetMinStack.dir/depend

