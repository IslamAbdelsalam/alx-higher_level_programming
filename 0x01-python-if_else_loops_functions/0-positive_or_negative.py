#!/usr/bin/python3
import random
number = random.randint(-10, 10)

if number > 0:
    p = "is positive"
elif number < 0:
    p = "is negative"
else:
    p = "is zero"
print(number, p)
