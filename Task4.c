#include <stdio.h>
#include <string.h>

int main() 
{
	int i;
    char msg[500], encrypted[500], decrypted[500];

    printf("Enter message: ");
    fgets(msg, sizeof(msg), stdin);
    msg[strcspn(msg, "\n")] = 0;

    strcpy(encrypted, msg);

    for (i = 0; encrypted[i] != '\0'; i++)
	 {
        char c = encrypted[i];

        if (c >= 'A' && c <= 'Z')
            encrypted[i] = ((c - 'A' + 3) % 26) + 'A';
        else if (c >= 'a' && c <= 'z')
            encrypted[i] = ((c - 'a' + 3) % 26) + 'a';
    }

    strcpy(decrypted, encrypted);

    for (i = 0; decrypted[i] != '\0'; i++)
	 {
        char c = decrypted[i];

        if (c >= 'A' && c <= 'Z')
            decrypted[i] = ((c - 'A' - 3 + 26) % 26) + 'A';
        else if (c >= 'a' && c <= 'z')
            decrypted[i] = ((c - 'a' - 3 + 26) % 26) + 'a';
    }

   
    printf("\nEncrypted message: %s\n", encrypted);
    printf("Decrypted (original) message: %s\n", decrypted);

    return 0;
}

