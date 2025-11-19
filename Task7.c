#include <stdio.h>
#include <string.h>

int main()
 {
 	int i,j;
    char students[4][20] = {"Alice", "Bob", "Charlie", "Diana"};
    char courses[4][6][30] = {
        {"Physics", "Math", "English"},
        {"Chemistry", "Biology", "Math", "Art"},
        {"Physics", "CS"},
        {"History", "Philosophy", "Math", "Economics", "Art"}
    };
    int count[4] = {3,4,2,5};

    // Display all
    printf("Course Registrations:\n");
    for ( i = 0; i < 4; i++)
	 {
        printf("%s: ", students[i]);
        for (j = 0; j < count[i]; j++)
		 {
            printf("%s", courses[i][j]);
            if (j < count[i]-1) printf(", ");
        }
        printf("\n");
    }

    char search[30];
    printf("\nEnter course to search: ");
    fgets(search, sizeof(search), stdin);
    search[strcspn(search, "\n")] = 0;

    printf("Students taking %s:\n", search);
    int found = 0;
    for ( i = 0; i < 4; i++)
	 {
        for (j = 0; j < count[i]; j++) 
		{
            if (strcmp(courses[i][j], search) == 0) {
                printf("- %s\n", students[i]);
                found = 1;
            }
        }
    }
    if (!found) printf("None\n");

    printf("\nOverloaded students (>3 courses):\n");
    int over = 0;
    for ( i = 0; i < 4; i++) 
	{
        if (count[i] > 3)
		 {
            printf("- %s (%d courses)\n", students[i], count[i]);
            over = 1;
        }
    }
    if (!over) printf("None\n");

    return 0;
}

