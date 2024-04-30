#include<stdio.h>
#include<string.h>

void reverseString(char str[]){
    int start = 0;
    int end = strlen(str) - 1;

    while(end > start){
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main(){
    char str[100];
    printf("Enter the text that you want to reverse:");
    gets(str);

    reverseString(str);

    printf("Reversed string: %s", str);
    return 0;
}
