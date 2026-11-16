char* digitSum(char* s, int k) {
    int n = strlen(s);
    char* curr = (char*)malloc((n + 1) * sizeof(char));
    strcpy(curr, s);

    while (n > k) {
        char* next = (char*)malloc((n + 1) * sizeof(char));
        int next_idx = 0;

        for (int i = 0; i < n; i += k) {
            int sum = 0;
            for (int j = i; j < i + k && j < n; j++) {
                sum += curr[j] - '0';
            }
            next_idx += sprintf(next + next_idx, "%d", sum);
        }

        free(curr);
        curr = next;
        n = next_idx;
    }

    return curr;
}