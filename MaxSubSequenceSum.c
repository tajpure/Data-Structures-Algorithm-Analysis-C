int MaxSubSequenceSum() {
	int sum = 0;
	int maxSum = 0;
	int state = 0;

	for (int i = 0; i < SIZE; i++) {
		if (sum <= 0) {
			sum = arr[i];
		} else {
			sum += arr[i];
		}

		if (sum > maxSum) {
			maxSum = sum;
		}
	}

	return maxSum;
}