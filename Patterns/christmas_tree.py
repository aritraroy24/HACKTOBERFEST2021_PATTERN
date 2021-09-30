def design_tree(a=5):
    for i in range(a):
        print('\n')
        for k in range(a-i) :
                if (i-a<=0):
                    print('', end =" "),
        for j in range(-i,i+1):
            #print(j, end =" ")
            if (j==0):
                print('|', end =""),
            else :
                print('*', end =""),
    return 0            
