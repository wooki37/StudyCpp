#include <iostream>

using namespace std;

int n;

void set() {
	n = 10;
}

namespace doodle {
	int n;
	void set();
}
namespace google {
	int n;
	void set();
}

int main() {
	::set();
	doodle::set();
	google::set();

	cout << ::n << endl;
	cout << doodle::n << endl;
	cout << google::n << endl;
}

void doodle::set() {
		n = 20;
}
void google::set() {
		n = 30;
}