/*
Problem Name: Valid Parantheses
Leetcode #20

Approach:
- Use a stack to store opening brackets.
- For every closing bracket, check against the most recent opening bracket.
- Return false on mismatch or premature closing bracket.

Time Complexity: O(n)
Space Complexity: O(n)
*/

bool isValid(char* s) {
    int n = strlen(s);
    char stack[n];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        if (ch == '(' || ch == '[' || ch == '{') {
            stack[++top] = ch;
        }

        else {
            if (top == -1) {
                return false;
            }

            char start = stack[top--];

            if ((ch == ')' && start != '(') ||
                (ch == ']' && start != '[') ||
                (ch == '}' && start != '{')) {
                    return false;
            }
        }
    }
    return top == -1;
}
