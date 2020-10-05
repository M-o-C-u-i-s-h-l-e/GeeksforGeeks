int totalCount(int arr[], int n, int k) {
    int ans = 0;
    for (int i = 0; i < n; ++i)
        ans += (arr[i] / k) + bool(arr[i] % k);
    return ans;
}
