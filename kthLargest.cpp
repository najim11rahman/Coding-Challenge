#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int kthLargest (vector<int> arr, int n, int k){
	
	priority_queue<int, vector<int>, greater<int>> pq;
	for(int i = 0; i < k; i++) {
		pq.push(arr[i]);
	}

	for(int i = k; i < n; i++) {
		pq.push(arr[i]);
		pq.pop();
	}

	int kLargest = pq.top();

	return kLargest;
}

int main(){
    int n, k, s;
    vector<int> arr;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>s;
        arr.push_back(s);
    }
    cin >> k;
    cout << kthLargest(arr, n, k) << endl;
}
