/*
Problem: Remove Element
LeetCode #27

Approach:
Traverse the array and check for target value.
If current element is not equal to the target value, copy it to the front of the array

Time Complexity: O(n)
Space Complexity: O(1)
*/


int removeElement(int* nums, int numsSize, int val) {
    int k = 0;

    if (numsSize == 0) {
        return k;
    }

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}
