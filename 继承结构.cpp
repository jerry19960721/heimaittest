#include<iostream>
using namespace std;
class Base
{
public :
	int m_A;
};
class Base2
{
public:
	int m_A;
};
class Son :public Base,public Base2
{
public:
	int m_A;
};
int main() {
	int son = 10;
	cout << &son << endl;
	cout << &son << endl;
	system("pause");
	return 0;
}