#!/usr/bin/python3
""" island_perimeter function module """


def island_perimeter(grid):
    """ returns the perimeter of the island
    described in rid """
    if not grid:
        return 0

    num = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if (j == 0 or j == len(grid[i]) - 1) and grid[i][j]:
                num += 1
            if j + 1 < len(grid[i]) and grid[i][j] != grid[i][j + 1]:
                num += 1
            if (i == 0 or i == len(grid) - 1) and grid[i][j]:
                num += 1
            elif i + 1 < len(grid) and grid[i][j] != grid[i + 1][j]:
                num += 1

    return num


if __name__ == "__main__":
    grid = [
            [0, 0, 0, 0, 0, 0],
            [0, 1, 0, 0, 0, 0],
            [0, 1, 0, 0, 0, 0],
            [0, 1, 1, 1, 0, 0],
            [0, 0, 0, 0, 0, 0]
            ]
    print(island_perimeter(grid))
