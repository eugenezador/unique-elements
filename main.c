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
		while (scanf("%d", &data[k]) && data[k] != -1)
		{
			k++;
			tmp = (int*)malloc((k + 1) * sizeof(int));
			for (int i = 0; i < k; i++) {
				tmp[i] = data[i];
			}
			free(data);
			data = tmp;

		}

		int* res = (int*)calloc(k, sizeof(int));
		int uniq = 0;

		for(int i = 0; i < k; i++) {

			uniq = data[i];

			for(int j = 0; j < k; j++) {
				if(uniq == data[j] && i != j) data[j] = -14;
			}

		}

		int size = 0;
		for(int i = 0; i < k; i++) {
			if(data[i] != -14){
				res[size] = data[i];
				size++;
			}
		}

		
		printf("%d", res[0]);
		for(int i = 1; i < size; i++) {
			printf(" %d", res[i]);
		}


		free(res);
		free(data);
	}
	return 0;
}
