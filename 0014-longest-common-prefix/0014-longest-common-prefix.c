char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0)
        return "";

    int k = 0;

    while (strs[0][k] != '\0') {
        for (int i = 1; i < strsSize; i++) {
            if (strs[i][k] == '\0' || strs[i][k] != strs[0][k]) {
                strs[0][k] = '\0';
                return strs[0];
            }
        }
        k++;
    }

    return strs[0];
}