// 스마트 포인터

#include <iostream>
#include <memory>

// shared_ptr

using namespace std;

class Test {
public:
	Test(int x) : x(x) { cout << "생성자" << endl; }
	~Test() { cout << "소멸자" << endl; }
	int GetX() const { return x; }
private:
	int x;
};

int main() {
	shared_ptr<Test> a(new Test(5));
	{
		shared_ptr<Test> b = a;
		cout << a.use_count() << endl;
		cout << b.use_count() << endl;
	}
	cout << a.use_count() << endl;
}