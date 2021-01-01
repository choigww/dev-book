# Exercise 16
# Reading and Writing Files

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
