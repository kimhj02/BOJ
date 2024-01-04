#include<stdio.h>
 
int arr[100000];
 
int main() {
	int n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	int max = arr[0];
	for (i = 1; i < n; i++) {
		if (arr[i - 1] > 0) arr[i] = arr[i] + arr[i - 1];
		if (arr[i] > max) max = arr[i];
	}
	printf("%d", max);
	return 0;
}