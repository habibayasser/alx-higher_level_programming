#!/usr/bin/python3

def max_integer(my_list=[]):
    if len(my_list) == 0:
        return (non)
    else:
        is_max = my_list[0]
        for i in range(len(my_list)):
            if my_list[i] > is_max:
                is_max = my_list[i]

        return is_max
