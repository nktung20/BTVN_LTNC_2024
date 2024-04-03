#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; 
        } else if (arr[mid] < target) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }

    return -1; 
}

int main() {
    int arrsize;
    cin >> arrsize;
    vector<int> arr;
    for (int i=0;i<arrsize;i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    int target;
    cin >> target;
    int result = binarySearch(arr, target);

    if (result != -1) {
        cout << "Phan tu " << target << " duoc tim thay tai vi tri " << result+1 << endl;
    } else {
        cout << "Khong tim thay phan tu " << target << endl;
    }

    return 0;
}