#include<iostream>
#include<cstring>
void a();//两整数间求和
void b();//输入单词 done结束
void c();//输入一个值，显示相应行数的星号，每一行字符和行数相同，星号不够前面补句点
int main()
{
	//a();
//	b();
	c();
	return 0;
}

void a() {
	using namespace std;
	cout << "输入两个整数，程序将计算两个整数之间所有整数的和捏" << endl;
	cout << "请输入较小的整数" << endl;
	int a;
	cin >> a;
	cout << "请输入较大的整数" << endl;
	int b;
	cin >> b;
	int sum = 0;
	for (int i = a;i <= b;i++)
	{
		sum += i;
	}
	cout << a << " 和 " << b << " 之间的整数和为 " << sum << endl;
}

void b() {
	using namespace std;
	char ch[20];
	int count = 0;
	cout << "输入单词（输入done结束）";
	cin >> ch;
	while (strcmp(ch, "done") != 0) {
		count++;
		cin >> ch;
	}
	cout << "一共输入了" << count << "个单词";
}

void c() {
	using namespace std;
	cout << "请输入行数" << endl;
	int rows;
	cin >> rows;
	char ch2[20]="a";
	for (int i = rows-1;i>=0;i--) {
		for (int j = 0;j <i;j++)
			ch2[j] = '.';
		ch2[i] = '*';
		cout << ch2 << endl;
	}
}