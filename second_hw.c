#include<iostream>
using namespace std;

int main()
{
	int i;
	cin >> i;
	cout << i << ' ';
	while(i != 1){
		if(i % 2)
			i = i*3 + 1;
		else
			i /= 2;
		cout << i << ' ';
	}
	return 0;
}
