# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\gitHub\AlgorithmsRepo\Count Inversions"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\gitHub\AlgorithmsRepo\Count Inversions\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Count_Inversions.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Count_Inversions.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Count_Inversions.dir/flags.make

CMakeFiles/Count_Inversions.dir/main.cpp.obj: CMakeFiles/Count_Inversions.dir/flags.make
CMakeFiles/Count_Inversions.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\gitHub\AlgorithmsRepo\Count Inversions\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Count_Inversions.dir/main.cpp.obj"
	C:\mingw-w64\i686-7.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Count_Inversions.dir\main.cpp.obj -c "D:\gitHub\AlgorithmsRepo\Count Inversions\main.cpp"

CMakeFiles/Count_Inversions.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Count_Inversions.dir/main.cpp.i"
	C:\mingw-w64\i686-7.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\gitHub\AlgorithmsRepo\Count Inversions\main.cpp" > CMakeFiles\Count_Inversions.dir\main.cpp.i

CMakeFiles/Count_Inversions.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Count_Inversions.dir/main.cpp.s"
	C:\mingw-w64\i686-7.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\gitHub\AlgorithmsRepo\Count Inversions\main.cpp" -o CMakeFiles\Count_Inversions.dir\main.cpp.s

# Object files for target Count_Inversions
Count_Inversions_OBJECTS = \
"CMakeFiles/Count_Inversions.dir/main.cpp.obj"

# External object files for target Count_Inversions
Count_Inversions_EXTERNAL_OBJECTS =

Count_Inversions.exe: CMakeFiles/Count_Inversions.dir/main.cpp.obj
Count_Inversions.exe: CMakeFiles/Count_Inversions.dir/build.make
Count_Inversions.exe: CMakeFiles/Count_Inversions.dir/linklibs.rsp
Count_Inversions.exe: CMakeFiles/Count_Inversions.dir/objects1.rsp
Count_Inversions.exe: CMakeFiles/Count_Inversions.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\gitHub\AlgorithmsRepo\Count Inversions\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Count_Inversions.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Count_Inversions.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Count_Inversions.dir/build: Count_Inversions.exe

.PHONY : CMakeFiles/Count_Inversions.dir/build

CMakeFiles/Count_Inversions.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Count_Inversions.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Count_Inversions.dir/clean

CMakeFiles/Count_Inversions.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\gitHub\AlgorithmsRepo\Count Inversions" "D:\gitHub\AlgorithmsRepo\Count Inversions" "D:\gitHub\AlgorithmsRepo\Count Inversions\cmake-build-debug" "D:\gitHub\AlgorithmsRepo\Count Inversions\cmake-build-debug" "D:\gitHub\AlgorithmsRepo\Count Inversions\cmake-build-debug\CMakeFiles\Count_Inversions.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Count_Inversions.dir/depend

