#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size=0,i=0,res=-1,key=0;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int *arr=(int *)malloc(size*sizeof(int));
    for(i=0;i<size;i++)
    {
        printf("Enter element %d : \n",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter a key : ");
    scanf("%d",&key);
    for(i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            res=i;
            break;
        }
    }
    if(res!=-1)
    printf("%d found at %d",key,res);
    else
    printf("%d not found",key);
}
/*Output
Enter size of array : 5
Enter element 0 : 
5
Enter element 1 : 
3
Enter element 2 : 
2
Enter element 3 : 
7
Enter element 4 : 
3
Enter a key : 7
7 found at 3  */