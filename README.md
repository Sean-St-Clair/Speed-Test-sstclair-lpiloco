# Speed Test
On your mark, get set, sort!

For this project, you will compare the runtimes of Python and C++ as they bubble sort lists of numbers. Can you guess which will be faster?

You may work individually or with a partner of your choosing.

## Setup

Use this Guided Project template to create a new repository (see [GitHub-with-CLion](https://github.com/uvmcs120s2023/GitHub-with-CLion) repo for directions).
**Your repository must be named with the convention: Speed-Test-netid**, where netid is your UVM NetID username.
* If you are collaborating, the format is Speed-Test-netid1-netid2. Have one partner create the repository and give the other partner access on GitHub: on the repository page, go to the Settings tab, choose Manage Access, and add the person with their GitHub username.

Remember to commit and push frequently.

### Cloning the repository

This project is intended to be completed without using CLion. To clone the repository, go into your Command Line Interface (`cmd` on Windows and `Terminal` on Mac/Linux), navigate to the place you want to clone (using the `cd` command), and then type:
```
git clone <your repository URL>
```
where `<your repository URL>` is the link that GitHub provides (the one you usually use to clone into CLion).
* If you are running Windows and get an error that git is an unrecognized command, make sure that you update your PATH variable (see [Unrecognized-Commands](https://github.com/uvmcs120s2023/Unrecognized-Commands) repo for directions).

## Project Overview

The goal of the project is to bubble sort the same sets of unordered numbers in both Python and C++, time how long it takes each programming language to sort, and graph the results.

Since Python is interpreted and C++ is compiled, the only fair way to compare times is to include the C++ compile time in its runtime. Therefore, we will start the program in Python and Python will call C++. 

The Python file named `BubbleSort.py` includes the main program, which can be broken into three parts:
1. Run the bubble sort algorithm in Python and time how long it takes to sort.
1. Compile and run the C++ bubble sort algorithm and time how long it takes to sort.
1. Graph the runtimes.

## Starter Code

You are given starter code, which includes:
* `numbers.txt`: a text file with a list of 10,000 random integers (taken from random.org). These will be read into the Python and C++ programs to sort.
* `BubbleSort.cpp`: a C++ source file that takes a command line argument for the number of integers to sort. Reads in that many integers from the file, sorts the numbers, and prints out the first and last ten integers from the sorted list to demonstrate that it worked properly.
* `BubbleSort.py`: a Python source file that includes the main program, which can be broken into three parts:
1. Runs the bubble sort algorithm in Python and times how long it takes to sort.
1. Compiles and runs the C++ bubble sort algorithm and times how long it takes to sort.
1. Graphs the runtimes in a bar graph using matplotlib.

Your goal is to run the Python file using the Command Line Interface (CLI), which should produce the graph and save it as a file named `BattleOfTheBubbleSorts.png`.

Can you guess which language will be faster at sorting, Python or C++?

## Running the C++ file

To run `BubbleSort.cpp` from your CLI, use the following commands:
* `g++ -std=c++1y BubbleSort.cpp` will compile the program into an executable file.
    * On Windows and get an error that g++ is an unrecognized command? Make sure you update your PATH variable (see [Unrecognized-Commands](https://github.com/uvmcs120s2023/Unrecognized-Commands) repo for directions).
* To run the executable and give it a command line argument of 10:
    * For Windows users, the command is `a.exe 10`
    * For Mac/Linux users, the command is `./a.out 10`

This should print "Looking for size: 10" when you run it. It will do more once you complete the TODO statements.

## Running the Python file

To run `BubbleSort.py` from your CLI:
* For Windows users, the command is either `python BubbleSort.py` or `py BubbleSort.py`, depending on your installation of Python.
    * On Windows and get an error that `python` and `py` are unrecognized commands? Make sure you update your PATH variable (see [Unrecognized-Commands](https://github.com/uvmcs120s2023/Unrecognized-Commands) repo for directions).
* For Mac/Linux users, the command is either `python BubbleSort.py` or `python3 BubbleSort.py`, depending on your installation of Python.

On any OS, if you get a Python import error: use pip to install the package, e.g. `pip install matplotlib` or `pip3 install matplotlib`

This program should print a bar graph of the numbers from 1 to 10 when you run it. It will behave differently once you complete the TODO statements.

## Your Job

Complete the TODO comments in `BubbleSort.cpp` and `BubbleSort.py` to create the fully functioning program. You can edit the files in a text editor of your choice. Make sure the Python file uses 4 spaces for each tab level.

## Grading

If you are collaborating, both partners have to submit the project.

### Grading Rubric
- [ ] (10 pts) Completed TODOs in `BubbleSort.cpp` completely and correctly.
- [ ] (10 pts) Completed TODOs in `BubbleSort.py` completely and correctly.

