#include <stdio.h>

int main(int argc, char const *argv[])
{
    char input[20];
    // gets(input);
    gets(input);
    int lower = 0, upper = 0, s_char = 0, num = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] >= 65 && input[i] <= 90)
            upper++;
        else if (input[i] >= 97 && input[i] <= 122)
            lower++;
        else if (input[i] >= 48 && input[i] <= 57)
            num++;
        else
            s_char++;
    }

    printf("lower=%d \n upper=%d \n char=%d \n num=%d \n", lower, upper, s_char, num);

    return 0;
}
