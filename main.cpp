#include <iostream>
using namespace std;

class Circle {

private:
	int radius;

public:
	void setRadius(int r) {
		radius = r;
	}

	double getArea() {
		return 3.14 * radius * radius;
	}

};

int main() {
	Circle circles[2][3];

	//행이든 열이든 이건 크기에 불과하고 인덱스는 0부터니까 아래 반복문 주의

	int r = 1;

	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 3; j++) {
			circles[i][j].setRadius(r);
			r++;
		}

	}
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << circles[i][j].getArea() << endl;
		}
	}
}


//Circle 클래스 구현하고, 반지름 저장함수와 면적 구하기 함수 생성
//Circle 클래스의 객체 배열을 만들고
//객체배열 안의 원소들에 적절히 접근할 수 있는지 확인하는 기초문제