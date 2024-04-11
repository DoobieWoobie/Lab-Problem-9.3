#include <iostream>
using namespace std;
void displayRun(int values[], int size);
int main()
{
	srand(time(0));
	const int size = 20;
	int dice[size];
	for (int i = 0; i < size; i++)
	{
		dice[i] = rand() % 6 + 1;

	}
	displayRun(dice, size);
}
void displayRun(int values[], int size)
{
	for (int i = 0; i <= size; i++)
	{
		if (values[i] == values[i + 1])
		{
			cout << "(" << values[i] << " " << values[i + 1] << ") ";
			i = i + 2;
		}
		if(values[i] != values[i+1])
		{
			cout << values[i] << " ";
		}
	}
}
