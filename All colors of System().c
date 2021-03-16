#include<stdio.h>
int main()
{
    system("COLOR 1");
    printf("Hello World\n");
    Sleep(1000);
    system("COLOR 18");
    printf("Hello World\n");
    return 0;
}

/**
1) "color X" means only text color will change.
2) In "color XX" first X is the background
    and the second X is the text.

0 = Black   8 = Gray
1 = Blue    9 = Light Blue
2 = Green   A = Light Green
3 = Aqua    B = Light Aqua
4 = Red     C = Light Red
5 = Purple  D = Light Purple
6 = Yellow  E = Light Yellow
7 = White   F = Bright White
**/
