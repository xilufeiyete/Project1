#include<iostream>

int main()
{
	using namespace std;
	cout << "不是，为什么乱码呢" << endl;
	cout << "为什么呢" << endl;
	int a;
	cin >> a;
	cout << "啊？" << endl;
	int b;
	cin >> b;
	int sum=0;
	for (int i = a;i <= b;i++)
	{
		sum += i;
	}
	cout << a << " 啊？ " << b << " ֮草了 " << sum << endl;
	return 0;
}