#include <stdio.h>
#include <string.h>

int main() 
{
    char email[200];
    printf("Enter email: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = 0;

    char *pos = strchr(email, '@');

    if (pos != NULL && *(pos + 1) != '\0')
        printf("Domain: %s\n", pos + 1);
    else
        printf("Invalid email.\n");

    return 0;
}

