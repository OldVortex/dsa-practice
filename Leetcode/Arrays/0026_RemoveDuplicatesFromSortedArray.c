/*
Problem: Remove Duplicates from Sorted Array
LeetCode #26

Approach:
Use the two-pointer technique to remove duplicates in-place.
One pointer (i) tracks the position of the last unique element, while the other pointer (j) traverses the array. 
Whenever a new unique element is found, increment i and copy the element to nums[i].
The first (i + 1) elements of the array will contain all unique values in sorted order.

Time Complexity: O(n)
Space Complexity: O(1)
*/

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) {
        return 0;
    }

    int i = 0;
    for (int j = 1; j < numsSize; j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1;
}
