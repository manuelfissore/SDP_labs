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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/manuelfissore/Documents/Politecnico/Magistrale/I/s2/SDP/SDP_labs/lab3/es2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/manuelfissore/Documents/Politecnico/Magistrale/I/s2/SDP/SDP_labs/lab3/es2/cmake-build-release

# Include any dependencies generated for this target.
include CMakeFiles/es2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/es2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/es2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/es2.dir/flags.make

CMakeFiles/es2.dir/main.cpp.o: CMakeFiles/es2.dir/flags.make
CMakeFiles/es2.dir/main.cpp.o: /Users/manuelfissore/Documents/Politecnico/Magistrale/I/s2/SDP/SDP_labs/lab3/es2/main.cpp
CMakeFiles/es2.dir/main.cpp.o: CMakeFiles/es2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/manuelfissore/Documents/Politecnico/Magistrale/I/s2/SDP/SDP_labs/lab3/es2/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/es2.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/es2.dir/main.cpp.o -MF CMakeFiles/es2.dir/main.cpp.o.d -o CMakeFiles/es2.dir/main.cpp.o -c /Users/manuelfissore/Documents/Politecnico/Magistrale/I/s2/SDP/SDP_labs/lab3/es2/main.cpp

CMakeFiles/es2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/es2.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/manuelfissore/Documents/Politecnico/Magistrale/I/s2/SDP/SDP_labs/lab3/es2/main.cpp > CMakeFiles/es2.dir/main.cpp.i

CMakeFiles/es2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/es2.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/manuelfissore/Documents/Politecnico/Magistrale/I/s2/SDP/SDP_labs/lab3/es2/main.cpp -o CMakeFiles/es2.dir/main.cpp.s

# Object files for target es2
es2_OBJECTS = \
"CMakeFiles/es2.dir/main.cpp.o"

# External object files for target es2
es2_EXTERNAL_OBJECTS =

es2: CMakeFiles/es2.dir/main.cpp.o
es2: CMakeFiles/es2.dir/build.make
es2: CMakeFiles/es2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/manuelfissore/Documents/Politecnico/Magistrale/I/s2/SDP/SDP_labs/lab3/es2/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable es2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/es2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/es2.dir/build: es2
.PHONY : CMakeFiles/es2.dir/build

CMakeFiles/es2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/es2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/es2.dir/clean

CMakeFiles/es2.dir/depend:
	cd /Users/manuelfissore/Documents/Politecnico/Magistrale/I/s2/SDP/SDP_labs/lab3/es2/cmake-build-release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/manuelfissore/Documents/Politecnico/Magistrale/I/s2/SDP/SDP_labs/lab3/es2 /Users/manuelfissore/Documents/Politecnico/Magistrale/I/s2/SDP/SDP_labs/lab3/es2 /Users/manuelfissore/Documents/Politecnico/Magistrale/I/s2/SDP/SDP_labs/lab3/es2/cmake-build-release /Users/manuelfissore/Documents/Politecnico/Magistrale/I/s2/SDP/SDP_labs/lab3/es2/cmake-build-release /Users/manuelfissore/Documents/Politecnico/Magistrale/I/s2/SDP/SDP_labs/lab3/es2/cmake-build-release/CMakeFiles/es2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/es2.dir/depend

