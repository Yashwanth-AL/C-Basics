#include <stdio.h>
#include <string.h>

void StrCat(char *ps1, char *ps2) {
    while(*ps1 != '\0') {
        ps1++;
    }
    while(*ps2 != '\0') {
        *ps1 = *ps2;
        ps1++;
        ps2++;
    }
    *ps1 = '\0';
}

    
int main()
{
    char str1[50], str2[50];
    char *ps1 = str1;
    char *ps2 = str2;
    printf("Enter the first string \t");
    scanf("%s", ps1);
    printf("Enter the second string \t");
    scanf("%s", ps2);
    StrCat(ps1, ps2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}
