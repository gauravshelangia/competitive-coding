#!/usr/bin/python3
def displayPathtoPrincess(n,grid):
    #print all the moves here
    x_m,y_m,x_p,y_p=0,0,0,0
    # get position of BOT -- m and Princess -- p
    for i in range(len(grid)):
        in_grid = list(grid[i])
        for j in range(len(in_grid)):
            if in_grid[j] == 'p':
                x_p = i
                y_p = j
            if in_grid[j] == 'm':
                x_m = i
                y_m = j
    # +ve move_x means UP and -ve move_x means DOWN
    # +ve move_y means LEFT and -ve move_y means RIGHT
    move_x = x_m - x_p
    move_y = y_m - y_p
    if move_y < 0 :
        print ("RIGHT"*abs(move_y))
    elif move_y > 0:
        print ("LEFT"*move_y)

    if move_x < 0:
        print ("DOWN"*abs(move_x))
    elif move_x > 0:
        print ("UP"*move_x)

m = int(input())
grid = []
for i in range(0, m):
    grid.append(input().strip())

displayPathtoPrincess(m,grid)
