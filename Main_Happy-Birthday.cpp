#include <iostream>
#include <windows.h>
#include <locale.h>
#include <conio.h>
#include <dos.h>
#include <wchar.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void ChangeColor()
{
	system("COLOR 8"); Sleep(5);
	system("COLOR D"); Sleep(5);
	system("COLOR 5"); Sleep(5);
	system("COLOR B"); Sleep(5);
}

int main()
{
    int dil=3,emoji2=6;
    Sleep(1000);
    system("Color 04");
	printf("\n\n\n\t\t\tTime Left");  cout<<endl;
	Sleep(500);
	system("Color 04");
	printf("\t\t           3 second"); cout<<endl;
	Sleep(500);
	system("Color 04");
	printf("\t\t           2 second"); cout<<endl;
	Sleep(500);
	system("Color 04");
	printf("\t\t           1 second"); cout<<endl;
	char h = '\3';

	system("cls");
	Sleep(100);
	cout << endl << endl << "\t\t\t\t  ! ! ! ! !";
	cout << "\t\t\t\t      ! ! ! ! !" << endl;
	cout <<                 "\t\t\t\t  i i i i i";
	cout <<                 "\t\t\t\t      i i i i i" << endl;
	Sleep(100);

	cout << "\t\t\t\t  i i i i i";
	cout << "\t\t\t\t      i i i i i" << endl;
	Sleep(100);

	cout << "\t\t\t\t__i_i_i_i_i__";
	cout << "\t\t\t\t    __i_i_i_i_i__"<< endl;
	Sleep(100);

	cout << "\t\t\t       |" << h << "\t    " << h << "|";
	cout << "\t\t\t           |" << h << "\t        " << h << "|"<< endl;
	Sleep(100);

	cout << "\t\t\t     __| " << h << " 1/1/2021" << h << " |__";
	cout << "\t\t         __| " << h << " 1/1/2021" << h << " |__"<< endl;
	Sleep(100);

	cout << "\t\t\t    | " << h << "   " << h << "       " << h << "   " << h << " |";
	cout << "\t\t        | " << h << "   " << h << "       " << h << "   " << h << " |"<< endl;
	Sleep(100);

	cout << "\t\t\t  __|" << h << "     " << h << "     " << h << "     " << h << "|__";
	cout << "\t\t      __|" << h << "     " << h << "     " << h << "     " << h << "|__"<< endl;
	Sleep(100);

	cout << "\t\t\t | " << h << "        " << h << "   " << h << "        " << h << " |";
	cout << "\t\t     | " << h << "        " << h << "   " << h << "        " << h << " |"<< endl;

	cout << "\t\t\t | " << h << "  HAPPY  " << h << " " << h << " BIRTHDAY" << h << " |";
	cout << "\t\t     | " << h << "  HAPPY  " << h << " " << h << " BIRTHDAY" << h << " |"<< endl;
	Sleep(100);

	cout << "\t\t\t |" << h << "  " << h << "  " << h << "  " << h << "  " << h << "  " << h << "  " << h << "  " << h << "  " << h << "|";
	cout << "\t\t     |" << h << "  " << h << "  " << h << "  " << h << "  " << h << "  " << h << "  " << h << "  " << h << "  " << h << "|"<< endl;
	Sleep(100);

	cout << "\t\t\t | " << h << "  " << h << "               " << h << "  " << h << " |";
	cout << "\t\t     | " << h << "  " << h << "               " << h << "  " << h << " |"<< endl;
	Sleep(100);

	cout << "\t\t\t |";
	for (int i = 0; i < 25; i++) {
		cout << "_";
	}
	cout << "|" ;

	cout <<  "\t\t     |";
	for (int i = 0; i < 25; i++) {
		cout << "_";
	}
	cout << "|" << endl;

	char *locale=setlocale(LC_ALL," ");
	FILE *in=fopen("Happy_Bithday.txt","r");
	wint_t c;
	while((c=fgetwc(in))!=WEOF)
	{
		if(c!=' ')
		Sleep(5);
		putwchar(c);
	}
	fclose(in);
	int n=10;
	while(n--)
	{
		ChangeColor();
	}
	cout << "\t\t\tDid you notice i have not said anyone's name so who am i wishing to??";
	cout << "\n\t\t\t\tSorry , i won't you her name but show you.\n";
	Sleep(8000);
/**
system("CLS");
	in=fopen("Raha1.txt","r");
	while((c=fgetwc(in))!=WEOF)
	{
		if(c!=' ')
		Sleep(3);
		putwchar(c);
	}
	fclose(in);
	n=10;
	while(n--)
	{
		ChangeColor();
		Sleep(3);
	}
**/
system("CLS");
	in=fopen("Nahid.txt","r");
	//wint_t c;
	while((c=fgetwc(in))!=WEOF)
	{
		if(c!=' ')
		Sleep(3);
		putwchar(c);
	}
	fclose(in);
	n=10;
	while(n--)
	{
		ChangeColor();
	}
	cout << endl << endl << endl << endl;
}
