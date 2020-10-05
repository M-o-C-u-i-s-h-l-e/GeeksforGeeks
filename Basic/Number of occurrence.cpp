int count(int arr[], int n, int x) {
    int Count = 0;
    for (int i = 0; i < n; ++i)
        if (arr[i] == x)
            ++Count;
    return Count;
}
