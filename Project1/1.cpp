#include<iostream>

int main()
{
	using namespace std;
	cout << "输入两个整数，程序将计算两个整数之间所有整数的和捏" << endl;
	cout << "请输入较小的整数" << endl;
	int a;
	cin >> a;
	cout << "请输入较大的整数" << endl;
	int b;
	cin >> b;
	int sum=0;
	for (int i = a;i <= b;i++)
	{
		sum += i;
	}
	cout << a << " 和 " << b << " 之间的整数和为 " << sum << endl;
	return 0;
}