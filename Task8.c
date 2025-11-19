#include <stdio.h>
#include <string.h>

int main()
 {
     int c,i;
    char categories[3][20] = {
        "Appetizers",
        "Main Course",
        "Desserts"
    };

    char items[3][3][30] = {
        {"Bruschetta", "Spring Rolls", "Garlic Bread"},
        {"Grilled Chicken", "Pasta Alfredo", "Beef Burger"},
        {"Cheesecake", "Chocolate Mousse", "Ice Cream"}
    };

    float price[3][3] = {
        {6.50, 5.00, 4.00},     
        {12.00, 10.50, 9.50},  
        {7.00, 6.50, 5.50}     
    };

    printf("============== RESTAURANT MENU ==============\n\n");

    for (c = 0; c < 3; c++) {
        printf("%s:\n", categories[c]);
        printf("----------------------------------------------\n");

        for ( i = 0; i < 3; i++) 
		{
            printf("  %-20s ....... $%5.2f\n", items[c][i], price[c][i]);
        }
        printf("\n");
    }

    printf("======= Budget Friendly Items (Under $10) =======\n\n");

    for ( c = 0; c < 3; c++)
	 {
        for (i = 0; i < 3; i++) 
		{
            if (price[c][i] < 10.00)
			 {
                printf("%-20s (%s) - $%.2f\n",
                       items[c][i], categories[c], price[c][i]);
            }
        }
    }

    return 0;
}

