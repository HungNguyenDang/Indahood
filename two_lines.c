#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char a;

    printf("Your choice (A,B,C): ");
    scanf("%c",&a);

    switch(a)
    {
        case 'A':
            puts("Excellent choice!");
            break;
        case 'B':
            puts("Common choice!");
            break;
        case 'C':
            puts("Question?!");
            break;
        default:
            puts("Invalid choice");        
    }
    return(0);
}

// int main()
// {
//     int x;

//     x=10;
//     while (x>0)
//     {
//         printf("%d\n",x);
//         x--;
//     }
//     return (0);
// }

// int main()
// {
//     int x;

//     for  (x=0;x<20;x++)
//     {
//         printf("%d\n",x+1);
//     }
//     return (0);
// }

// int main()
// {
//     int x;
//     x=-10;
//     while  (x<10)
//     {
//         printf("%d\n",x+=2);
//     }
//     return (0);
// }

// int main()
// {
//     int acter;
    
//     do
//     {
//         acter = getchar();
//         if (isalpha(acter))
//         putchar(acter);

//     } 
//     while (acter != '\n');
    
//     return (0);
// }

// int main()
// {
//     char a,b,c,*p;
//     a = 'A';
//     p = &a;
//     b = *p;
//     p = &c;
//     *p = 'Z';
//     printf("%c %c %c\n",a,b,c);

//     return(0);
// }

