void ft_putchar(char c);

void rush(int x, int y)
{
    int i;
    int j;

    i = 1;
    while (i <= y)
    {
        j = 1;
        while (j <= x)
        {
            if ((i == 1 && j == 1) || (i == y && j == x && y != 1 && x != 1))
                ft_putchar('A');
            else if ((i == 1 && j == x) || (i == y && j == 1 && y != 1))
                ft_putchar('C');
            else if ((i > 1 && i < y) && (j > 1 && j < x))
                ft_putchar(' ');
            else
                ft_putchar('B');
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}

this my code (for reference)
