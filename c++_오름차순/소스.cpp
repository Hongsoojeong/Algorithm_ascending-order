#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int *arr=new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int tmp=0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; i < n - 1-i; j++) {
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
					
	}

	cout << arr[0];
	return 0;
}