// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"// хранятся стандартные библиотеки
#include <iostream>
#include <conio.h>//библиотека для _getch()
using namespace std;


int main()
{
	int a, b;
	a = 0;
	b = 0;

	cout << "Programma naxojdeniya tipa treygolnika po ego yglam " << endl;
 link:	//ссылка 
	cin >> a;
	cin >> b;

	if ( a + b > 179 || b <= 0 ||  a <= 0 )
	{
		cout << "error" << endl;
		goto link;		//ссылка на линк 
	}

	if (a + b == 90 || b == 90 || a == 90)	//логическое выражение
	{
		cout << "pryamoygolniy" << endl;	//вводит сообщения на экран
	}

	else if (a > 90 || b > 90 || a + b < 90)	//продолжение логического выражения
	{
		cout << "typoygolniy" << endl;	//вводит сообщения на экран
	}

	else if (a < 90 && b < 90 && a + b > 90)	//продолжение логического выражения
	{
		cout << "ostroygolnii" << endl;	//вводит сообщения на экран
	}
	goto link;
	_getch();	//пауза в консоли

	return 0;
 
}

