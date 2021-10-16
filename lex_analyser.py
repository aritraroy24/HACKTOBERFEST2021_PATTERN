

def isKeyWord(string):
    found = 0
    keywords = ["auto","break","case","char","const","continue","default",
							"do","double","else","enum","extern","float","for","goto",
							"if","int","long","register","return","short","signed",
							"sizeof","static","struct","switch","typedef","union",
							"unsigned","void","volatile","while"]

    for i in range (0 , 32):
        if keywords[i] == string:
            # print(string)
            found = 1
            break
  
    if found == 1:
        return True
    
def isOperation(word):
    found = 0
    operations = ["+" , "-" , "*" , "/" , "=" , "%"]
    for i in range(0 ,6):
        if operations[i] == word:
            found = 1
            break

    if found != 0:   
        return True
    # else:
    #     return False




if __name__ == "__main__":
    
    list = []
    f = open("program.txt" , "r")
    temp = []

    for lines in (f):
        temp.append(lines) 
    for lines in range(len(temp)):
            
        temp2 = temp[lines].split(' ')    
            
        list.append(temp2)


    
    print(list)


    for i in range(len(list)):
        
        for j in range(len(list)):
            
            # print(list[i][j])    
            
            
            if list[i][j] != "/n" or list[i][j] != " " or list[i][j] != ",":

                keyword_check = isKeyWord(list[i][j])
            

                operation_check = isOperation(list[i][j])
            
                if keyword_check == True:
                    print(f"{list[i][j]} is a KeyWord")

                elif operation_check == True:
                    print(f"{list[i][j]} is operator")
                else:
                    print("no match")
    
            else:
                pass
    
    
    
    
    
    
    
    
    
    
    
    # for i in range(len(data)):
        
    #     check = isKeyWord(data[i])

    #     if check == True:
    #         print(f"{data[i]} is a KeyWord")
    #     else:
    #         print(f"{data[i]} Not a Key Word")

