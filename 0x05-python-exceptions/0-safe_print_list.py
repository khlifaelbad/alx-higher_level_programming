#!/usr/bin/python3
def safe_print_list(my_list=[], x=0):
        res = 0
    try:
        for num in my_list:
            if (res >= x):
                break
            print("{}".format(num), end="")
            res += 1
        print("".format())
        return res
    except ValueError:
        print("ValueError error")

