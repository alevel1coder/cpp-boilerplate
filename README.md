# ALevel1Coder Boilerplate C++ project

This project is intended to be used as a baseline C++ projects starting point.
It will contain the code needed to build and run basic C++ projects, and as an
added bonus (I guess...), all without a real IDE. Vim here we come

---

## The Project

### When using as a baseline for other projects

Remember that this is a Boilerplate project, so many fields will have generic names.
Here are a few locations where you'll need to update something:

- Root CMakeLists file
  - Change the project name from "Boilerplate" to something else
  - Update versions as needed

### Building C++ project using CMake

For a rather basic project, you should be able to do the following to build an
executable C++ file

```Bash
# Enter build directory
$ cd build/<BUILD_TYPE>

# Read CMakeLists.txt and generate native build files
$ cmake ../..

# Build project and generate executable in bin/<BUILD_TYPE> directory
$ cmake --build .

# Run the executable
$ ../bin/<BUILD_TYPE>/PROJECT_NAME_EXECUTABLE

```

---

## Reference Material and Learning

- This absolute legend made a really easy to understand guide for making and
running C++ projects. Much of this (basically all of it right now)
is thanks to the following guide:

`
https://dane-bulat.medium.com/vim-setting-up-a-build-system-and-code-completion-for-c-and-c-eb263c0a19a1
`

- ADD LEARNING NOTES HERE
