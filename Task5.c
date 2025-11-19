#include <stdio.h>
#include <string.h>

int main()
 {
    int i, n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar();

    char names[100][100];
    int marks[100];

    for (i = 0; i < n; i++)
	
	 {
        printf("Enter student name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = 0;

        printf("Enter marks: ");
        scanf("%d", &marks[i]);
        getchar();
    }

  
    printf("\n%-4s | %-20s | %-5s\n", "No.", "Name", "Marks");
    printf("--------------------------------------------\n");

   
    for ( i = 0; i < n; i++) {
        printf("%-4d | %-20s | %-5d\n", i+1, names[i], marks[i]);
    }

   
    int maxIndex = 0, sum = 0;

    for (i = 0; i < n; i++) 
	{
        sum += marks[i];
        if (marks[i] > marks[maxIndex])
            maxIndex = i;
    }

    float average = (float)sum / n;

    printf("\nHighest Scorer: %s (%d marks)\n", names[maxIndex], marks[maxIndex]);
    printf("Class Average: %.2f\n", average);

    return 0;
}

