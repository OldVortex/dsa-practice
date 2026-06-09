/*
Problem: Palindrome Number
Leetcode #9
Difficulty: Easy

Approach:
Negative numbers and multiples of 10 will not be palindromes
Reverse half the number and compare with other half

Time Complexity: O(log10(n))
Space Complexity: O(1)
*/

bool isPalindrome(int x) {
    if (x < 0 || x != 0 && x % 10 == 0) { 
        return false;
    }

    int rev = 0;

    while (x > rev) {
        rev = (rev * 10) + (x % 10);
        x /= 10;
    }
    return (x == rev) || (x == rev/10);

}
