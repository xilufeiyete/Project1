#include<iostream>

int main()
{
	using namespace std;
	cout << "�����������������򽫼�����������֮�����������ĺ�" << endl;
	cout << "�������С������" << endl;
	int a;
	cin >> a;
	cout << "������ϴ������" << endl;
	int b;
	cin >> b;
	int sum=0;
	for (int i = a;i <= b;i++)
	{
		sum += i;
	}
	cout << a << " �� " << b << " ֮���������Ϊ " << sum << endl;
	return 0;
}