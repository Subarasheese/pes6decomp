/* compiler: mwcc-3.0.1b210 */
extern const unsigned char *func_00970870(unsigned short);

int func_00B34250(const unsigned short *left, const unsigned short *right) {
    const unsigned char *a;
    const unsigned char *b;
    int left_value, right_value;

    if (!*left) {
        return 1;
    }
    if (!*right) {
        return -1;
    }
    a = func_00970870(*left);
    b = func_00970870(*right);
    right_value = b[0x4] & 0x7F;
    left_value = a[0x4] & 0x7F;
    if (left_value < right_value) {
        return -1;
    }
    if (left_value == right_value) {
        if (*left < *right) {
            return -1;
        }
        return (*right < *left);
    }
    return 1;
}
