#include<iostream>
#include<time.h>
using  namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	clock_t start;
	start = clock();
	double time;
	char string[] = "Привет мир!!!!!!!";
	int length = strlen(string);
	int j, temp, i;
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		swap(string[i], string[j]);
		time = (clock() - start) / (double)CLOCKS_PER_SEC;
	}

	cout << time << endl;
	cout << string << endl;



	system("pause");
	return 0;
}