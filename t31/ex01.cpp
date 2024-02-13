#include <stdio.h>

// 전역변수
int itemCnt = 0;
int money = 100;

void buyItem(int cost, int cnt) {	// cost, cnt = 매개변수
	// 아이템을 산다.
	itemCnt += cnt;
	money -= cost;
	printf("아이템을 구매했습니다.\n");
	printf(" 아이템 개수: %d\n", itemCnt);
	printf(" 잔액: %d\n", money);
}

int main() {
	int a;	// 지역변수

	// 아이템을 산다.
	buyItem(30, 1);

	/* 중략 */

	// 아이템을 산다.
	buyItem(50, 2);
}