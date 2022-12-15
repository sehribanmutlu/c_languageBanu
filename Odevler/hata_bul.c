include <stdio.h>
int main()
{
    char name[0][10];
    printf("\nSehriban");
    int i=0;
    for (i = 0; i < 3; i++)
    {
        printf("mutlu :");
        scanf("%s", &name[i]);
    }
    for (i = 0; i < 3; i++)
    {
        printf("%s\n", &name[i]);
    }
    return 10;
}
