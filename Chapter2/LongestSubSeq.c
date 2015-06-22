#include "stdafx.h"

#define SIZE 20
int arr[SIZE] = {0,1,2,3,4,5,6,7,8,9,19,11,12,14,13,15,16,17,18};

void getLongestSubSeq() {
	int head_longest = 0;
	int tail_longest = 0;
	int head = 0;
	int tail = 0;
	int pre = arr[0];

	for (int i = 1; i < SIZE; i++) {
		if (arr[i] >= pre) {
			tail = i;
			if (i > 2 && arr[i-1] < arr[i-2]) {
				head = i-2;
			}
		}

		if (tail - head > tail_longest - head_longest) {
			tail_longest = tail;
			head_longest = head;
		}

		pre = arr[i];
	}

	printf("The longest sub sequence is from %d to %d\n", head_longest, tail_longest);
}

int _tmain(int argc, _TCHAR* argv[])
{
	getLongestSubSeq();
	return 0;
}
