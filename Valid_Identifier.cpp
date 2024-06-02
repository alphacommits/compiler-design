#include <stdio.h>
#include <ctype.h>

int main()
{
    char a[10];
    int flag, i = 1;
    printf("\tEnter an identifier:");
    scanf("%s", a);

    if (isalpha(a[0]) || a[0] == '_')
        flag = 1;
    else
        flag = 0;

    while (a[i] != '\0')
    {
        if (!isdigit(a[i]) && !isalpha(a[i]) && a[i] != '_')
        {
            flag = 0;
            break;
        }
        i++;
    }
    if (flag == 1)
        printf("\tIt is Valid identifier");
    else
        printf("\tIt is Not a valid identifier");
    return 0;
}
