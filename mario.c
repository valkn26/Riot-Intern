#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    int i;
    int j;
    int k;

    do
    {
        h = get_int("Enter how tall you want the tower: \n");
    }
    while (h < 1 || h > 8);

    //Rows
    for (i = 0; i < h; i++)
    {
        //Spaces
        for (k = 0; k < h - i - 1; k++)
        {
            printf(" ");
        }
        //Columns
        for (j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }


}
