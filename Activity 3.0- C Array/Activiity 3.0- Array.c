#include <stdio.h>

int arraySum(int *arr,int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main(){
    int arr[10], count;
    printf("Enter the size of the Array: ");
    scanf("%d",&count);
    if(count >= 5 && count <= 10){
        for(int i = 1; i <= count; i++){
            printf("Enter Element %d: ",i);
            scanf("%d",&arr[i-1]);
        }
    } else {
        printf("Array size must be 5-10!\n");
        return -1;
    }
    printf("Sum of all array Elements = %d", arraySum(arr,count));
    return 0;
}
