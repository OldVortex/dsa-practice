/*
Problem: Roman To Integer
LeetCode #13

Approach:
Traverse roman numeral from left to right
If current roman numeral is greater than previous:
Adjust result to account for subtraction pair (IV, IX, XL, XC, CD, CM)
Otherwise add current value to result

Time Complexity: O(n)
Space Complexity: O(1)

*/

int romanToInt(char* s) {
    int res = 0;
    int prev = 0;
    int n = strlen(s);
    char roman[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int val[7] = {1, 5, 10, 50, 100, 500, 1000};

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < 7; j++) {
            if (s[i] == roman[j]) {
                if (val[j] <= prev) {
                    res += val[j];
                    prev = val[j];
                } else {
                    res -= 2*prev;
                    prev = val[j];
                    res += prev;
                }
            }
        }
    }
    return res;
}
