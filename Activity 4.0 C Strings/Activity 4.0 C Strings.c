#include <stdio.h>
#include <string.h>

int main(){
    char string[250];
    int i, vowels, consonant;
    i=vowels=consonant=0;
    
    printf("Input sentence: ");
    gets(string);
    
    for(i=0; string[i]!='\0'; i++){
        if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u'){
            string[i]=toupper(string[i]);
            vowels++;
        }
        else
        consonant++;
    }
    while(string[i]!='\0'){
        if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u'){
            vowels++;
        }
        i++;
    }
    printf("String converted: ");
    puts(string);
    printf("String length: %d", i);
    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonant);
    
    return 0;
}