#!/usr/bin/python3
"""Module that checks the perimeter of an island"""


def check_surrownding(grid, x, y):
    """Checks surrounding for every land zone"""
    acum = 0
    # Check on its left
    try:
        if grid[x - 1][y] == 0:
            acum += 1
    except:
        acum += 1
    # Check on the right
    try:
        if grid[x + 1][y] == 0:
            acum += 1
    except:
        acum += 1
    # Check on the top
    try:
        if grid[x][y + 1] == 0:
            acum += 1
    except:
        acum += 1
    # Check on its bottom
    try:
        if grid[x][y - 1] == 0:
            acum += 1
    except:
        acum += 1
    return acum


def island_perimeter(grid):
    """Return the island's perimeter"""
    perimeter = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if (grid[row][col]) == 1:
                perimeter += check_surrownding(grid, row, col)
    return perimeter
