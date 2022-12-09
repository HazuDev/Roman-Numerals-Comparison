#include <stdio.h>
#include <ctype.h>

#define WORD_LEN 100

static void transform(char word[WORD_LEN], int* ptr) {
    const int values[] = {
        ['M'] = 1000, ['D'] = 500, ['C'] = 100, ['L'] = 50, ['X'] = 10, ['V'] = 5, ['I'] = 1
    };
    
    for(int i = 0; word[i]; i++) {
        if(toupper(word[i])) {
            *ptr += values[toupper(word[i])];
        }
    }
}

static void check(int num1, int num2) {
    if(num1 < num2) {
        printf("> The second number is greater than the first number");
        
    } else if(num1 > num2) {
        printf("> The first number is greater than the second number");
        
    } else {
        printf("> Both numbers are the same");
    }
}

int main(void) {
    int n1, n2;
    
    int* ptr1 = &n1;
    int* ptr2 = &n2;
    
    char word1[WORD_LEN], word2[WORD_LEN];
    
    printf("> First number : ");
    scanf("%s", word1);
    
    printf("> Second number : ");
    scanf("%s", word2);
    
    transform(word1, ptr1);
    transform(word2, ptr2);
    
    check(n1, n2);
    
    return 0;
}