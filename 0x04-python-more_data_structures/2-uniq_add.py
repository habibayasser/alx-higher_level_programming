#!/usr/bin/python3
def uniq_add(my_list=[]):
    n = 0
    for e in set(my_list):
        n += e
    return n
