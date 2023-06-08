0. find the range (max element)
1. define counr arrays and store the frequency  count[arr[i]]++
2. update the count arrays count[i]+=count[i-1]
3. define output arrays output[--count[arr[i]]]=arr[i]
done sc(n+range) and tc(n+range)


#include <iostream>
#include <vector>

void countingSort(vector<int>& arr) {
    int n = arr.size();

    // Find the maximum element in the array
    int maxElement = *max_element(arr.begin(), arr.end());

    // Create a count vector to store the frequency of each element
    vector<int> count(maxElement + 1, 0);

    // Calculate the frequency of each element
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Calculate the cumulative count
    for (int i = 1; i <= maxElement; i++) {
        count[i] += count[i - 1];
    }

    // Create a temporary output vector
    vector<int> output(n);

    // Generate the sorted output
    for (int i = n - 1; i >= 0; i--) {
            output[--count[arr[i]]] = arr[i];
//         output[count[arr[i]] - 1] = arr[i];
//         count[arr[i]]--;
    }

    // Copy the sorted elements back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

int main() {
    int n = 6;
    vector<int> arr(n);

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    countingSort(arr);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
