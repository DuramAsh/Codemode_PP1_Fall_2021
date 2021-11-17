bool isPowerOfTwo(int n) {
        if (n == 1) return true;
        if (n % 2 != 0 || n == 0) return false;
        return isPowerOfTwo(n / 2);        
}

void reverseString(vector<char>& s) {
    rev(s, 0, s.size() - 1);
}
void rev(vector<char> &s, int i, int j){
    if (i >= j) return;
    int temp = s[i];
    s[i] = s[j];
    s[j] = temp;
    rev(s, i + 1, j - 1);
}
int findTheWinner(int n, int k) {
    if (n == 1) return 1;
    return (findTheWinner(n - 1, k) + k - 1) % n + 1;
}