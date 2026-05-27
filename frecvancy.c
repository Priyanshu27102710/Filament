#include <stdio.h>

int main()
{
    char string[100];
   

    printf("enter any string =");
    scanf("%s", string);

    printf("\nFrequency of each letter = \n");

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == '0')
        {
            continue;
        }

        int count = 1;

        for (int j = i + 1; string[j] != '\0'; j++)
        {
            if (string[i] == string[j])
            {
                count++;
                string[j] = '0'; 
            }
        }

        printf("%c => %d\n", string[i], count);
    }

    return 0;
}