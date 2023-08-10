#!/usr/bin/python3
def remove_char_at(str, n):
    nstr = str
    if (n >= 0):
        nstr = str[:n] + str[(n+1):]
        return (nstr)
    else:
        return (nstr)
