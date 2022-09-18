#include <iostream>
#include <cmath>
#include <Vector>

using namespace std;

void oneTotwo(int x)
{
	int b;
	x = abs(x);
	vector<int> bit;
	vector<int> bit1;
	for (int i = 0; i < 4; i++)
	{
		b = x % 2;
		x = x / 2;
		bit.push_back(b);
	}
	for (int i = 3; i >= 0; i--)
	{
		bit1.push_back(bit[i]);
	}
	bit = bit1;
	for (int i = 0; i < 4; i++)
	{	
		cout << bit[i];
	}
	cout << "\n";
	for (int i = 0; i < 4; i++)
	{
		if (bit[i] == 0) bit[i] = 1;
		else if (bit[i] == 1) bit[i] = 0;
	}
	bit[3] = 1;
	for (int i = 0; i < 4; i++)
	{
		cout << bit[i];
	}
	cout << "\n";
	int a = 0;
	for (int i = 0; i < 4; i++)
	{
		a += bit[i] * pow(2, i);
	}
	cout << a;
}

int main()
{
	int x;
	cin >> x;
	oneTotwo(x);
}


