if __name__ == '__main__':
     
    n = int(input("Enter the number : "))
    for i in range(1, n + 1):
        for j in range(1, i + 1):
            print(chr(ord('A') + j - 1),
                             end = " ");
 
        print("");
