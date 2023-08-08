#!/usr/bin/python3
import random
import math

number = random.randint(-10000, 10000)
lastDigit = int(math.fmod(number, 10) if number < 0 else number % 10)

if lastDigit > 5:
    result = "and is greater than 5"
elif lastDigit == 0:
    result = "and is 0"
elif lastDigit < 6 and lastDigit != 0:
    result = "and is less than 6 and not 0"

print(f"Last digit of {number} is {lastDigit} {result}")
