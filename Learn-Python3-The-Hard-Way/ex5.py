# Exercise 5
# More Variables and Printing

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


# Study Drills
# Try to write some variables that convert the inches and pounds to centimeters and kilograms.

my_weight_kilogram = my_weight * 2.2
my_height_centimeter = my_height * 2.54
#print(f"My weight in kilogram is {my_weight_kilogram}, my height in centimeter is {my_height_centimeter}.")
print(f"My weight in kilogram is {round(my_weight_kilogram)}, my height in centimeter is {my_height_centimeter}.")
