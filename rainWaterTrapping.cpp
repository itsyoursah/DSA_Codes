#include<bits/stdc++.h>
using namespace std;

int rainWaterTrapping(int arr[], int n) {
	int ans = 0;
	if (n <= 2) {
		return 0;
	}
	vector<int> left(n, 0), right(n, 0);
	left[0] = arr[0];
	right[n - 1] = arr[n - 1];
	for (int i = 1; i < n; i++) {
		left[i] = max(left[i - 1], arr[i]);
		right[n - i - 1] = max(right[n - i], arr[n - i - 1]);
	}
	for (int i = 0; i < n; i++) {
		ans += min(left[i], right[i]) - arr[i];
	}
	return ans;

}

int main()
{
	int n;
	cin >> n;
	int * arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << rainWaterTrapping(arr, n);
	return 0;
}
