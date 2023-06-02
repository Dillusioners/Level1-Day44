'''
Author - Debag101
Purpose - Counting number of cows and chickens in a farm
Date - 02 - 06 - 2023
'''

# Importing random module to generate arbitrary farm grid
import random

# This generates a 2D grid
def generate_arbitrary_farm():
    farm_grid = [] # This is the main grid
    animals = ['C', 'c', ' '] # C -> Cow, c -> chicken, ' ' -> blank area
    for i in range(11):
        temp_grid = [] # This stores the rows as they are generated 
        for j in range(11):
            temp_grid.append(random.choice(animals))
        farm_grid.append(temp_grid) # Appending the rows
    return farm_grid # Returns the grid

# Simply prints context for user to understand
def context(grid):
    print("="*21)
    print("WELCOME TO MY FARM !")
    print("="*21)
    print("Today we will count the number of cows and chickens in my farm by using the following grid !")
    for row in grid:
        print(row) # Nicely prints the grid for user info
    print("Here C symbolizes cows, c for chicken and blank means free area! Now lets count them !")


# This counts the number of each animals
def counter(grid):      
    cow_counter = chicken_counter = 0
    for row in grid:
        for element in row:
            if element == 'c': # for chicken
                chicken_counter += 1
            elif element == 'C': # for cows
                cow_counter += 1
            else: # for blank space 
                pass
    # Printing result
    print(f"Number of cows is {cow_counter} and number of chickens is {chicken_counter} ")    

# Executing the methods
def main():
    grid = generate_arbitrary_farm()
    context(grid)
    counter(grid)

# Calling main 
if __name__ == '__main__':
    main()

