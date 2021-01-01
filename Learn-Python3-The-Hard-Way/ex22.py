# Exercise 22
# What Do You Know So Far?

# Review Section

'''ex1.py
print() - built-in function to print
'''

'''ex2.py
# = comment
'''

'''ex3.py - order of operations in Python
print("Roosters", 100.0 - 25.0 * 3.0 % 4.0)

find True/False using >, >=, <, <=, ==
print(3 + 2 < 5 - 7)
'''

'''ex4.py - calculating and printing variables
cars = 100
space_in_a_car = 4.0
#space_in_a_car = 4
drivers = 30
passengers = 90
cars_not_driven = cars - drivers
cars_driven = drivers
carpool_capacity = cars_driven + space_in_a_car
average_passengers_per_car = passengers / cars_driven

print("There are", cars, "cars available.")
print("There are only", drivers, "drivers available.")
print("There will be", cars_not_driven, "empty cars today.")
print("We can transport", carpool_capacity, "people today.")
print("We have", passengers, "to carpool today.")
print("We need to put about", average_passengers_per_car,
      "in each car.")
'''

'''ex5.py - formatting string
my_name = "Zed A. Shaw"
my_age = 35 #Not a lie
my_height = 74 # inches
my_weight = 180 #lbs
my_eyes = 'Blue'
my_teeth = 'White'
my_hair = 'Brown'

print(f"Let's talkek about {my_name}.")
print(f"He's {my_height} inches tall.")
print(f"He's {my_weight} pounds heavily.")
print("Actually that's not too heavy.")
print(f"He's got {my_eyes} eyes and {my_hair} hair.")
print(f"His teeth are usually {my_teeth} depending on the coffee.")

# this line is tricky, try to get it exactly right
total = my_age + my_height + my_weight
print(f"If I add {my_age}, {my_height}, and {my_weight} I get {total}.")
'''

'''ex6.py - formatting string in other way
hilarious = False
joke_evaluation = "Isn't that joke so funny? {}"
print(joke_evaluation.format(hilarious))
'''

'''ex7.py - some tricks of print() function
print("Mary had a little lamb.")
print("Its fleece was white as {}.".format('snow'))

print("." * 10) # what'd that do?

print(end1 + end2 + end3 + end4 + end5 + end6, end="")
print(end7 + end8 + end9 + end10 + end11 + end12)
'''

'''ex8.py - Input different types of variables into string format
formatter = "{} {} {} {}"

print(formatter.format(1, 2, 3, 4))
print(formatter.format("one", "two", "three", "four"))
print(formatter.format(True, False, False, True))
'''

'''ex9.py - printing multiple lines
months = "Jan\nFeb\nMar\nApr\nMay\nJun\nJul\nAug"

print("""
There's something going on here.
With the three double-quotes.
We'll be able to type as much as we like.
Even 4 lines if we want, or 5, or 6.
""")
'''

'''ex10.py
fat_cat = """
I'll do a list:
\t* Cat food
\t* Fishes
\t* Catnip\n\t* Grass
"""

### Escape Sequences
print('backlash \\')
print('single-quote \'')
print('double-quote \"')
print('ASCII bell(BEL) \a')
print('ASCII backspace (BS) \b')
print('ASCII formfeed (FF) \f')
#print('Character named name in Unicode Database \N{name}')
print('Carriage return \r')
print('Horizontal Tab (TAB) \t')
#print('Character with 16-bit hex value xxxx \uxxxx')
#print('Character with 32-bit hex value xxxxxxxx \Uxxxxxxxx')
print('ASCII vertical tab (VT) \v')
#print('Character with octal value ooo \ooo')
#print('Character with hex value hh \xhh')
'''

'''ex11.py - asking questions using input()

print("How old are you?", end=' ')
age = input()
print("How tall are you?", end=' ')
height = input()
print("How much do you weight?", end=' ')
weight = input()

print(f"So, you're {age} old. {height} tall and {weight} heavy.")
'''

'''ex12.py - prompting in using input()

age = input("How old are you? ")
height = input("How tall are you? ")
weight = input("How much do you weight? ")

print(f"So, you are {age} old, "
      f"{height} tall and "
      f"{weight} heavy.")

'''

'''ex13.py - sys.argv
from sys import argv
# read the WYSS section for how to run this
script, first, second, third = argv

print("The script is called:", script)
print("Your first variable is:", first)
print("Your second variable is:", second)
print("Your third variable is:", third)
'''

'''ex14.py - prompting and passing

prompt = '> '

print(f"Hi, {user_name}, I'm the {script} script.")
print("I'd like to ask you a few questions.")
print(f"Do you like me {user_name}?")
likes = input(prompt)

print(f"Where do you live {user_name}?")
lives = input(prompt)

print("What kind of computer do you have?")
computer = input(prompt)

print(f"""
Alright, so you said {likes} about liking me.
You live in {lives}. Not sure where that is.
And you have a {computer} computer. Nice.
""")

'''

'''ex15.py - reading files
from sys import argv
script, filename = argv

txt = open(filename)

print(f"Here's your file {filename}")
print(txt.read())

print("Type the filename again:")
file_again = input("> ")

txt_again = open(file_again)

print(txt_again.read())
'''

'''ex16.py - reading, writing, seeking and closing file

# List of commands
# close - Closes the file.
# read - Reads the contents of the file.
# readLine - Reads just one line of a text file.
# truncate - Empties the file.
# write('stuff') - Writes "stuff" to the file.
# seek(0) - Moves the read/write location to the beginning of the file.

from sys import argv

script, filename = argv

print(f"We're going to erase {filename}.")
print("If you don't want that, hit CTRL-C (^C).")
print("If you do want that, hit RETURN.")

input("?")

print("Opening the file...")
target = open(filename, 'w')

print("Truncating the file. Goodbye!")
#target.truncate()

print("Now I'm going to ask you for three lines.")

line1 = input("line 1: ")
line2 = input("line 2: ")
line3 = input("Line 3: ")

print("I'm going to write these to the file.")

target.write(line1+"\n"+line2+"\n"+line3+"\n")

print("And finally, we close it.")
target.close()
'''

'''ex17.py - More on Files

from sys import argv
from os.path import exists

# copying text - one line version
# open(argv[2], 'w').write(open(argv[1]).read())

# 파일을 open한 뒤 이어서 바로 읽는 경우
# --- open(from_file).read()
# 별도로 닫아줄 필요 없다, open() -> read() 실행 후 자동으로 close된다.

script, from_file, to_file = argv

print(f"Copying from {from_file} to {to_file}")

# we could do these two on one lne, how?
in_file = open(from_file)
indata = in_file.read()

print(f"The input file is {len(indata)} bytes long")

print(f"Does the output file exist? {exists(to_file)}")
print("Ready, hit RETURN to continue, CTRL-C to abort.")
input('waiting for input...')

out_file = open(to_file, 'w')
out_file.write(indata)

print('Alright, all done.')

out_file.close()
in_file.close()
'''

'''ex18.py - Names, Variables, Code, Functions

def print_two(*args):
    arg1, arg2 = args
    print(f"arg1: {arg1}, arg2: {arg2}")

# ok, that *args is actually pointless, we can just do this
def print_two_again(arg1, arg2):
    print(f"arg1: {arg1}, arg2: {arg2}")

# this just takes one argument
def print_one(arg1):
    print(f"arg1: {arg1}")

# this one takes no arguments
def print_none():
    print("I got nothin'.")

'''

'''ex19.py - Functions and Variables
def cheese_and_crackers(cheese_count, boxes_of_crackers):
    print(f"You have {cheese_count} cheeses!")
    print(f"You have {boxes_of_crackers} boxes of crackers!")
    print("Man that's enough for a party!")
    print("Get a blanket.\n")
'''

'''ex20.py - Functions and Files
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
'''

'''ex21.py - Functions can return something
def add(a, b):
    print(f"ADDING {a} + {b}")
    return a + b

def subtract(a, b):
    print("SUBTRACTING {a} - {b}")
    return a - b

def multiply(a, b):
    print("MULTIPLYING {a} * {b}")
    return a * b

def divide(a, b):
    print(f"DIVIDING {a} / {b}")
    return a / b
    
what = add(age, subtract(height, multiply(weight, divide(iq, 2))))
print("That becomes: ", what, "Can you do it by hand?")
'''
