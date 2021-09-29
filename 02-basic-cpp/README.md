# Basic C++ Workshop

## Purpose

In this workshop, you will learn how to write and edit basic C++ programs.
If you are not able to attend the workshop, please complete it before onboarding starts as this is crucial to be able to work with your team.

We will be available during the workshop time to help you if you have any problems related to the workshop exercises.
If you have any other questions but are not able to ask during the workshop, don't hesitate to message us on Slack!

## Preparation

1. Go through this [guide](https://github.com/Hyp-ed/hyped-2022/wiki/CPP-Getting-Started) to set up a C++ development environment.
2. Go through [Codecademy C++ course](https://www.codecademy.com/learn/learn-c-plus-plus).
3. (Recommended) Read chapters 0, 1, 2, 4, 5 and 6 from [Learn C++](https://www.learncpp.com/).

## Exercises

A basic C++ project using CMake and GoogleTest has been set up in this folder.
If you were able to compile and run the tests in the official HYPED repository, this one should work just as well.

You can try compiling and running the tests with

```
$ mkdir build
$ cd build
$ cmake ..
$ make test
```

Most tests should fail.

It is recommended that you create a branch `ws2-<your name>` that you will be working on.
This branch won't be merged, but it will help you practice the workflow of adding, commiting and pushing changes.

The exercises may seem easy to some of you, especially the actual programming involved.

### Exercise 1 - Grades

In `src/01_grades.cpp` there's a function `emptyOrCongratulations` which takes an integer `score` and returns a string.

> Modify it so that it returns `"Congratulations!"` if the score is 100 and an empty string otherwise.

In the same file, there's another function `scoreToLetterGrade` with the same signature.

> Modify it so that it converts the score into Edinburgh University Letter grades as a string. I.e. 0 to 39 is an F, 40 to 49 is a D, 50 to 59 is a E, 60 to 69 is a D, ..., 90 to 100 is an A1.

### Exercise 2 - Temperatures

In `src/02_temperatures.cpp` there are two functions, `celsiusToKelvin` and `celsiusToFahrenheit`. Both take a `double` and return another `double`.
They do what you would expect them to.

> Modify them so that the former converts the given temperature into Kelvin and the latter into Fahrenheit. Be accurate to two decimal places.

Note:

- From Celsius to Kelvin: `K = C + 273.15`
- From Celsius to Fahrenheit: `F = C * 9 / 5 + 32`

### Exercise 3 - Sums & Counting

In `src/03_sums.cpp` there is a function `sum` that takes an integer `l` and a _pointer_ `a` and returns a double.

> Modify it so that it returns the sum of all the values in the array starting at `a` with length `l`. The sum of zero items is zero.

Note, there are two (equally valid) ways of accessing elements of a C-style array:

```cpp
const double arr[5] = {1, 2, 3, 4, 5};
const double x = arr[3];
const double y = *(arr + 3);
```

Neither is better than the other.

There's another implementation of the function `sum` which takes a C++ vector (a resizable array; not to be confused with vectors from linear algebra!).
Unless we absolutely have to use C-style arrays, e.g. due to a libraries' interface, we always prefer collections like vectors.
They provide essentially identical performance, but they are much safer to use.

> Modify this implementation so that it returns the sum of all the elements of the vector.

You may want to use range-based `for`-loops:

```cpp
const std::vector<double> v = {1, 2, 3, 4, 5};
for (const double x : v) {
    // in each iteration, x will take the value of the next element of v
}
```

The next function in the file is called `absoluteSum`.
By absolute sum we mean the sum of the absolute values of all the elements.

> Modify `absoluteSum` so that it computes the absolute sum of all the elements of the given vector.

You may find the [abs](https://www.cplusplus.com/reference/cmath/abs/) function from the C++ standard library helpful.
Note that you will have to include the appropriate header file! (see the example on the linked page)

The last function in the file is called `countNegatives`.
It also takes a vector of floating point numbers, but it returns an unsigned integer.

> Modify it so that it returns the number of negative elements in the vector.

### Exercise 4 - Pancakes

In `src/04_pancakes.hpp` you can see a struct containing information about how many pancakes a particular person had for breakfast.

```cpp
struct PancakesEatenBy {
  std::string name;
  int num_pancakes_eaten;
};
```

In particular, each object of type `PancakesEatenBy` has two attributes:

1. A string containing the name of the person, and
2. an integer representing the number of pancakes eaten by that person.

In the source file (`src/04_pancakes.cpp`) you can find a function `mostPancakesEaten`.

> Modify it so that, given a vector of `PancakesEatenBy` objects, it returns the the one where the number of eaten pancakes is the highest.

Below this, you can see another function, `moreThanNPancakesEaten`, which not only takes a vector of `PancakeEaten` objects, but also an integer `n`.

> Modify it so that it returns a vector of those `PancakeEaten` objects where the number of pancakes eaten is strictly greater than `n`.

At the end of the file there is another function, `nMostPancakesEaten`.

> (Optional) Modify it so that it returns a vector containing the `n` entries from the original input that have higher numbers of pancakes eaten than any other element, in any order. 

There are many ways of doing this, some are more efficient than others.
You should not worry about efficiency, though, so any solution is fine.

Don't worry if you are struggling with this, just move on to the next question.

### Exercise 5 - Grades, but better

In Exercise 1 we defined a function `scoreToLetterGrade` that converts numerical exam scores to a string representation of a letter grade.

However, this has several shortcomings.
For one, a string can have many different values whereas we have a very limited number of possible grades.
Further, strings are rather complicated data structures and way too complicated for simply representing grades.

Therefore, you can find a new version of the function in `05_better_grades.[ch]pp`. 
You may notice that this new version has a different type signature.
In particular, the return type has changed to `Grades`.
This is a type defined within the `hyped::workshp` namespace, i.e. a custom type we created for a specific purpose.
You can find the definition in the header file (`05_better_grades.hpp`):

```cpp
enum Grade { kInvalid = -1 };
```

As you can see, it's defined as an enum that currently only has a single value.
If you don't know how to use enums, you can have a quick look [here](https://www.tutorialspoint.com/how-to-use-enums-in-cplusplus).
This is not quite what we want.
Instead, it should be able to take the following values:

- invalid: to represent an error
- A1, A2, A3
- B
- C
- D
- F

> Modify the enum so that it can take values representing each of the above. Remember to follow the style guide.

Now we can go back to the source file (`05_better_grades.cpp`).

> Copy your implementation of `scoreToLetterGrade` implementation from `01_grades.cpp` and change it so that it returns the appropriate values of the `Grade` enum.

*Note that no additional tests will pass until you finish the entire exercise.*

While this new implementation is more efficient, we want to maintain some degree of backwards compatibility.
For that purpose there are two more functions, `stringToGrade` and `gradeToString`, in the source file.

> Modify them so that they convert the two representations of a grade between each other. You should use `switch` statements. 
> Make sure you handle the edge cases properly (e.g. by using the `default` case in your switch). You should return an empty
> string in the `Grade::kInvalid` case.

This is still not ideal. Using the empty string as an implicit null value has its problems.
There is a solution to this, namely `std::optional<T>`, that we will get into in the Advanced C++ workshop.
