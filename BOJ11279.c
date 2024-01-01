#include <stdio.h>

int Heap[100001] = {0,}, size = 0, n;

void	push()
{
	int	cur = ++size;

	// ���� ���� �θ� ��庸�� ���� ������ �θ�� �ڽĳ�� ����
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
    	// ���� �ڽ� ���� ������ �ڽ� ��� �� �������� �� ���� ���
		if (child < size && Heap[child] > Heap[child + 1])
			child++;
        // ������ ��尡 child ���� ���� ���
		if (temp < Heap[child])
			break ;
        // �θ� ���� �ڽ� ��� ����
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