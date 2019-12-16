int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count) {
if (arr && s) {
    int left = 0;
    int right = size - 1;
    int middle;
    int k;
    for (*count = 1; left <= right;(*count)++) {
        middle = left + (right - left)/2;
        k = mx_strcmp(arr[middle], s);
        if (k == 0)
            return middle;
        if (k < 0)
            (left = middle + 1);
        else
            (right = middle - 1);
    }
}
*count = 0;
return -1;
}

