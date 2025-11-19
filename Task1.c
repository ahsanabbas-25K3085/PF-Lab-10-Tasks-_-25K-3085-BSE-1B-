#include <stdio.h>
#include <string.h>

int main() 
{
	int i;
    char pass[200];
    printf("Enter password: ");
    fgets(pass, sizeof(pass), stdin);
    pass[strcspn(pass, "\n")] = 0;

    int len = strlen(pass);
    int hasUpper = 0, hasDigit = 0, hasSpecial = 0;

    for (i = 0; pass[i] != '\0'; i++) 
	{
        char c = pass[i];

        if (c >= 'A' && c <= 'Z')
            hasUpper = 1;

        if (c >= '0' && c <= '9')
            hasDigit = 1;

        if (c=='!' || c=='@' || c=='#' || c=='$' || c=='%')
            hasSpecial = 1;
    }

    if (len >= 8 && hasUpper && hasDigit && hasSpecial)
        printf("Password is STRONG.\n");
    else
        printf("Password is WEAK.\n");

    return 0;
}

