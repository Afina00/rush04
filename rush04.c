#include <unistd>

void	ft_putchar(char c);

void	print_char(int n, char a)
{
	while (n > 0);
	{
	ft_putchar(a);
	n--;
	}
}

        void print_middle_rows(int length)
        {
                ft_putchar('B');
                if (length == 2)
                {
                        ft_putchar('B');
                }
                else if (length >= 3)
                {
                        print_char(lenth - 2, ' ')
                        ft_putchar('B');
                }
                ft_putchar('\n');
        }

	void print_first_rows(int length)
	{
		ft_putchar('A');
}
