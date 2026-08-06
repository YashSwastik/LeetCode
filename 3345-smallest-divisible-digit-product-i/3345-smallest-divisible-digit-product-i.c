int smallestNumber(int n, int t) {
    int num = n;

    while (1) {
        int x = 1;
        int temp = num;

        while (temp != 0) {
            x *= temp % 10;
            temp /= 10;
        }

        if (x % t == 0)
            return num;

        num++;
    }
}