def pattern(n):
     
    # This is upper
    # half of pattern
    for i in range(1, n + 1):
        for j in range(1, 2 * n + 1):
             
            # Left part of pattern
            if (i < j):
                print("", end = " ");
            else:
                print("*", end = "");
                 
            # Right part of pattern
            if (i <= ((2 * n) - j)):
                print("", end = " ");
            else:
                print("*", end = "");
        print("");
     
    # This is lower
    # half of pattern
    for i in range(1, n + 1):
        for j in range(1, 2 * n + 1):
             
            # Left part of pattern
            if (i > (n - j + 1)):
                print("", end = " ");
            else:
                print("*", end = "");
             
            # Right part of pattern
            if ((i + n) > j):
                print("", end = " ");
            else:
                print("*", end = "");
        print("");
 
# Driver Code
pattern(7);
