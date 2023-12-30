#include<stdio.h>

int main() {
	int n, count = 0;
    
	scanf("%d", &n);
    
	if (n % 5 == 0)
		printf("%d", n / 5);
	else
		while (n > 0) {
			n -= 2;
			count++;
			if (n % 5 == 0) {
				printf("%d", count + n / 5);
				break;
			}
		}
	if (n < 0)
		printf("-1");
	return 0;
}