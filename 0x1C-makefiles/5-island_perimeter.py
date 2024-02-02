#!/usr/bin/python3
""" Island Perimeter """


def island_perimeter(grid):
    """ Island Perimeter """
    pmt = 0
    gl = []
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            gl.append(grid[i][j])
    for i in range(len(gl)):
        if i < len(gl) - 1 and i > 0:
            if gl[i] == 0 and gl[i + 1] == 1 or gl[i] == 0 and gl[i - 1] == 1:
                pmt += 1
    if pmt % 2 == 0:
        pmt *= 2
    else:
        pmt = (pmt * 2) - 1
    return pmt
