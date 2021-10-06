#!/usr/bin/env python3.9

def star_pattern():
    star = '*'
    for i in range(5):
        print(" ".join(star*(i+1)))


def star_pattern_with_spaces():
    star = '*'
    max_range = 5
    for i in range(max_range):
        temp = ' ' * (max_range-i)
        for j in range(i+1):
            temp += star + ' '
        print(temp)


def python_pattern():
    word = 'PYTHON'
    for i in range(word.__len__()):
        print(" ".join(word[:i+1]))


def same_number_pattern_with_spaces():
    max_range = 5
    for i in range(max_range):
        temp = ' ' * (max_range-i)
        number = i+1
        for j in range(i+1):
            temp += str(number) + ' '
        print(temp)
        number += 1


def number_pattern_with_spaces():
    iter_count = 10
    for i in range(0, iter_count, 2):
        temp = ' ' * (iter_count-i)
        number = 0
        for j in range(i+1):
            if j > ((i+1)/2):
                number -= 1
            else:
                number = j+1
            temp += str(number) + ' '
        print(temp)


if __name__ == '__main__':
    python_pattern()
    star_pattern()
    star_pattern_with_spaces()
    same_number_pattern_with_spaces()
    number_pattern_with_spaces()
