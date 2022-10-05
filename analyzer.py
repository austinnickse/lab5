"""Ruhi Reddy and Austin Nickse
9/21/22 Lab 04 """

import stringdata
import time

def main():
    word_set = stringdata.get_data()
    beg_time = 0
    end_time = 0

    #search each value using both methods, record time before and after
    beg_time = time.time()
    linear_search(word_set, "not_here")
    end_time = time.time()
    print("Linear search time for 'not_here':", end_time - beg_time)

    beg_time = time.time()
    binary_search(word_set, "not_here")
    end_time = time.time()
    print("Binary search time for 'not_here':", end_time - beg_time)

    beg_time = time.time()
    linear_search(word_set, "mzzzz")
    end_time = time.time()
    print("Linear search time for 'mzzzz':", end_time - beg_time)

    beg_time = time.time()
    binary_search(word_set, "mzzzz")
    end_time = time.time()
    print("Binary search time for 'mzzzz':", end_time - beg_time)

    beg_time = time.time()
    linear_search(word_set, "aaaaa")
    end_time = time.time()
    print("Linear search time for 'aaaaa':", end_time - beg_time)

    beg_time = time.time()
    binary_search(word_set, "aaaaa")
    end_time = time.time()
    print("Binary search time for 'aaaaa':", end_time - beg_time)

def linear_search(container: tuple(), element: str):
    #enumerate through tuple and check each element for equivalence
    for count, i in enumerate(container):
        if i == element:
            return count
    return -1

def binary_search(container: tuple(), element: str):
    lower = 0 #lower bound
    upper = len(container) - 1 #upper bound
    while upper >= lower:
        middle = int((upper + lower) / 2)
        if element == container[middle]:
            return middle
        elif element < container[middle]:
            upper = middle - 1
        else:
            lower = middle + 1
    return -1


if __name__ == '__main__':
    main()