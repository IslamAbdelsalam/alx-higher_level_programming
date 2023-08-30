# Python Exceptions

![Python Exceptions](images/exceptions.jpg)

## Table of Contents

- [Introduction](#introduction)
- [Types of Exceptions](#types-of-exceptions)
- [Basic Exception Handling](#basic-exception-handling)
- [Handling Multiple Exceptions](#handling-multiple-exceptions)
- [The `try`-`except`-`else`-`finally` Block](#the-try-except-else-finally-block)
- [Raising Exceptions](#raising-exceptions)
- [Custom Exception Classes](#custom-exception-classes)
- [Best Practices](#best-practices)
- [Resources](#resources)

## Introduction

In Python, exceptions are a way of handling errors or unexpected events that can occur during the execution of a program. When an error occurs, Python raises an exception, which can be caught and handled by the programmer. This helps in writing robust and fault-tolerant code.

## Types of Exceptions

Python has a wide range of built-in exceptions that cover various types of errors. Some common exceptions include:

- `SyntaxError`: Raised when there is a syntax error in the code.
- `TypeError`: Raised when an operation or function is applied to an object of an inappropriate type.
- `ValueError`: Raised when a function receives an argument of the correct type but an inappropriate value.
- `FileNotFoundError`: Raised when an attempt to open a file fails because the file does not exist.
- `IndexError`: Raised when trying to access an index that is out of range.
- `KeyError`: Raised when trying to access a dictionary key that doesn't exist.
- `ZeroDivisionError`: Raised when division or modulo by zero occurs.

## Basic Exception Handling

```python
try:
    # code that might raise an exception
    result = 10 / 0
except ZeroDivisionError:
    print("Error: Division by zero")
```

## Handling Multiple Exceptions

```python
try:
    # code that might raise exceptions
    file = open("example.txt", "r")
    result = 10 / 0
except FileNotFoundError:
    print("Error: File not found")
except ZeroDivisionError:
    print("Error: Division by zero")
```

## The `try`-`except`-`else`-`finally` Block

```python
try:
    # code that might raise an exception
except SomeException:
    # handle the exception
else:
    # code to be executed if no exception occurs
finally:
    # code that will be executed regardless of whether an exception occurred
```

## Raising Exceptions

```python
def calculate_age(age):
    if age < 0:
        raise ValueError("Age cannot be negative")
    return age * 2
```

## Custom Exception Classes

```python
class MyCustomError(Exception):
    def __init__(self, message):
        self.message = message

try:
    if something_bad:
        raise MyCustomError("This is a custom exception")
except MyCustomError as e:
    print(f"Custom exception: {e.message}")
```

## Best Practices

- Be specific in the exceptions you catch to avoid masking unexpected errors.
- Use the `else` clause when you have code that should run only if no exceptions are raised.
- Use the `finally` clause to ensure cleanup code always runs, whether an exception occurred or not.
- Avoid using bare `except` clauses, as they can catch unexpected exceptions and make debugging difficult.

## Resources

- [Python Documentation on Errors and Exceptions](https://docs.python.org/3/tutorial/errors.html)
- [Real Python - Python Exceptions: An Introduction](https://realpython.com/python-exceptions/)
- [Python Exception Handling Techniques](https://www.datacamp.com/community/tutorials/exception-handling-python)