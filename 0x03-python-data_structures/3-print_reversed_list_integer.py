st_integer(my_list=[]):
    if my_list is None:
        return
    for i in reversed(my_list):
        print('{:d}'.format(i))

