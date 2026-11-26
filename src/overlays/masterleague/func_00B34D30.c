/* compiler: mwcc-3.0.1b210 */
typedef struct {
    unsigned char before[0x1];
    unsigned char low : 4;
    unsigned char attribute : 4;
} PlayerAttribute;
extern const PlayerAttribute *func_00970870(unsigned short);

int func_00B34D30(const unsigned short *left, const unsigned short *right) {
    const PlayerAttribute *a;
    const PlayerAttribute *b;
    int left_value, right_value;

    if (!*left) {
        return 1;
    }
    if (!*right) {
        return -1;
    }
    a = func_00970870(*left);
    b = func_00970870(*right);
    right_value = b->attribute;
    left_value = a->attribute;
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
