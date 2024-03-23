#include<stdio.h>
int main()
{
    int size,i=0,key=0,j=0;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
        printf("Enter element %d : \n",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter a key-sum : ");
    scanf("%d",&key);
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if((arr[i]+arr[j])==key)
            printf("%d,%d\n",arr[i],arr[j]);
        }
    }
}
/*Output
Enter the size of array : 5
Enter element 0 : 
4
Enter element 1 : 
2
Enter element 2 : 
56
Enter element 3 : 
8
Enter element 4 : 
2
Enter a key-sum : 6
4,2
4,2 */