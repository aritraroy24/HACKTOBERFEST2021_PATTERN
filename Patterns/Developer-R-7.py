
# Pattern Reverse Pyramid of Numbers

# output
# 1
# 21                                                 s/pscore6
# 321
# 4321
# 54321

rows = 10
for row in range(1, rows):
    for column in range(row, 0, -1):
        print(column, end='')
    print('')