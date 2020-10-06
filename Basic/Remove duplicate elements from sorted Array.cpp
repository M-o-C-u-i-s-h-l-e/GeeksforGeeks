int remove_duplicate(int A[],int N) {
    int Count = 0;
    for (int i = 0, cur = -1; i < N; ++i)
        if (cur != A[i])
            cur = A[i], A[Count] = A[i], ++Count;
    return Count;
}
