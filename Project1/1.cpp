#include<iostream>
#include<cstring>
void a();//�����������
void b();//���뵥�� done����
void c();//����һ��ֵ����ʾ��Ӧ�������Ǻţ�ÿһ���ַ���������ͬ���ǺŲ���ǰ�油���
int main()
{
	//a();
//	b();
	c();
	return 0;
}

void a() {
	using namespace std;
	cout << "�����������������򽫼�����������֮�����������ĺ���" << endl;
	cout << "�������С������" << endl;
	int a;
	cin >> a;
	cout << "������ϴ������" << endl;
	int b;
	cin >> b;
	int sum = 0;
	for (int i = a;i <= b;i++)
	{
		sum += i;
	}
	cout << a << " �� " << b << " ֮���������Ϊ " << sum << endl;
}

void b() {
	using namespace std;
	char ch[20];
	int count = 0;
	cout << "���뵥�ʣ�����done������";
	cin >> ch;
	while (strcmp(ch, "done") != 0) {
		count++;
		cin >> ch;
	}
	cout << "һ��������" << count << "������";
}

void c() {
	using namespace std;
	cout << "����������" << endl;
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