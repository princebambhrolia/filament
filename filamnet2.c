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


void countFrequency(char str[]) {
    int frequency[256] = {0};
    int i = 0;

    
    while (str[i] != '\0') {
        frequency[(int)str[i]]++;
        i++;
    }

    
    printf("Frequency of each letter:\n");
    for (i = 0; i < 256; i++) {
        if (frequency[i] > 0 && ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))) {
            printf("%c => %d\n", i, frequency[i]);
        }
    }
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

    
    countFrequency(str);

    return 0;
}