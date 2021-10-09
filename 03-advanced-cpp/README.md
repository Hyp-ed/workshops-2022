# Advanced C++ Workshop

## Purpose

In this workshop, you will learn more about writing, editing and testing C++ program.
In particular, you will be introduced to using some of the most common standard library features, to writing automated tests using GoogleTest and to handling some of the more subtle behaviour that C++ allows you to introduce.

## Preparation

1. Go through the [git & GitHub Workshop](https://github.com/Hyp-ed/workshops-2022/tree/master/01-git) including the preparation steps.
2. Go through the [Basic C++ Workshop](https://github.com/Hyp-ed/workshops-2022/tree/master/02-basic-cpp) including the preparation steps.

## Exercises

Similar to the Basic C++ Workshop and the main HYPED repository, a CMake project has been set up in this workshop's folder. Make sure you can compile and run the test suit right away using the following commands 

```
$ mkdir build
$ cd build
$ cmake ..
$ make test
```

Most tests should fail.

It is recommended that you create a branch `ws2-<your name>` to commit your changes 
to. This branch won't be merged, but it will help you develop the habit of adding,
committing and pushing changes asap.

### Exercise 1 - Quadaratic Polynomials and their Roots

Please have a look at `src/01_roots.hpp`. You will find a class that represents a quadratic polynomial with real coefficients. 

You may notice that a `key` method as well as the `==` and `!=` operators have been implemented for the class.
These are solely for testing pruposes. However, you may want to inspect the code anyways.
In particular, pay attention to the use of the `const` keyword which is used in several places.

> Implement the primary constructor for `QuadraticPolynomial` in `src/01_roots.cpp`.

Next, we would like to know whether a particular real number is a solution to our quadratic.
However, we are limited by [floating point representation](https://en.wikipedia.org/wiki/IEEE_754).
In essence, arithmetic operations between values of type `double` or `float` introduce an error that may cause a direct comparison to fail.
Therefore, we have introduced a constant `QuadraticPolynomial::kTolerance`.
We define the value of a polynomial `y = ax^2 + bx + c` to be equal to a real number `z` if `|y - z| < kTolerance`.

> Implement the `isRoot` function by using the `kTolerance` constant.

*Note: A root of a polynomial is a (real) number `x` such that `ax^2 + bx + c = 0`.*

Finally, we would like to find all the real roots of a particular quadratic.
Due to our definition of equality, there are potentially many more values that pass the `isRoot` test than we would expect algebraically.

> Implement the `realRoots` function such (1) that the number of roots returned matches the number of algebraic roots, (2) for each algebraic root there is at least one return value within the equality tolerance, and (3) each return value is within the equality tolerance of at least one algebraic root.