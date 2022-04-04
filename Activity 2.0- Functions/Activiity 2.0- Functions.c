#include <stdio.h>
float gradeSum(float grades[],int size){
    float sum = 0;
    for(int i = 0; i<size;i++){
        sum+=grades[i];
    }
    return sum;
}
float computeAverage(float total, int numberOfGrades){
    float average;
    average = total/numberOfGrades;
    return average;
}
int main(){
    float grades[5];
    printf("Please Enter 5 Grades!\n");
    for(int i = 0;i<5;i++){
        float temp;
        printf("[%d] Enter Grade: ",i+1);
        scanf("\n%f",&temp);
        if(temp > 100 || temp < 0){
            printf("Invalid Grade!\n");
            --i;
            continue;
        } else {
            grades[i] = temp;
        }
    }
    int size = sizeof(grades)/sizeof(grades[0]);
    float total = gradeSum(grades,size);
    float average = computeAverage(total,size);
    printf("Average = %.2f", average);
    return 0;
}
