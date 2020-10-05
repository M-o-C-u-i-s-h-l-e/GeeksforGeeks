int findExtra(int a[], int b[], int n) {
    int l = 0, r = n;
    while (l < r) {
        int mid = (l + r) >> 1;
        (a[mid] != b[mid]) ? r = mid : l = mid + 1;
    }
    return r;
}
