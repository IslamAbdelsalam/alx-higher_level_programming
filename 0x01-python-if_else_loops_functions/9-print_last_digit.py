#!/usr/bin/python3
def print_last_digit(number):
    print(int((abs(number) % 10) * -1 if number < 0 else number % 10))
    return (int((abs(number) % 10) * -1 if number < 0 else number % 10))
