# cpp_module
A collection of C++ exercises aimed at improving your understanding and skills in C++ programming.

## notes

scope resolution operator `::`
	1. access a global variable when there is a local variable with same name
	2. define a function outside a class
	3. access a class's static variables

std::string is a class and std is the namespace where standard library classes and functions are defined.
`for (char& c: result)` uses a reference(`&`) to the characters (c++11)


## rules

- UpperCamelCase: class names format
- Boost libraries?
- `using namespace` and `friend` keywords forbidden
- output ended by a new-line character
- new = allocate memory
- cpp02~09: Orthodox Canonical Form

## concept

- Ad-hoc polymorphism (vs parametric): method overloading
- orthodox canonical form: https://cplusplus.com/articles/y8hv0pDG/
	- A default constructor
	- A copy constructor: used in the implementation of call-by-value parameters
		deep copies that the instance i
	- An assignment operator: used to assign one value to another
	- A destructor
- operator overload

## inheritence
