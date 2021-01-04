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

    exit_button = False

    while not exit_button:
        wanna_play_again = input("Wanna play again?(y/n) ")
        if wanna_play_again == 'y':
            keep_or_reset = input("Wanna create new character?(y/n) ")

            if keep_or_reset == 'y':
                name, weapon, armor = create_character()
                adventure(name, weapon, armor)

            else:
                adventure(name, weapon, armor)

        else:
            print('Byebye!')
            exit_button = True


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

    def is_user_faster(u_speed, b_speed):
        return u_speed > b_speed

    def inflict_damage(attack, crit, who):
        is_crit = (crit > random.random())
        damage = round(attack + (attack * is_crit * 1.5), 2)
        if is_crit:
            print(f"{who} made a critical hit!!! - damage: {damage}")

        return damage

    def defend_damage(opponent_dmg, who):
        guard_rate = random.random()
        print(f"{who} guarded the attack! {round((1-guard_rate)*100, 2)}% damage reduced.")
        return round(opponent_dmg * guard_rate, 2)

    def run_away(u_speed, b_speed, who):
        if u_speed > b_speed:
            u_runaway_prob = 0.1 + (u_speed - b_speed) * 0.05
            b_runaway_prob = 0.1 - (u_speed - b_speed) * 0.05

        elif u_speed < b_speed:
            u_runaway_prob = 0.1 - (u_speed - b_speed) * 0.05
            b_runaway_prob = 0.1 + (u_speed - b_speed) * 0.05

        else:
            u_runaway_prob, b_runaway_prob = 0.1, 0.1

        u_runaway_success = (random.random() < u_runaway_prob)
        b_runaway_success = (random.random() < b_runaway_prob)

        if who == 'user':
            return u_runaway_success
        else:
            return b_runaway_success

    bear_hp, bear_attack, bear_speed, bear_crit_rate = 20, 3.5, 5, 0.15

    if armor == 'heavy armor':
        user_hp, user_speed = 25, 3
    else:
        user_hp, user_speed = 15, 8

    if weapon == 'sword':
        user_attack, user_crit_rate = 5, 0.35
    else:
        user_attack, user_crit_rate = 3, 0.6

    bear = {
        'hp' : bear_hp,
        'attack' : bear_attack,
        'crit_rate' : bear_crit_rate,
        'speed' : bear_speed,
        'name' : 'bear'
    }
    user = {
        'hp': user_hp,
        'attack': user_attack,
        'crit_rate': user_crit_rate,
        'speed': user_speed,
        'name' : name
    }

    print("You have entered a bear cave.")
    print("*"*15+"\n"+"*"*15)
    print("-----Bear Cave-----")
    print("*"*15+"\n"+"*"*15)

    while bear['hp'] > 0 and user['hp'] > 0:
        print(f"User HP: {user['hp']} / Bear HP: {bear['hp']}")
        user_move = input('\nWhich is your next move? (attack/ defend/ run): ')
        bear_move = ['attack', 'defend', 'run'][random.randint(0, 2)]

        if is_user_faster(user_speed, bear_speed):
            first_mover, second_mover = user, bear
            first_mover['move'] = user_move
            second_mover['move'] = bear_move
        else:
            first_mover, second_mover = bear, user
            first_mover['move'] = bear_move
            second_mover['move'] = user_move

        if first_mover['move'] == 'attack':

            if second_mover['move'] == 'defend':
                second_mover['hp'] -= defend_damage(inflict_damage(first_mover['attack'],
                                                 first_mover['crit_rate'],
                                                first_mover['name']),
                                                    second_mover['name'])
            else:
                second_mover['hp'] -= inflict_damage(first_mover['attack'],
                                                 first_mover['crit_rate'],
                                                first_mover['name'])

            if second_mover['hp'] <= 0:
                continue

            if second_mover['move'] == 'attack':
                first_mover['hp'] -= inflict_damage(second_mover['attack'],
                                                    second_mover['crit_rate'],
                                                    second_mover['name'])

            else:
                if run_away(first_mover['speed'], second_mover['speed'], second_mover['name']):
                    print(f"{second_mover['name']} ran away!")
                    quit(0)

                else:
                    print(f"{second_mover['name']} failed to run away!")


        elif first_mover['move'] == 'defend':

            if second_mover['move'] == 'attack':
                first_mover['hp'] -= defend_damage(inflict_damage(second_mover['attack'],
                                                                  second_mover['crit_rate'],
                                                                  second_mover['name']),
                                                                first_mover['name'])

            elif second_mover['move'] == 'defend':
                print('Both tried to defend, nothing happened.')

            else:
                if run_away(first_mover['speed'], second_mover['speed'], second_mover['name']):
                    print(f"{second_mover['name']} ran away!")
                    quit(0)
                else:
                    print(f"{second_mover['name']} failed to run away!")

        else:

            if run_away(first_mover['speed'], second_mover['speed'], first_mover['name']):
                print(f"{first_mover['name']} ran away!")
                quit(0)
            else:
                print(f"{first_mover['name']} failed to run away!")

            if second_mover['move'] == 'attack':
                first_mover['hp'] -= inflict_damage(second_mover['attack'],
                                                    second_mover['crit_rate'],
                                                    second_mover['name'])

            elif second_mover['move'] == 'defend':
                print(f"{second_mover['name']} tried to defend, but failed.")

            else:
                if run_away(first_mover['speed'], second_mover['speed'], second_mover['name']):
                    print(f"{second_mover['name']} ran away!")
                    quit(0)
                else:
                    print(f"{second_mover['name']} failed to run away!")

    if bear['hp'] <= 0:
        print('Yay! You SLAYED the bear!')

    if user['hp'] <= 0:
        print('Game Over')

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