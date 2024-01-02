#include <stdio.h>
#include <string.h>

int main()
{
	int arr[21] = { 0 };
	int T, num;
	char command[7];
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%s", command);
		scanf("%d", &num);

		if (strstr(command, "add")) {
			arr[num] = 1;
		}
		else if (strstr(command, "remove")) {
			arr[num] = 0;
		}
		else if (strstr(command, "check")) {
			if (arr[num]) printf("1\n");
			else printf("0\n");
		}
		else if (strstr(command, "toggle")) {
			if (arr[num]) arr[num] = 0;
			else arr[num] = 1;
		}
		else if (strstr(command, "all")) {
			for (int i = 1; i < 21; i++) {
				arr[i] = 1;
			}
		}
		else if (strstr(command, "empty")) {
			for (int i = 1; i < 21; i++) {
				arr[i] = 0;
			}
		}

	}
	return 0;
}