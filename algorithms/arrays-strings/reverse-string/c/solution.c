#include <stdio.h>
#include <string.h>


void reverseString(char* s, int sSize) {
    // two pointers from each end, swap characters
    char temp;
    for(int i = 0, j = sSize -1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }    
}

int main() {
    char str[] = "Baseball";
    reverseString(str, strlen(str));
    printf("%s\n",str);
    return 0;
}