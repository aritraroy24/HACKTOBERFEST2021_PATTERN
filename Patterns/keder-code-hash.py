class pattern:
    def __init__(self,rows):
        self.rows=rows
    def prittyPrint(self,num):
        if(num<10):
            return " "+str(num)
        else:
            return num
    def printPattern(self):
        k,l,m,z=0,0,0,0
        for i in range((self.rows*2)-1):
            if(i>0 and i<(self.rows)):
                for j in range((self.rows*2)-1):
                    if(j>k and j<((self.rows*2)-2-k)):
                        print(self.prittyPrint(self.rows-1-k),end=' ')
                    elif(j==0 or j==((self.rows*2)-2)):
                        print(self.prittyPrint(self.rows),end=' ')
                    elif(j<=k and j!=0):
                        print(self.prittyPrint(self.rows-z-1),end=' ')
                        z=z+1
                    else:
                        print(self.prittyPrint(self.rows-i+1+m),end=' ')
                        m=m+1
                print(end="\n")
                k=k+1
                z=0
                m=0
            elif(i>self.rows-1 and i<(self.rows*2)-2):
                for j in range((self.rows*2)-1):
                    if(j>self.rows-3-l and j<self.rows+1+l):
                        print(self.prittyPrint(l+2),end=' ')
                    elif(j==0 or j==((self.rows*2)-2)):
                        print(self.prittyPrint(self.rows),end=' ')
                    elif(j<=self.rows-3-l and j!=0):
                        print(self.prittyPrint(self.rows-1-z),end=' ')
                        z=z+1
                    else:
                        print(self.prittyPrint(j-(self.rows-2)),end=' ')
                        m=m+1
                print(end="\n")
                l=l+1
                z=0
                m=0
            else:
                for j in range((self.rows*2)-1):
                        print(self.prittyPrint(self.rows),end=' ')
                print(end="\n") 

if __name__ == "__main__":
    print("Enter the row number(dimension): ")
    row=int(input())
    pat=pattern(row)
    pat.printPattern()

# Author-Keder nath Mallick
# Github Link-https://github.com/keder-code-hash/shellScript/