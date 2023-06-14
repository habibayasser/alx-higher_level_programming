#!/usr/bin/python3
def search_replace(my_list, search, replace):
    def se(element):
        return element if element != search else replace
    return list(map(se, my_list))
