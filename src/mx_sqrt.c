int mx_sqrt(int x) {
    int r;
    r = 0;

    if (x > 0) {
        for(int i = 1; i <= x/2; i++) {
            if (i * i == x)
            r = i;
        }
    }
    return r;
}

