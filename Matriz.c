#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}


void rush(int x, int y)
{
    int row;
    int column;

    while (column <= y)
    {
        row = 0;
        while (row <=x)
        {
            ft_putchar('c');
            row++;
        }
        column++;
    }
    
}