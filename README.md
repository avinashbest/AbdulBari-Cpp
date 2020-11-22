# Essentials Fundamental:

- Fundamentals
- How Computers Works
- Introduction to Number System
- What is a Program
- Low-level & High-level languages
- Compiler vs Interpreter
- What is an Operating System

# Program Development:

- Programming Paradigms Methodologies
- What is an algorithm
- What is a Flow-chart
- Steps for Program Development & Execution

# C++ Basic:

- Data Types, Variables
- Operators
- Compound Assignment Operator
- Overflow of data-types
- Bitwise Operators
- Logical Operator
- enum & typedef

# Conditional Statements:

- If and else is used for writing conditional statement.
- If condition is true then if block is executed.
- If condition is false then else block is executed.
- 0 => means false.
- 1 => means true or non-zero value is also true.
- If can be nested inside if as well as else statement.
- Nesting of is also written as else-if ladder.

# Loops:

- Loops are iterative statements.
- Block of statements are repeatedly executed as long as condition is true.
- Condition given in loop must become false after some finite iterations otherwise its a infinite loop.
- Values used in condition must update inside the body of finite loop.
- Four types of loops:
  - pre-tested loop while()
  - post-tested loop do..while()
  - counter controlled loop for()
  - for each loop for Collections for()

# Arrays:

- Array is a collection of similar data elements under one name, each element is accessible using its index.
- Memory for array is allocated contiguously.
- for-each loop is used for accessing array.
- N-dimension arrays are supported by C++.
- Two-Dimensional Arrays are sued for Matrices.
- Array can be created in Stack or Heap Section of memory.

# Pointer:

- Pointer is address variable.
- It can store the address of data.
- Pointer are used for accessing heap memory.
- 5 Arithmetic operations are allowed pointer:
  - p++ => move pointer to next element.
  - p-- => move pointer to previous element.
  - p+k => gives address of kth element form pointer location to right.
  - p-k => gives address of kth element from pointer location to left.
  - q-p => gives number of elements between 2 pointers p and q.
- Pointers can be of many levels.
- Double pointer is used for accessing 2D arrays.

# Reference:

- Reference is a Alias of variable.
- It must be initialised when declared.
- It doesn’t take any memory.
- It cannot be modified to refer other variable.
- Syntax for reference declaration is.
- Int &y = x;

# Functions:

- Function is a module which performs a specific task
- Functions are called by name
- Rules for giving function name is same as variable name
- Function can take 0 or more parameters
- Function can return single value
- Void function don’t return any value
- Default return type is int

# Function Overloading:

- If More than one functions can have same name, but different parameter list, then they are overloaded functions
- Return the is not considered in overloading
- Function overloading is used for achieving compile time polymorphism

# Function Template:

- Function template are used for defining generic functions
- They work for multiple datatypes
- Datatype is decided based on the type of value passed
- Datatype is a template variable
- Function can have multiple template variables

# Call by Address:

- Address pf actual parameters are passed.
- Formal parameters must be pointers
- Formal parameters ca indirectly access actual parameters.
- Changes done using formal parameters will reflect in actual parameters

# Return by Address:

- A function can return address of memory
- It should not return address of local variables, which will be disposed after function ends
- It can return address of memory allocated in heap

# Return by Reference

- A function cal return reference
- It should not return reference of its local variables
- It can return formal parameters if they are reference

# Default Arguments

- Parameters of a function can have default values
- If a parameter is default then , passing its value is options
- Function with default argument can be called with variable number of argument
- Default values to parameters must be given from right side parameter
- Default arguments are much useful in constructors
- Default arguments are useful for defining overloaded functions

# Static variables

- They have local scope but remain in memory thru out the execution of program
- They are created in code section
- They are history-sensitive

# Object-Oriented Programming:

- Features of OOPS:
  - Abstraction
  - Data Hiding
  - Inheritance
  - Polymorphism

# Classes:

- Class is a blue print of an object.
- Class in a group of objects.
- Class is a design of object.

# Many object can be created from same class:

- Object consumes memory equal to sum of sizes of all data members
- Member functions don’t occupy memory
- Member functions are called depending on object
- . Dot operator is used for accessing members of object
- Memory allocated for object is also called as instance

# A pointer of type class can be created:

- A pointer can point on existing object
- A new object can be created in heap using pointer
- Arrow operator is used for accessing members of an object using pointer

# Data Hiding:

- Data members of a class class are usually declared as Private or Protected,
- They can be accessed only inside the class and child classes
- Data finding protects data from mishandling

# Constructors:

- Constructor is a member function of a class
- It will have same name as class name
- It will not have return type
- Its should be public
- It can be declared as private also in some cases
- It is called when object is created
- It is used for initialising an object
- It can be overloaded
- If its not defined then class will have a default constructor
- Constructor can take default arguments

# Types of constructors:

- Non-argument constructor
- Parameterised constructor
- Copy constructor

# All types of Member Functions:

- Constructors - called when object is created
- Accessors - used for knowing the value of data members
- Mutators - used for changing value of data member
- Facilitator - actual functions of class
- Enquiry - used for checking if an object satisfies some condition
- Destructor - used for releasing resources used by object

# Operator Overloading:

- Operator overloading is a compile-time polymorphism in which the operator is overloaded to provide the special meaning to the user-defined data type. Operator overloading is used to overload or redefines most of the operators available in C++. It is used to perform the operation on the user-defined data type. For example, C++ provides the ability to add the variables of the user-defined data type that is applied to the built-in data types.
- The advantage of Operators overloading is to perform different operations on the same operand.

![image](https://drive.google.com/uc?export=view&id=1VDUwHMnGRW8v0FbNwOv674J-zsLmkGTm)
