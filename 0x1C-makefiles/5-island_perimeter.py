#!/usr/bin/python3
""" find the perimeter of the island in the grid """


def island_perimeter(grid):
    """
    calculate the perimeter of the island by iterating over
    the grid and each time it will find 1 which repersents the land
    it increase the number of lands 1 and after that we will calculate
    the perimeter of the land using this equation (number_lands + 1) * 2
    """
    number_lands = 0
    for list in grid:
        for cell in list:
            if cell == 1:
                number_lands += 1
    return (number_lands + 1) * 2
