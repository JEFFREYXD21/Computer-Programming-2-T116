#include <stdio.h>
#include <stdlib.h>

int main(){
FILE*fptr;
char n[500];
int i, id, total, average, student;
float grade;
int math, science, english;

fptr=fopen("gante.txt","w");
if(fptr==NULL){
printf("Error!");
exit(1);
}
printf("Number of students: ");
scanf("%d", &student);

for(i=0; i<student; i++){
    printf("\nStudent name: ");
    scanf("\n%[^\n]s", n);
    printf("Student ID#: ");
    scanf("%d", &id);
    printf("Math grade: ");
    scanf("%d", &math);
    printf("Science grade: ");
    scanf("%d", &science);
    printf("English grade: ");
    scanf("%d", &english);
total=math+science+english;
printf("Total grade = %d", total);
average=(math+science+english)/3;
printf("\nGrade average = %d\n", average);


}

fprintf(fptr,"%s %d %d %d %d %d %d %d", n, id, math, science, english, average, total);
fclose(fptr);

}