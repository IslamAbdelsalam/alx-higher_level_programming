#!/usr/bin/python3

def safe_print_integer(value):
    try:
        print("{:d}".format(value))
    except (ValueError, TypeError):
        return False
    return True


# i = 10.5
# m = 'solo'
# test_none = None

# res = safe_print_integer(i)
# print(res)

# res = safe_print_integer(m)
# print(res)

# res = safe_print_integer(test_none)
# print(res)
