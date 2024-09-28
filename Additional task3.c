#include <stdio.h>
int main() {
    char character;
    printf("Enter a single character: ");
    scanf("%s" , &character);
    int key = 12563;
    char echaracter = character ^ key ;
    char dcharacter = echaracter ^ key;
    printf("Original character: %s\n", character);
    printf("Encrypted character: %s\n", echaracter);
    printf("Decrypted character: %s\n", dcharacter);
    return 0;
}