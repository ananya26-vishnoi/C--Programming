#include <stdio.h>
#include <conio.h>

void main()
{
    int x = 10, y = 15, temp;
    printf("Before swapping x = 10 and y = 15 \n");
    temp = x;
    x = y;
    y = temp;
    printf("After swapping x = %d and y = %d", x, y);
    getch();
}
