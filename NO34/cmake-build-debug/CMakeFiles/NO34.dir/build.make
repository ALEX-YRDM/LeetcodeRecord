# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /home/alex/Public/Clion/clion-2022.1.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/alex/Public/Clion/clion-2022.1.2/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /media/alex/Study/Clion_practice/Lcode/NO34

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/alex/Study/Clion_practice/Lcode/NO34/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/NO34.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/NO34.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/NO34.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/NO34.dir/flags.make

CMakeFiles/NO34.dir/main.cpp.o: CMakeFiles/NO34.dir/flags.make
CMakeFiles/NO34.dir/main.cpp.o: ../main.cpp
CMakeFiles/NO34.dir/main.cpp.o: CMakeFiles/NO34.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/alex/Study/Clion_practice/Lcode/NO34/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/NO34.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/NO34.dir/main.cpp.o -MF CMakeFiles/NO34.dir/main.cpp.o.d -o CMakeFiles/NO34.dir/main.cpp.o -c /media/alex/Study/Clion_practice/Lcode/NO34/main.cpp

CMakeFiles/NO34.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NO34.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/alex/Study/Clion_practice/Lcode/NO34/main.cpp > CMakeFiles/NO34.dir/main.cpp.i

CMakeFiles/NO34.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NO34.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/alex/Study/Clion_practice/Lcode/NO34/main.cpp -o CMakeFiles/NO34.dir/main.cpp.s

# Object files for target NO34
NO34_OBJECTS = \
"CMakeFiles/NO34.dir/main.cpp.o"

# External object files for target NO34
NO34_EXTERNAL_OBJECTS =

NO34: CMakeFiles/NO34.dir/main.cpp.o
NO34: CMakeFiles/NO34.dir/build.make
NO34: CMakeFiles/NO34.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/alex/Study/Clion_practice/Lcode/NO34/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable NO34"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/NO34.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/NO34.dir/build: NO34
.PHONY : CMakeFiles/NO34.dir/build

CMakeFiles/NO34.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/NO34.dir/cmake_clean.cmake
.PHONY : CMakeFiles/NO34.dir/clean

CMakeFiles/NO34.dir/depend:
	cd /media/alex/Study/Clion_practice/Lcode/NO34/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/alex/Study/Clion_practice/Lcode/NO34 /media/alex/Study/Clion_practice/Lcode/NO34 /media/alex/Study/Clion_practice/Lcode/NO34/cmake-build-debug /media/alex/Study/Clion_practice/Lcode/NO34/cmake-build-debug /media/alex/Study/Clion_practice/Lcode/NO34/cmake-build-debug/CMakeFiles/NO34.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/NO34.dir/depend
