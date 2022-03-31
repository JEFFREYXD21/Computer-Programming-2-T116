#include <stdio.h>
int main(){
    int min = 1,max = 1;
    for (int i = 1; i <= 10; i++)
    {
        int temp;
        printf("[%d] Input Number: ",i);
        scanf("%d",&temp);
        if(temp > 0){
            if(temp > max){
                max = temp;
            }
            if(temp < min){
                min = temp;
            }
        } else {
            printf("This is an invalid input. Try Again.\n");
            --i;
            continue;
        }

    }
    printf("Min: %d",min);
    printf("\nMax: %d",max);
    return 0;
}
