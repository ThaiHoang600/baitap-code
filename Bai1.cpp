#include<iostream>

using namespace std;

int main() 
{    
	int a = 0;
	int b = 0;
	
	cout << "Nhap he so a = ";
	cin >> a;
	
	cout << "Nhap he so b = ";
	cin >> b;
	
	cout << "\nKet qua: \na - b = " << a - b;
	
	if(a - b > 0)
	{
		cout << "\nHay qua ban oi";
	}
	else
	{
		cout << "\nCung thuong thoi";
	}
	
	return 0;
}