#include <stdio.h>
void decToOct(int num){
    int i = 0;
    int oct[100];
    while (num)
    {
        oct[i] = num%8;
        num/=8;
        i++;
    }
    printf("\nOctal: ");
    while (i--)
    {
        printf("%d",oct[i]);
    }

}
void decToBin(int num){
    int i = 0;
    int bin[100];
    while (num)
    {
        bin[i] = num%2;
        num/=2;
        i++;
    }
    printf("Binary: ");
    while (i--)
    {
        printf("%d",bin[i]);
    }
}
void decToHex(int num){
    char hextable[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int i = 0;
    int hex[100];
    while (num)
    {
        hex[i] = hextable[num%16];
        num/=16;
        i++;
    }
    printf("\nHexadecimal: ");
    while (i--)
    {
        printf("%c",hex[i]);
    }
}
int main(){
    int dec;
    printf("Enter Decimal Integer: ");
    scanf("%d",&dec);
    decToBin(dec);
    decToOct(dec);
    decToHex(dec);
    return 0;
}
