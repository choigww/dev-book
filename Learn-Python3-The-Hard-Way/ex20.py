# Exercise 20
# Functions and Files

from sys import argv

script, input_file = argv

def print_all(f):
    print(f.read())

def rewind(f):
    # read point를 처음으로 되돌아간다
    # 한 글자 단위로 이동, f.seek(1)은 첫글자 빠짐.
    f.seek(0)
    #f.seek(1)

def print_a_line(line_count, f):
    print(line_count, f.readline())

current_file = open(input_file)

print("First let's print the whole file:\n")

print_all(current_file)

print("Now let's rewind, kind of like a tape.")

rewind(current_file)

print("Let's print three lines:")

current_line = 1
print_a_line(current_line, current_file)

current_line = current_line + 1
print_a_line(current_line, current_file)

current_line = current_line + 1
print_a_line(current_line, current_file)
