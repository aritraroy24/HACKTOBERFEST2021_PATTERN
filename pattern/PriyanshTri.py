print('\n'.join(' '.join(*zip(*row)) for row in ([["*" if row==0 and col%3!=0 or row==1 and col%3==0 or row-col==2 or row+col==8 else " " for col in range(7)] for row in range(6)])))
