#include<iostream>
#include<cmath>

using namespace std;

int main()
{

	int N, i;
	double S;

	cout << "N = "; cin >> N; 

	S = 0;
	i = 1;

	while (i <= N)
	{
		S = sqrt(1 + (cos(sin(i)) * cos(sin(i)))) / (1 + (sin(cos(i) * sin(cos(i)))));
		i++;
	}
	cout << S << endl;

	S = 0;
	i = 1;
	do
	{
		S = sqrt(1 + (cos(sin(i)) * cos(sin(i)))) / (1 + (sin(cos(i) * sin(cos(i)))));
		i++;
	} while (i <= N);
	cout << S << endl;

	S = 0;
	for (i = 1; i <= N; i++)
	{
		S = sqrt(1 + (cos(sin(i)) * cos(sin(i)))) / (1 + (sin(cos(i) * sin(cos(i)))));
	}
		
	S = 0;
	for (i = 1; i <= N; i++)
	{
		S = sqrt(1 + (cos(sin(i)) * cos(sin(i)))) / (1 + (sin(cos(i) * sin(cos(i)))));
	}
	cout << S << endl;

	return 0;
}