A=[]
size=int(input("Enter size : "))
for i in range(0,size):
    print("Enter value ",i," : ")
    temp=int(input())
    A.append(temp)
print("Enter key : ")
key=int(input())
for i in range(0,size):
    for j in range(i+1,size):
        if(A[i]+A[j])==key:
            print(A[i],A[j])

# Enter size : 5
# Enter value  0  : 
# 4
# Enter value  1  : 
# 2
# Enter value  2  : 
# 6
# Enter value  3  : 
# 1
# Enter value  4  : 
# 9
# Enter key : 
# 6
# 4 2