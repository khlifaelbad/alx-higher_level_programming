#!/usr/bin/python3
def number_of_lines(filename=""):
    res = 0
    with open(filename, encoding="utf-8") as fd:
        for line in fd:
            res += 1
    return res

