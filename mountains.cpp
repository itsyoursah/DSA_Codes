#include<bits/stdc++.h>
using namespace std;
int mountPeakLength(int arr[], int n) {

	int maxLength = 0;
	//find peak of mountain
	for (int i = 1; i <= n - 2;) {

		if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
			int currentLenght = 1;
			int j = i;
			//calculate left
			while (j >= 1 && arr[j] > arr[j - 1]) {
				currentLenght++;
				j--;
			}
			//calculate right
			while (i <= n - 2 && arr[i] > arr[i + 1]) {
				currentLenght++;
				i++;
			}
			maxLength = max(maxLength, currentLenght);
		}
		else {
			i++;
		}

	}
	return maxLength;

}
int main()
{
	int n;
	cin >> n;
	int * arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << mountPeakLength(arr, n);
	return 0;
}
