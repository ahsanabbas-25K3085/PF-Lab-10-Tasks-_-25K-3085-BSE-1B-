#include <stdio.h>
#include <string.h>

int main()
 {
 	int i;
    char s[500];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int vowels = 0, consonants = 0, digits = 0, spaces = 0, totalChars = 0;

    for (i = 0; s[i] != '\0'; i++) 
	{
        char c = s[i];
        
      
        if (c != '\n')
            totalChars++;

      
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            char lower = c;
            if (c >= 'A' && c <= 'Z')
                lower = c + 32;

            if (lower=='a' || lower=='e' || lower=='i' || lower=='o' || lower=='u')
                vowels++;
            else
                consonants++;
        }
   
        else if (c >= '0' && c <= '9')
            digits++;
     
        else if (c == ' ')
            spaces++;
    }

    printf("\nVowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Total Characters (excluding newline): %d\n", totalChars);

    return 0;
}

