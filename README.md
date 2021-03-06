# Quad Solver - CS4900 - Fall 2017
##### John Harvey, Rawan Alfaraj

C program to solve the quadratic equation: ax^2 + bx + c = 0. Will take a, b, and c as input and output x1 and x2 as roots. To be used on a linux system from the command line.


![Quadtratic Equation](http://tutorial.math.lamar.edu/Classes/Alg/SolveQuadraticEqnSummary_files/eq0002P.gif)


### Instructions

* Enter digits for a, b, and c to solve the quadratic equation like so: a b c
* Program does not handle complex solutions
* If 1 or 2 real solutions exist, program will output roots x1 and x2, along with relative and absolute error

##### In src folder
* Compile program with `make`
* Run program with `make run`
* Compile unit tests with `make utest`
* Run unit tests with `make runtest`
* Compile full test with `make fulltest`
* Run full test with `make runfulltest`
* Clean object files and executables with `make clean`

##### In tests folder
* Compile with `make`
* Run with `make run`
* Clean object files and executables with `make clean`
