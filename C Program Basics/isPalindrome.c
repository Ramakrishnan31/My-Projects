#include<stdio.h>
#include<string.h>

int isPalindrome(char str[]){
    int left = 0;
    int right = strlen(str) - 1;

    while(left < right){
        if(str[left] != str[right]){
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}
int main(){
    char str[100];
    printf("Enter the text: ");
    gets(str);

    if(isPalindrome(str)){
        printf("%s is palindrome", str);
    }
    else{
        printf("%s is not palindrome", str);
    }
    return 0;
}
