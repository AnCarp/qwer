#include <stdio.h>
int main()
{
    void print_main(int line, char c);
    int a, b, i, j, line;
    char c;
    scanf("%d\n", &line);
    scanf("%c", &c);
    print_main(line, c);
    return 0;
}
void print_main(int line, char c)
{
    void print_sub(int space, char c, int sign);
    print_sub(line / 2, c, 0);
    print_sub(line / 2 - 1, c, 1);
}
void print_sub(int space, char c, int sign)
{
    int i, j;
    for (i = 0; i < space; i++)
    {
        if (sign == 0)
        {
            for (j = 0; j < space - i - 1; j++)
                printf(" ");
            for (j = 0; j < 2 * i + 1; j++)
                printf("%c", c);
        }
        else
        {
            for (j = 0; j < i + 1; j++)
                printf(" ");
            for (j = 0; j < 2 * space - 1 - 2 * i; j++)
                printf("%c", c);
        }
        printf("\n");
    }
}