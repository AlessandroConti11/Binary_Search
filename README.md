# Binary_Search


Author: Alessandro Conti - [AlessandroConti11](https://github.com/AlessandroConti11)

License: [MIT license](LICENSE).


Tags: .


## Specification

In this repository you can find the implementation of some binary search algorithm.

A **Binary Search Algorithm** is used to find the position within a sorted array of a specific value. 
Assuming the value is not in the array, in which case an invalid index is returned.

The implemented sorting networks are:
- [standard binary search](standard_binary_search/README.md)
- [boundless binary search](boundless_binary_search/README.md)
- [doubletapped binary search](doubletapped_binary_search/README.md)
- [monobound binary search](monobound_binary_search/README.md)
- [tripletapped binary search](tripletapped_binary_search/README.md)
- [monobound quaternary search](monobound_quaternary_search/README.md)
- [monobound interpolated binary search](monobound_interpolated_binary_search/README.md)
- [adaptive binary search](adaptive_binary_search/README.md)
- [boundless binary range search](boundless_binary_range_search/README.md)


## How to run

The steps below refer to a Unix environment, for other environments the commands may change.

0. install gcc
    ```bash
    sudo apt-get install gcc 
    ```
1. compile each source file into an object file
    ```bash
    g++ -std=c++20 -Wall -Werror -Wextra -O2 -c FILE.cpp -o FILE.o
    ```
2. link all object files into an executable
    ```bash
    g++ -std=c++20 -Wall -Werror -Wextra -O2 main.o \
    adaptive_binary_search/adaptive_binary_search.o \
    boundless_binary_range_search/boundless_binary_range_search.o \
    boundless_binary_search/boundless_binary_search.o \
    doubletapped_binary_search/doubletapped_binary_search.o \
    monobound_binary_search/monobound_binary_search.o \
    monobound_interpolated_binary_search/monobound_interpolated_binary_search.o \
    monobound_quaternary_search/monobound_quaternary_search.o \
    standard_binary_search/standard_binary_search.o \
    tripletapped_binary_search/tripletapped_binary_search.o \
    -o EXECUTABLE
    ```
3. run the executable
    ```bash
    ./EXECUTABLE
    ```

<br>

The Makefile in the repository can also be used to compile the code.
- this option allows you to compile with the following tags: *-std=c++20 -Wall -Werror -Wextra -O2*
    ```bash
    make
    ```
- if you want to specify different tags, you can set them
   ```bash
   make compile CXXFLAGS=YOUR_FLAGS
   ```
- if you want to remove all .o files and the final executable
    ```bash
    make clean
    ```

<br>

The CMakeLists.txt in the repository can also be used to compile the code.
0. install cmake
    ```bash
    sudo apt-get install cmake
    ```
1. create the build folder
    ```bash
    mkdir build && cd build
    ```
2. generate compilation files
    ```bash
    cmake ..
    ```
3. build the project
    ```bash
    cmake --build .
    ```
4. run the executable
    ```bash
    ./binary_search
    ```


## Contribute

- If you find a security vulnerability, do NOT open an issue. Email [Alessandro Conti](mailto:ale.conti.1101@gmail.com) instead.
- If you find a bug or error or want to add some other function that is not implemented yet
    1. **FORK** the repo
    2. **CLONE** the project to your own machine
    3. **COMMIT** to your own branch
    4. **PUSH** your work back up to your fork
    5. submit a **PULL REQUEST** so that I can review your changes
  > NOTE: Be sure to merge the latest from "upstream" before making a pull request!

### Code Style

Each new function must be documented using the following style:
- *Short function description*: A brief description explaining what the function does.
- *@warning*: A section listing all the assumptions made by the function, such as the preconditions that the parameters must fulfil.
- *Blank line*: Add a blank line to separate the documentation sections.
- *@details*: A detailed section describing how the function works, explaining the algorithms and logic used.
- *Blank line*: Add a blank line to separate the documentation sections.
- *@param*: A list of the parameters required by the function, each accompanied by a brief description of its role and type.
- *@return*: A description of what the function returns, including the data type.

In general, any additional comments that might improve understanding of the code are welcome. 😃
