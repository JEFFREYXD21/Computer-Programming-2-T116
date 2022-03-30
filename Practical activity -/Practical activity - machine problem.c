#include <stdio.h>
int validate(int ic[3][2],int id, int pin){
    int isValid = 0;
    for(int i = 0; i<3; i++){
        if(id == ic[i][0] && pin == ic[i][1]){
            isValid = 1;
        }
    }
    return isValid;
}
int main(){
    int ic[3][2] = {{112101,456},{112101,221},{112101,123}};
    int id,pin;
    printf("Enter ID Number: ");
    scanf("%d",&id);
    printf("Enter PIN: ");
    scanf("%d",&pin);
    validate(ic,id,pin) ? printf("You have successfully logged in\nID#:%d",id) : printf("Invalid ID/PIN!");

    return 0;
}
