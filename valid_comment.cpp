#include <stdio.h>
#include <string.h>

int main()
{
    char com[100];  // Increased the buffer size to handle larger comments
    int i = 2, a = 0;

    printf("\tEnter comment: ");
    scanf("%99s", com);  // Prevent buffer overflow by limiting input to 99 characters

    int len = strlen(com);

    if (com[0] == '/')
    {
        if (com[1] == '/')
        {
            printf("\tIt is a valid comment\n");
        }
        else if (com[1] == '*')
        {
            for (i = 2; i < len - 1; i++)
            {
                if (com[i] == '*' && com[i + 1] == '/')
                {
                    printf("\tIt is a valid comment\n");
                    a = 1;
                    break;
                }
            }
            if (a == 0)
                printf("\tIt is not a valid comment\n");
        }
        else
            printf("\tIt is not a valid comment\n");
    }
    else
        printf("\tIt is not a valid comment\n");

    return 0;
}

