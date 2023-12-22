#!/usr/bin/python3
""" find the perimeter of the island in the grid """


def island_perimeter(grid):
    """
    calculate the perimeter of the island by iterating over
    the grid and when it will find number 1 in the cell it
    will check if there is any number 1 around it and if there is
    it will subtracket the number_lands by 1
    """
    number_lands = 0
    rows = len(grid)
    columns = len(grid[0])

    for row in range(rows):
        for column in range(columns):
            if grid[row][column] == 1:
                number_lands += 4
                if (row + 1 != rows) and (
                        grid[row + 1][column] == 1):
                    number_lands -= 1

                if (row != 0) and (grid[row - 1][column] == 1):
                    number_lands -= 1

                if (column + 1 != columns) and (grid[row][column + 1] == 1):
                    number_lands -= 1

                if (column != 0) and (grid[row][column - 1] == 1):
                    number_lands -= 1
    return number_lands
