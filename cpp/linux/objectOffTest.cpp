// 测试对象内存布局

#include <iostream>
using namespace std;

class A
{
public:
	A () {
		int i = 0;
	}
	int a = 0;
	int b = 0;

	void foo() {}
	virtual void foo1() {};
	void foo2() {}

	int c = 0;
};

class B
{
public:
	B() {
		int i = 0;
	}
};

class C : A
{
public:
	C() {
		int i = 0;
	}
	int d = 0;
	virtual void foo3() {};
	virtual void foo4() {};
};

int main()
{
	A a;
	A* aa = &a;
	cout << "aa: " << (long)aa << endl;
	cout << "aa->a: " << (long)&(aa->a) << endl;
	cout << "aa->c: " << (long)&(aa->c) << endl;

	B b;
	C c;

	int i = 0;
}