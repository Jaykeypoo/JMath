JMath
JMath is my personal project and learning experiment. Through this project, I aim to learn the ins and outs of C++ and the fundamentals of computer science. I love math, and 
through this project, I want to create something akin to a computer algebra system that, when finished, can perform calculations on numbers and equations.

GOALS
1) Define a class of numbers for rigorous mathematical use, where each class has specific attributes and methods that reflect its mathematical definition.
   1.3) The number classes should have four main subclasses:
    Exact: A class that can be manipulated with zero loss using an algebra system.
    Significand: A class where calculations are not exact, but error bounds are known.
    Normal: A class for quick and efficient calculations using C++'s built-in data types.
    Variable and Unknown: A class representing mathematical variables without assigned values.
  1.6) Integers will be the first to be defined. Then, I plan to create a Field Numbers class that will include rational numbers, real numbers, complex numbers, algebraic  
   numbers (solutions to polynomials), and possibly hyperreal and surreal numbers. Additionally, I would like to implement Hypercomplex numbers, such as dual numbers, 
   split-complex numbers, and quaternions.

2) Define a class of Algebraic Structures with functions that numbers can interact with. While I don’t plan to go too deep beyond elementary and linear algebra, this       
    abstraction will support future expandability.
  2.5) With the foundation of elementary and linear algebra, I also want to develop methods to simplify and evaluate equations, initially for terminal-based use before    
    expanding functionality.
  2.625) The function library will include: Polynomial and trigonometric functions, exponential and logarithmic functions, and statistical and combinatorial functions
  2.75) Additionally, I want to incorporate analysis functions to support calculus and mathematical analysis, including: Derivative and integral calculators, and      
    differential equation solvers
    
3) Define sets and logic to create a general Boolean algebra library. I want sets and logic to be useful for proofs and similar applications. Sets should be constructible   
    and comparable. Logical expressions should be manipulatable like algebraic equations.
  3.5) I’m not sure how yet, but I would like to include functionality for group symmetries.


   
