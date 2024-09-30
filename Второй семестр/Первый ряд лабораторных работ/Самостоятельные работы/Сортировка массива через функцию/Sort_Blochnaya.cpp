#include<iostream>
using namespace std;
void bucketSort(float arr[], int n) {
	float max_value = arr[0];
	float min_value = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > max_value) max_value = arr[i];
		if (arr[i] < min_value) min_value = arr[i];
	}
	int bucket_count = ((max_value - min_value) / n) + 1;
	float** buckets = new float* [bucket_count];
	for (int i = 0; i < bucket_count; i++) {
		buckets[i] = new float[n];
	}
	for (int i = 0; i < n; i++) {
		int bucket_index = ((arr[i] - min_value) / bucket_count);
		buckets[bucket_index][i] = arr[i];
	}
	for (int i = 0; i < bucket_count; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				if (buckets[i][j] > buckets[i][k]) {
					float temp = buckets[i][j];
					buckets[i][j] = buckets[i][k];
					buckets[i][k] = temp;
				}
			}
		}
	}
	int index = 0;
	for (int i = 0; i < bucket_count; i++) {
		for (int j = 0; j < n; j++) {
			if (buckets[i][j] != 0) {
				arr[index++] = buckets[i][j];
			}
		}
	}
	for (int i = 0; i < bucket_count; i++) {
		delete[] buckets[i];
	}
	delete[] buckets;
}
int main()
{
	float mas[] = { 0.3,0.1,0.6,0.2,0.7,0.8 };
	int n = sizeof(mas) / sizeof(mas[0]);
	bucketSort(mas, n);
	for (int i = 0; i < n; i++) {
		cout << mas[i] << " ";
	}
	cout << endl;
	return 0;
}
