#include <stdio.h>

int isPalindrome(char str[]) {
	
    int length = 0;
 
    while (str[length] != '\0') {
    	
        length++;
        
    }
    
  
    for (int i = 0; i < length / 2; i++) {
    	
        if (str[i] != str[length - i - 1]) {
        	
            return 0;
            
        }
        
    }
    
    return 1;
    
}

int main() {
	
    char str[100];
    

    printf("Enter any string: ");
    scanf("%s", str);

    if (isPalindrome(str)) {
        printf("The given string is a Palindrome.\n");
    } else {
        printf("The given string is not a Palindrome.\n");
    }
    
    return 0;
}