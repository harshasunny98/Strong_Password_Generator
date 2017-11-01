#include <stdio.h>
#include <time.h>
 
/* C Program Strong Password Generator*/
 
int main (void)
{
        srand (time (NULL));
        int n;
        char* alp  = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        char* num = "0123456789";
        char* sym = "`~!@#$%^&*()_-+={}[]\\|:;\"'<>,.?/";
 
        int i = 0, x = 0, y = 0, z = 0;
        printf ("Enter the required length of password [in multiples of 3]: ");
        scanf("%d",&n);
        n=n/3;
        printf ("Your Password: ");
 
        for (i = 0; i < n; i++)
        {
                x = (rand () % 51) + 1;
                y = (rand () % 10) + 1;
                z = (rand () % 31) + 1;
                printf ("%c%c%c", alp[x], num[y], sym[z]);
        }
 
        return 0;
}
