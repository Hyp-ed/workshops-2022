# Basic C++ Workshop

## Purpose

In this workshop, you will learn how to write and edit basic C++ programs.
If you are not able to attend the workshop, please complete it beofre onboarding starts as this crucial to be able to work with your team.

We will be available during the workshop time to help you if you have any problems related to the workshop exercises.
If you have any other questions but are not able to ask during the workshop, don't hesitate to message us on Slack!

## Preparation

1. Go through this [guide](https://github.com/Hyp-ed/hyped-2022/wiki/CPP-Getting-Started) to set up a C++ development environment.
2. Go through the first five chapters of the [Codecademy C++ course](https://www.codecademy.com/learn/learn-c-plus-plus).
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

All tests should fail.

### Exercise 1 - Grades

In `src/01_grades.cpp` there's a function `emptyOrCongratulations` which takes an integer `score` and returns a string.
> Modify it so that it returns `"Congratulations!"` if the score is 100 and an empty string otherwise.

In the same file, there's another function `scoreToLetterGrade` with the same signature.
> Modify it so that it converts the score into Edinburgh University Letter grades as a string. I.e. 0 to 39 is an F, 40 to 49 is a D, 50 to 59 is a E, 60 to 69 is a D, ..., 90 to 100 is an A1.

### Exercise 2 - Temperatures

In `src/02_temperatures` there are two functions, `celsiusToKelvin` and `celsiusToFahrenheit`. Both take a `double` and return another `double`.
They do what you would expect them to.
> Modify them so that the former converts the given temperature into Kelving and the latter into Fahrenheit. Be accurate to two decimal places.

Note:
- From Celsius to Kelvin: `K = C + 273.15`
- From Celsius to Fahrenheit: `F = C * 9 / 5 + 32`