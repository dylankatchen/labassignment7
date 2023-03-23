#include <stdlib.h>
#include <stdio.h>

void swapsPerIndex(int* numbers, int* answer,int n)
{   
    //got rid of the n-1 so the last index ,even though it is definitely in place and wont need swaps,has a number of swaps initialized
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(numbers[j]>numbers[j+1])
            {
                int temp=numbers[j];
                numbers[j]=numbers[j+1];
                numbers[j+1]=temp;
                count++;
            }
        }
        answer[i]=count;
    }
    

}

int main()
{
int arr[9]={97,  16,  45,  63,  13,  22,  7,  58,  72};
int n =sizeof(arr)/sizeof(arr[0]);
int* answer=(int*)malloc(sizeof(int)*n);
swapsPerIndex(arr,answer,n);
for(int i=0;i<n;i++)
{
    printf("index %d requires %d number of swaps\n",i,answer[i]);
}

}