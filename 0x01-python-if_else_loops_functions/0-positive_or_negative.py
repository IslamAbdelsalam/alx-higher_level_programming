#!/usr/bin/python3
import random
number = random.randint(-10, 10)
print(f"{number} {'is positive' if number > 0 else 'is negative' if number < 0 else 'is zero'}")