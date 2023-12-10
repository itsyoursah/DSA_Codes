#include<bits/stdc++.h>
using namespace std;

pair<int, int> findPair(int arr[], int n, int targetSum ) {
	int numberOne, numberTwo;
	unordered_map<int, int> umap;
	for (int i = 0; i < n; i++) {
		int toCheck;
		toCheck = targetSum - arr[i];
		if (umap.find(toCheck) != umap.end()) {
			numberOne = arr[i];
			numberTwo = toCheck;
		}
		else {
			umap.insert({arr[i], i});
		}
	}
	return make_pair(numberOne, numberTwo);
}

int main()
{
	int n;
	cin >> n;
	int * arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int targetSum;
	cin >> targetSum;
	pair<int, int> ans = findPair(arr, n, targetSum);
	cout << "[ " << ans.first << ", " << ans.second << " ]" << '\n';
	return 0;
}
