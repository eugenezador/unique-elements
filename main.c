#include<stdio.h>
#include<stdlib.h>

int main() {
	int* data = NULL;
	data = (int*)malloc(1 * sizeof(int));
	int* tmp = NULL;
	if (data == NULL) {
		printf("Memory allocation error");
	}
	else {
		int k = 0;
		while (scanf("%d", data[k]) && data[k] != -1)
		{
			k++;
			tmp = (int*)malloc((k + 1) * sizeof(int));
			for (int i = 0; i < k; i++) {
				tmp[i] = data[i];
			}
			free(data);
			data = tmp;

		}
		free(data);
	}
	return 0;
}
