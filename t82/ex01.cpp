// Upcasting : 자식 클래스 포인터 -> 부모 클래스 포인터 (묵시적)

#include <iostream>

using namespace std;

class Animal {
public :
	float xpos = 1;
	float ypos = 2;
};
class FlyingAnimal : public Animal {
public :
	float zpos = 3;
};
void printAnimals(Animal **a, int n) {
	for (int i = 0; i < n; i++) {
		cout << "(" << a[i]->xpos << ", " << a[i]->ypos << ")" << endl;
	}
}
int main() {
	Animal** a = new Animal*[10];
	for (int i = 0; i < 10; i++) {
		a[i] = new FlyingAnimal;
	}
	printAnimals(a, 10);
	for (int i = 0; i < 10; i++) {
		delete a[i];
	}
	delete[] a;
}