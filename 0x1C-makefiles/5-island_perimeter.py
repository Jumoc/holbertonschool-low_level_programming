#!/usr/bin/python3

def check_surrownding(grid, x, y):
    acum = 0
    # Check on its left
    try:
        if grid[x - 1][y] == 0:
            acum += 1
    except:
        pass
    # Check on the right
    try:
        if grid[x + 1][y] == 0:
            acum += 1
    except:
        pass
    # Check on the top
    try:
        if grid[x][y + 1] == 0:
            acum += 1
    except:
        pass
    # Check on its bottom
    try:
        if grid[x][y - 1] == 0:
            acum += 1
    except:
        pass
    return acum

def island_perimeter(grid):
    perimeter = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if (grid[row][col]) == 1:
                perimeter += check_surrownding(grid, row, col)
    return perimeter