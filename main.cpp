#include <stdio.h>
#include <windows.h>
#include <time.h>

int func(int *ppX, int size, int mull)
{
	for (int i = 0; i < size; i++) {
		if (i % 2 > 0) {
			mull = ppX[i] * mull;
		}
	}
	printf("%i", mull);
	return mull;
}

int main() {
	int i, N, mul;

	mul = 1;
	const int min = 1;
	const int max = 5;

	srand((unsigned)time(0));

	printf("Enter the size of the array - ");
	scanf_s("%i", &N);
	int* pX = new int[N];

	for (int i = 0; i < N; i++) {
		pX[i] = (int)((double)rand() / (RAND_MAX + 1) * (max - min) + min);
	}

	for (int i = 0; i < N; i++) {
		printf("A[%i] = %i\n", i, pX[i]);
	}

	func(pX, N, mul);

	delete[] pX;
}
