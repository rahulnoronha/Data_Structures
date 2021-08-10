def Search(row, col, Array, key):
    for i in range(0,row):
        for j in range(0,col):
            if key==Array[i][j]:
                print(f"The element is found at position [ {i+1} {j+1} ]",end="\n")
                return
    print("The element was not found",end="\n")
    return
def main():
    row = int(input("Enter the number of rows in the Array\n"))
    col = int(input("Enter the number of columns in the Array\n"))
    Array = list()
    print("Enter the array elements",end="\n")
    for i in range(0,row):
        Array.append([])
        for j in range(0,col):
            Array[i].append(int(input()))
    key=int(input("Enter the search key element\n"))
    Search(row, col, Array, key)
                
if __name__=='__main__':
    main()