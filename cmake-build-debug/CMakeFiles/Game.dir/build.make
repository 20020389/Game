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
CMAKE_COMMAND = /home/snow/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/203.8084.11/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/snow/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/203.8084.11/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/snow/CLionProjects/Game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/snow/CLionProjects/Game/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Game.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Game.dir/flags.make

CMakeFiles/Game.dir/File/Bird.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/File/Bird.cpp.o: ../File/Bird.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/snow/CLionProjects/Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Game.dir/File/Bird.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/File/Bird.cpp.o -c /home/snow/CLionProjects/Game/File/Bird.cpp

CMakeFiles/Game.dir/File/Bird.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/File/Bird.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/snow/CLionProjects/Game/File/Bird.cpp > CMakeFiles/Game.dir/File/Bird.cpp.i

CMakeFiles/Game.dir/File/Bird.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/File/Bird.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/snow/CLionProjects/Game/File/Bird.cpp -o CMakeFiles/Game.dir/File/Bird.cpp.s

CMakeFiles/Game.dir/File/Death.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/File/Death.cpp.o: ../File/Death.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/snow/CLionProjects/Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Game.dir/File/Death.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/File/Death.cpp.o -c /home/snow/CLionProjects/Game/File/Death.cpp

CMakeFiles/Game.dir/File/Death.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/File/Death.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/snow/CLionProjects/Game/File/Death.cpp > CMakeFiles/Game.dir/File/Death.cpp.i

CMakeFiles/Game.dir/File/Death.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/File/Death.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/snow/CLionProjects/Game/File/Death.cpp -o CMakeFiles/Game.dir/File/Death.cpp.s

CMakeFiles/Game.dir/File/Event.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/File/Event.cpp.o: ../File/Event.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/snow/CLionProjects/Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Game.dir/File/Event.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/File/Event.cpp.o -c /home/snow/CLionProjects/Game/File/Event.cpp

CMakeFiles/Game.dir/File/Event.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/File/Event.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/snow/CLionProjects/Game/File/Event.cpp > CMakeFiles/Game.dir/File/Event.cpp.i

CMakeFiles/Game.dir/File/Event.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/File/Event.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/snow/CLionProjects/Game/File/Event.cpp -o CMakeFiles/Game.dir/File/Event.cpp.s

CMakeFiles/Game.dir/File/Game.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/File/Game.cpp.o: ../File/Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/snow/CLionProjects/Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Game.dir/File/Game.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/File/Game.cpp.o -c /home/snow/CLionProjects/Game/File/Game.cpp

CMakeFiles/Game.dir/File/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/File/Game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/snow/CLionProjects/Game/File/Game.cpp > CMakeFiles/Game.dir/File/Game.cpp.i

CMakeFiles/Game.dir/File/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/File/Game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/snow/CLionProjects/Game/File/Game.cpp -o CMakeFiles/Game.dir/File/Game.cpp.s

CMakeFiles/Game.dir/File/GamePlay.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/File/GamePlay.cpp.o: ../File/GamePlay.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/snow/CLionProjects/Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Game.dir/File/GamePlay.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/File/GamePlay.cpp.o -c /home/snow/CLionProjects/Game/File/GamePlay.cpp

CMakeFiles/Game.dir/File/GamePlay.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/File/GamePlay.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/snow/CLionProjects/Game/File/GamePlay.cpp > CMakeFiles/Game.dir/File/GamePlay.cpp.i

CMakeFiles/Game.dir/File/GamePlay.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/File/GamePlay.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/snow/CLionProjects/Game/File/GamePlay.cpp -o CMakeFiles/Game.dir/File/GamePlay.cpp.s

CMakeFiles/Game.dir/File/Home.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/File/Home.cpp.o: ../File/Home.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/snow/CLionProjects/Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Game.dir/File/Home.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/File/Home.cpp.o -c /home/snow/CLionProjects/Game/File/Home.cpp

CMakeFiles/Game.dir/File/Home.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/File/Home.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/snow/CLionProjects/Game/File/Home.cpp > CMakeFiles/Game.dir/File/Home.cpp.i

CMakeFiles/Game.dir/File/Home.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/File/Home.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/snow/CLionProjects/Game/File/Home.cpp -o CMakeFiles/Game.dir/File/Home.cpp.s

CMakeFiles/Game.dir/File/Map.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/File/Map.cpp.o: ../File/Map.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/snow/CLionProjects/Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Game.dir/File/Map.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/File/Map.cpp.o -c /home/snow/CLionProjects/Game/File/Map.cpp

CMakeFiles/Game.dir/File/Map.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/File/Map.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/snow/CLionProjects/Game/File/Map.cpp > CMakeFiles/Game.dir/File/Map.cpp.i

CMakeFiles/Game.dir/File/Map.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/File/Map.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/snow/CLionProjects/Game/File/Map.cpp -o CMakeFiles/Game.dir/File/Map.cpp.s

CMakeFiles/Game.dir/File/Music.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/File/Music.cpp.o: ../File/Music.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/snow/CLionProjects/Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Game.dir/File/Music.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/File/Music.cpp.o -c /home/snow/CLionProjects/Game/File/Music.cpp

CMakeFiles/Game.dir/File/Music.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/File/Music.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/snow/CLionProjects/Game/File/Music.cpp > CMakeFiles/Game.dir/File/Music.cpp.i

CMakeFiles/Game.dir/File/Music.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/File/Music.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/snow/CLionProjects/Game/File/Music.cpp -o CMakeFiles/Game.dir/File/Music.cpp.s

CMakeFiles/Game.dir/File/Pipe.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/File/Pipe.cpp.o: ../File/Pipe.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/snow/CLionProjects/Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Game.dir/File/Pipe.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/File/Pipe.cpp.o -c /home/snow/CLionProjects/Game/File/Pipe.cpp

CMakeFiles/Game.dir/File/Pipe.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/File/Pipe.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/snow/CLionProjects/Game/File/Pipe.cpp > CMakeFiles/Game.dir/File/Pipe.cpp.i

CMakeFiles/Game.dir/File/Pipe.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/File/Pipe.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/snow/CLionProjects/Game/File/Pipe.cpp -o CMakeFiles/Game.dir/File/Pipe.cpp.s

CMakeFiles/Game.dir/File/SaveKey.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/File/SaveKey.cpp.o: ../File/SaveKey.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/snow/CLionProjects/Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Game.dir/File/SaveKey.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/File/SaveKey.cpp.o -c /home/snow/CLionProjects/Game/File/SaveKey.cpp

CMakeFiles/Game.dir/File/SaveKey.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/File/SaveKey.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/snow/CLionProjects/Game/File/SaveKey.cpp > CMakeFiles/Game.dir/File/SaveKey.cpp.i

CMakeFiles/Game.dir/File/SaveKey.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/File/SaveKey.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/snow/CLionProjects/Game/File/SaveKey.cpp -o CMakeFiles/Game.dir/File/SaveKey.cpp.s

CMakeFiles/Game.dir/File/Score.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/File/Score.cpp.o: ../File/Score.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/snow/CLionProjects/Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Game.dir/File/Score.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/File/Score.cpp.o -c /home/snow/CLionProjects/Game/File/Score.cpp

CMakeFiles/Game.dir/File/Score.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/File/Score.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/snow/CLionProjects/Game/File/Score.cpp > CMakeFiles/Game.dir/File/Score.cpp.i

CMakeFiles/Game.dir/File/Score.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/File/Score.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/snow/CLionProjects/Game/File/Score.cpp -o CMakeFiles/Game.dir/File/Score.cpp.s

CMakeFiles/Game.dir/File/Setting.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/File/Setting.cpp.o: ../File/Setting.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/snow/CLionProjects/Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/Game.dir/File/Setting.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/File/Setting.cpp.o -c /home/snow/CLionProjects/Game/File/Setting.cpp

CMakeFiles/Game.dir/File/Setting.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/File/Setting.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/snow/CLionProjects/Game/File/Setting.cpp > CMakeFiles/Game.dir/File/Setting.cpp.i

CMakeFiles/Game.dir/File/Setting.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/File/Setting.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/snow/CLionProjects/Game/File/Setting.cpp -o CMakeFiles/Game.dir/File/Setting.cpp.s

CMakeFiles/Game.dir/File/Text.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/File/Text.cpp.o: ../File/Text.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/snow/CLionProjects/Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/Game.dir/File/Text.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/File/Text.cpp.o -c /home/snow/CLionProjects/Game/File/Text.cpp

CMakeFiles/Game.dir/File/Text.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/File/Text.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/snow/CLionProjects/Game/File/Text.cpp > CMakeFiles/Game.dir/File/Text.cpp.i

CMakeFiles/Game.dir/File/Text.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/File/Text.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/snow/CLionProjects/Game/File/Text.cpp -o CMakeFiles/Game.dir/File/Text.cpp.s

CMakeFiles/Game.dir/File/User.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/File/User.cpp.o: ../File/User.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/snow/CLionProjects/Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/Game.dir/File/User.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/File/User.cpp.o -c /home/snow/CLionProjects/Game/File/User.cpp

CMakeFiles/Game.dir/File/User.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/File/User.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/snow/CLionProjects/Game/File/User.cpp > CMakeFiles/Game.dir/File/User.cpp.i

CMakeFiles/Game.dir/File/User.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/File/User.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/snow/CLionProjects/Game/File/User.cpp -o CMakeFiles/Game.dir/File/User.cpp.s

CMakeFiles/Game.dir/File/main.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/File/main.cpp.o: ../File/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/snow/CLionProjects/Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/Game.dir/File/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/File/main.cpp.o -c /home/snow/CLionProjects/Game/File/main.cpp

CMakeFiles/Game.dir/File/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/File/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/snow/CLionProjects/Game/File/main.cpp > CMakeFiles/Game.dir/File/main.cpp.i

CMakeFiles/Game.dir/File/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/File/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/snow/CLionProjects/Game/File/main.cpp -o CMakeFiles/Game.dir/File/main.cpp.s

CMakeFiles/Game.dir/File/volume.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/File/volume.cpp.o: ../File/volume.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/snow/CLionProjects/Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/Game.dir/File/volume.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/File/volume.cpp.o -c /home/snow/CLionProjects/Game/File/volume.cpp

CMakeFiles/Game.dir/File/volume.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/File/volume.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/snow/CLionProjects/Game/File/volume.cpp > CMakeFiles/Game.dir/File/volume.cpp.i

CMakeFiles/Game.dir/File/volume.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/File/volume.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/snow/CLionProjects/Game/File/volume.cpp -o CMakeFiles/Game.dir/File/volume.cpp.s

# Object files for target Game
Game_OBJECTS = \
"CMakeFiles/Game.dir/File/Bird.cpp.o" \
"CMakeFiles/Game.dir/File/Death.cpp.o" \
"CMakeFiles/Game.dir/File/Event.cpp.o" \
"CMakeFiles/Game.dir/File/Game.cpp.o" \
"CMakeFiles/Game.dir/File/GamePlay.cpp.o" \
"CMakeFiles/Game.dir/File/Home.cpp.o" \
"CMakeFiles/Game.dir/File/Map.cpp.o" \
"CMakeFiles/Game.dir/File/Music.cpp.o" \
"CMakeFiles/Game.dir/File/Pipe.cpp.o" \
"CMakeFiles/Game.dir/File/SaveKey.cpp.o" \
"CMakeFiles/Game.dir/File/Score.cpp.o" \
"CMakeFiles/Game.dir/File/Setting.cpp.o" \
"CMakeFiles/Game.dir/File/Text.cpp.o" \
"CMakeFiles/Game.dir/File/User.cpp.o" \
"CMakeFiles/Game.dir/File/main.cpp.o" \
"CMakeFiles/Game.dir/File/volume.cpp.o"

# External object files for target Game
Game_EXTERNAL_OBJECTS =

Game: CMakeFiles/Game.dir/File/Bird.cpp.o
Game: CMakeFiles/Game.dir/File/Death.cpp.o
Game: CMakeFiles/Game.dir/File/Event.cpp.o
Game: CMakeFiles/Game.dir/File/Game.cpp.o
Game: CMakeFiles/Game.dir/File/GamePlay.cpp.o
Game: CMakeFiles/Game.dir/File/Home.cpp.o
Game: CMakeFiles/Game.dir/File/Map.cpp.o
Game: CMakeFiles/Game.dir/File/Music.cpp.o
Game: CMakeFiles/Game.dir/File/Pipe.cpp.o
Game: CMakeFiles/Game.dir/File/SaveKey.cpp.o
Game: CMakeFiles/Game.dir/File/Score.cpp.o
Game: CMakeFiles/Game.dir/File/Setting.cpp.o
Game: CMakeFiles/Game.dir/File/Text.cpp.o
Game: CMakeFiles/Game.dir/File/User.cpp.o
Game: CMakeFiles/Game.dir/File/main.cpp.o
Game: CMakeFiles/Game.dir/File/volume.cpp.o
Game: CMakeFiles/Game.dir/build.make
Game: CMakeFiles/Game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/snow/CLionProjects/Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Linking CXX executable Game"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Game.dir/build: Game

.PHONY : CMakeFiles/Game.dir/build

CMakeFiles/Game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Game.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Game.dir/clean

CMakeFiles/Game.dir/depend:
	cd /home/snow/CLionProjects/Game/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/snow/CLionProjects/Game /home/snow/CLionProjects/Game /home/snow/CLionProjects/Game/cmake-build-debug /home/snow/CLionProjects/Game/cmake-build-debug /home/snow/CLionProjects/Game/cmake-build-debug/CMakeFiles/Game.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Game.dir/depend

