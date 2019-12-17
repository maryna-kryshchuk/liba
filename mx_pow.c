double mx_pow(double n, unsigned int pow) {
    double r = 1;

    if (pow == 0)
        return r;
    else if (pow > 0) {
        for (unsigned int i = 0; i < pow; i++)
            r = r * n;
    }
    return r;
}


