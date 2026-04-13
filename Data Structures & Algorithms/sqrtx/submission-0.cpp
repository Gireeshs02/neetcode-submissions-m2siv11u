class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;

        int l = 0, r = x / 2;
        int res = 0;

        while (l <= r) {
            int m = l + (r - l) / 2;
            if (m <= x / m) {
                l = m + 1;
                res = m;
            }
            else {
                r = m - 1;
            }
        }
        return res;
    }
};