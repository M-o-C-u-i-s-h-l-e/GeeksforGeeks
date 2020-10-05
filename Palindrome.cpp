string is_palindrome(int n) {
    string str = "";
    while (n) {
        str += ((n % 10) + '0');
        n /= 10;
    }
    for (int i = 0, j = str.size() - 1; i < j; ++i, --j)
        if (str[i] != str[j])
            return "No";
    return "Yes";
}
