# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = "G:\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "G:\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\martin skere\Desktop\Hola"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\martin skere\Desktop\Hola\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/proyectoSnake.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/proyectoSnake.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/proyectoSnake.dir/flags.make

CMakeFiles/proyectoSnake.dir/main.cpp.obj: CMakeFiles/proyectoSnake.dir/flags.make
CMakeFiles/proyectoSnake.dir/main.cpp.obj: CMakeFiles/proyectoSnake.dir/includes_CXX.rsp
CMakeFiles/proyectoSnake.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\martin skere\Desktop\Hola\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/proyectoSnake.dir/main.cpp.obj"
	C:\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\proyectoSnake.dir\main.cpp.obj -c "C:\Users\martin skere\Desktop\Hola\main.cpp"

CMakeFiles/proyectoSnake.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proyectoSnake.dir/main.cpp.i"
	C:\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\martin skere\Desktop\Hola\main.cpp" > CMakeFiles\proyectoSnake.dir\main.cpp.i

CMakeFiles/proyectoSnake.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proyectoSnake.dir/main.cpp.s"
	C:\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\martin skere\Desktop\Hola\main.cpp" -o CMakeFiles\proyectoSnake.dir\main.cpp.s

CMakeFiles/proyectoSnake.dir/vibora.cpp.obj: CMakeFiles/proyectoSnake.dir/flags.make
CMakeFiles/proyectoSnake.dir/vibora.cpp.obj: CMakeFiles/proyectoSnake.dir/includes_CXX.rsp
CMakeFiles/proyectoSnake.dir/vibora.cpp.obj: ../vibora.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\martin skere\Desktop\Hola\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/proyectoSnake.dir/vibora.cpp.obj"
	C:\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\proyectoSnake.dir\vibora.cpp.obj -c "C:\Users\martin skere\Desktop\Hola\vibora.cpp"

CMakeFiles/proyectoSnake.dir/vibora.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proyectoSnake.dir/vibora.cpp.i"
	C:\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\martin skere\Desktop\Hola\vibora.cpp" > CMakeFiles\proyectoSnake.dir\vibora.cpp.i

CMakeFiles/proyectoSnake.dir/vibora.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proyectoSnake.dir/vibora.cpp.s"
	C:\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\martin skere\Desktop\Hola\vibora.cpp" -o CMakeFiles\proyectoSnake.dir\vibora.cpp.s

# Object files for target proyectoSnake
proyectoSnake_OBJECTS = \
"CMakeFiles/proyectoSnake.dir/main.cpp.obj" \
"CMakeFiles/proyectoSnake.dir/vibora.cpp.obj"

# External object files for target proyectoSnake
proyectoSnake_EXTERNAL_OBJECTS =

proyectoSnake.exe: CMakeFiles/proyectoSnake.dir/main.cpp.obj
proyectoSnake.exe: CMakeFiles/proyectoSnake.dir/vibora.cpp.obj
proyectoSnake.exe: CMakeFiles/proyectoSnake.dir/build.make
proyectoSnake.exe: C:/mingw32/lib/libsfml-graphics-d.a
proyectoSnake.exe: C:/mingw32/lib/libsfml-window-d.a
proyectoSnake.exe: C:/mingw32/lib/libsfml-system-d.a
proyectoSnake.exe: CMakeFiles/proyectoSnake.dir/linklibs.rsp
proyectoSnake.exe: CMakeFiles/proyectoSnake.dir/objects1.rsp
proyectoSnake.exe: CMakeFiles/proyectoSnake.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\martin skere\Desktop\Hola\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable proyectoSnake.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\proyectoSnake.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/proyectoSnake.dir/build: proyectoSnake.exe

.PHONY : CMakeFiles/proyectoSnake.dir/build

CMakeFiles/proyectoSnake.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\proyectoSnake.dir\cmake_clean.cmake
.PHONY : CMakeFiles/proyectoSnake.dir/clean

CMakeFiles/proyectoSnake.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\martin skere\Desktop\Hola" "C:\Users\martin skere\Desktop\Hola" "C:\Users\martin skere\Desktop\Hola\cmake-build-debug" "C:\Users\martin skere\Desktop\Hola\cmake-build-debug" "C:\Users\martin skere\Desktop\Hola\cmake-build-debug\CMakeFiles\proyectoSnake.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/proyectoSnake.dir/depend

