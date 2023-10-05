#!/usr/bin/python3
'''Square class will take a size and check it '''


class Square:

    '''take a square size'''

    def __init__(self, size=0):
        '''Check square size is  valid or not.

        Args:
        ----
                size (int): the size of the square
        '''

        if isinstance(size, int):
            if size < 0:
                raise ValueError('size must be  >= 0')
        else:
            raise TypeError('size must be an integer')

        self.__size = size
