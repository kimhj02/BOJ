#include <stdio.h>

int Heap[100001] = {0,}, size = 0, n;

void	push()
{
	int	cur = ++size;

	// 현재 값이 부모 노드보다 작을 때까지 부모와 자식노드 스왚
	while (cur != 1 && Heap[cur / 2] > n)
	{
		Heap[cur] = Heap[cur / 2];
		cur /= 2;
	}
	Heap[cur] = n;
}

int	pop()
{
	int	child, parent, root, temp;

	if (size == 0)
		return (0);
	child = 2;
	parent = 1;
	root = Heap[1];
	temp = Heap[size--];

	while (child <= size)
	{
    	// 왼쪽 자식 노드와 오른쪽 자식 노드 중 오른쪽이 더 작은 경우
		if (child < size && Heap[child] > Heap[child + 1])
			child++;
        // 마지막 노드가 child 보다 작은 경우
		if (temp < Heap[child])
			break ;
        // 부모 노드랑 자식 노드 스왚
		Heap[parent] = Heap[child];
		parent = child;
		child *= 2;
	}
	Heap[parent] = temp;
	return (root);
}

int main()
{
    int i = 1;
	int test_case;
	scanf("%d", &test_case);
	for (int i = 0; i < test_case; i++)
	{
		scanf("%d", &n);

		if (n == 0)
			printf("%d\n", pop());
		else{
			push();
            printf("%d\n",Heap[i++]);
        }

	}

	return (0);
}


//