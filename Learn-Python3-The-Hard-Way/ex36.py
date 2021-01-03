# Exercise 36
# Designing and Debugging

# Homework
# Now write a game similar to the one that I created in the last exercise.
# Before you start coding you must draw a map for your game. Create the rooms, monsters, and traps
# that the player must go through on paper before you code.

from sys import exit

def game_start():
    name, weapon, armor = create_character()
    adventure(name, weapon, armor)

def create_character():
    """Define character name and choose some equipments using text input."""
    name = input("What is your name, adventurer? ")
    print(f"So your name is {name}.")

    weapon, armor = '', ''
    while weapon != 'sword' and weapon != 'dagger':
        weapon = input("Choose your weapon(sword/ dagger): ")
        if weapon in ['sword', 'dagger']:
            print(f"You chose a {weapon}!")
        else:
            print("Beep-beep, choose again.")

    while armor != 'heavy armor' and armor != 'light armor':
        armor = input("Choose your armor(heavy armor/ light armor): ")
        if armor in ['heavy armor', 'light armor']:
            print(f"You chose a {armor}!")
        else:
            print("Beep-beep, choose again.")

    print(f"{name}, You've got a {weapon} and a {armor}")
    print("Here begins your adventure!")
    print("*" * 15)
    print("*" * 15)

    return name, weapon, armor

def adventure(name, weapon, armor):
    print("There are a bear cave and a rabbit hole in front of you.")
    print("However, a rabbit hole is UNDER CONSTRUCTION.")
    go_bear_cave(name, weapon, armor)

def go_bear_cave(name, weapon, armor):
    import random

    def inflict_damage(u_hp, u_attack, u_speed, u_crit, u_defense,
                         b_hp, b_attack, b_speed, b_crit, b_defense):
        is_user_crit = (u_crit > random.random())
        is_bear_crit = (b_crit > random.random())

        user_damage = u_attack + (u_attack * is_user_crit * 1.5)\
                        - (u_attack * b_defense * random.random())
        bear_damage = b_attack + (b_attack * is_bear_crit * 1.5)\
                        - (b_attack * u_defense * random.random())

        #u_run_prob, b_run_prob = calculate_runaway_prob(u_speed, b_speed)

        return user_damage, bear_damage

    def defended_damage():
        pass

    def get_runaway_prob(u_run, u_speed, b_run, b_speed):
        if u_speed > b_speed:
            u_runaway_prob = 0.5 + (u_speed - b_speed) * 0.1
            b_runaway_prob = 0.5 - (u_speed - b_speed) * 0.1

        elif u_speed < b_speed:
            u_runaway_prob = 0.5 - (u_speed - b_speed) * 0.1
            b_runaway_prob = 0.5 + (u_speed - b_speed) * 0.1

        else:
            u_runaway_prob, b_runaway_prob = 0.5, 0.5

        u_runaway_success = (random.random() < u_runaway_prob)
        b_runaway_success = (random.random() < b_runaway_prob)

        return u_runaway_success, b_runaway_success

    bear_hp, bear_attack, bear_speed, bear_crit_rate = 20, 3.5, 5, 0.15
    user_hp, user_attack, user_speed, user_crit_rate = 0, 0, 0, 0

    if armor == 'heavy armor':
        user_hp, user_speed = 25, 3
    else:
        user_hp, user_speed = 15, 8

    if weapon == 'sword':
        user_attack, user_crit_rate = 5, 0.35
    else:
        user_attack, user_crit_rate = 3, 0.6

    print("You have entered a bear cave.")
    print("*"*15+"\n"+"*"*15)
    print("-----Bear Cave-----")
    print("*"*15+"\n"+"*"*15)

    give_up = False
    while bear_hp > 0 and user_hp > 0 and not give_up:
        user_move = input('\nWhich is your next move? (attack/ defend/ run): ')
        bear_move = ['attack', 'defend', 'run'][random.randint(0, 2)]

        if (user_move, bear_move) == ('attack', 'attack'):
            if user_speed > bear_speed:
                pass
            else:
                pass

        elif (user_move, bear_move) == ('attack', 'defend'):
            if user_speed > bear_speed:
                pass
            else:
                pass

        elif (user_move, bear_move) == ('attack', 'run'):
            if user_speed > bear_speed:
                pass
            else:
                pass

        elif (user_move, bear_move) == ('defend', 'attack'):
            if user_speed > bear_speed:
                pass
            else:
                pass

        elif (user_move, bear_move) == ('defend', 'defend'):
            if user_speed > bear_speed:
                pass
            else:
                pass

        elif (user_move, bear_move) == ('defend', 'run'):
            if user_speed > bear_speed:
                pass
            else:
                pass

        elif (user_move, bear_move) == ('run', 'attack'):
            if user_speed > bear_speed:
                pass
            else:
                pass

        elif (user_move, bear_move) == ('run', 'defend'):
            if user_speed > bear_speed:
                pass
            else:
                pass

        else:
            # (user_move, bear_move) == ('run', 'run'):
            pass


    if user_hp > bear_hp:
        print('Yay! You did it!')
        play_again = input("Wanna play again?(yes/ no) ")

        if play_again == 'yes':
            go_bear_cave(name, weapon, armor)

        else:
            print('Goodbye!')
            quit(0)

    else:
        print('Game Over')
        quit(0)



game_start()

# Rules for If-Statements
# 1. Every if-statement must have an else.
# 2. If this 'else' should never run because it doesn't make sense,
#    then you must use a 'die' function in the 'else' that prints out an error message and dies,
#    just like we did in the last exercise. This will find many errors.
# 3. Never nest if-statement more than two deep and always try to do them one deep.
# 4. Treat if-statements like paragraphs, where each if=elif=else grouping is like a set of sentences.
#    Put blank lines before and after.
# 5. Your Boolean tests should be simple. If they are complex, move their calculations to variables
#    earlier in your function and use a good name for the variable.

# Rules for Loops
# 1. Use a while-loop only to loop forever, and that means probably never. This only applies to Python;
#    other languages are different.
# 2. Use a for-loop for all other kinds of looping, especially if there is a fixed or limited number of
#    things to loop over.

# Tips for Debugging
# 1. Do not use a ”debugger.” A debugger is like doing a full-body scan on a sick person. You do not
#    get any specific useful information, and you find a whole lot of information that doesn’t help and
#    is just confusing.
# 2. The best way to debug a program is to use print to print out the values of variables at points in
#    the program to see where they go wrong.
# 3. Make sure parts of your programs work as you work on them. Do not write massive files of code
#    before you try to run them. Code a little, run a little, fix a little.