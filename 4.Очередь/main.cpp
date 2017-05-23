#include <iostream>
#include <conio.h>
#include "Queue1.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	Queue1 <float> qu(4);
	
	try
	{
		qu.Push(12);
		qu.Push(53);
		qu.Push(1);
		qu.Push(92.66);
		qu.Push(232);
	}
	catch (const char*message)
	{
		cout << "Error:" << message << endl;
	}
	cout << endl;
	cout << qu.Pop()<< endl;
	cout << qu.Pop() << endl;
	cout << qu.Pop() << endl;
	cout << qu.Pop() << endl;

	getch();
	return 0;
}