#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    int ctr=1;
    scanf("%[^\n]%*c",str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]!=' ')
        {
            if (ctr%2==0)
            {
                --str[i];
            }
            else
            {
                ++str[i];
            }
        ctr++;
        }
    }
    printf("%s",str);
    return 0;
}
// FCEJCPG VARIABLES PMV WAR
// DECLARE X?TGC@NCU NOT Y?T
//=DECLARE VARIABLES NOT WAR
