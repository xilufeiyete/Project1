#include<iostream>

#include "chinese_test.h"

int main()
{
	using namespace std;
	cout << "不是，怎么做到的" << endl;
	cout << "你妈的，为什么" << endl;
	int a;
	cin >> a;
	cout << "啊~~~~~" << endl;
	int b;
	cin >> b;
	int sum=0;
	for (int i = a;i <= b;i++)
	{
		sum += i;
	}
	cout << a << " 帕秋莉！ " << b << "够！" << sum << endl;

	ChineseOutput();

	return 0;
}