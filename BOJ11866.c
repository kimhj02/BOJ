#include <stdio.h>

int main(void)
{
	int n, k, i; 
	scanf("%d%d", &n, &k);
	int a[1001]; 
	for(i = 1; i<=n; i++) a[i]=1; 
	
	printf("<");
	i=1; 
	int count = 0; 
	int count_k = 0; 
	while(1)
	{
		if(a[i] == 1) count_k++; 

		if(a[i] == 1 && count_k == k) 
        {
			count_k = 0;
			a[i] = 0;
			count++;
			if(count == n) 
            { 
				printf("%d>", i);   //마지막 출력
				break;
			}
			printf("%d, ", i); 
		}
		i++;
		if(i>n) i = i-n;    //길이 초기화
	}
    return 0;
}