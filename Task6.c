#include <stdio.h>
#include <string.h>

int main() 
{
	int i;
    char names[5][100];
    int marks[5];

    for (i = 0; i < 5; i++)
	 {
        printf("Name of student %d: ", i+1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = 0;

        printf("Marks: ");
        scanf("%d", &marks[i]);
        getchar();
    }

    printf("\nNo  Name                 Marks\n");
    printf("-------------------------------\n");
    for (i = 0; i < 5; i++)
        printf("%-3d %-20s %d\n", i+1, names[i], marks[i]);

    int top = 0, sum = 0;
    for (i = 0; i < 5; i++) 
	{
        sum += marks[i];
        if (marks[i] > marks[top])
            top = i;
    }

    printf("\nTop student: %s (%d marks)\n", names[top], marks[top]);
    printf("Class average: %.2f\n", sum / 5.0);

    return 0;
}

