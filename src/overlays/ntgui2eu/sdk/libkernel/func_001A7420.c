/* compiler: ee-gcc-2.9-G0 */
/* Adapted from gt4-decomp, src/libstream/unit_005676B0/func_00571BE0.c.
 * MIT licence. See THIRD_PARTY.md. */
extern int func_001B0730(const char *, const char *, unsigned);
extern void func_001AD7F0(char *, int);
extern char *func_001AFFDC(const char *, int);
extern char D_00600868[];
int func_001A7420(const char *src, char *dst, int size) {
    int special = 0;
    int i = 0;
    const char *p;
    int cmp;
    func_001AD7F0(dst, size);
    if (!src)
        return -101;
    if (!dst)
        return -101;
    cmp = func_001B0730(src, D_00600868, 7);
    if (cmp == 0) {
        size--;
        p = src;
        for (;;) {
            p = func_001AFFDC(p, '.');
            if (!p)
                break;
            p++;
            i++;
        }
        special = i == 5;
    } else {
        size--;
    }
    if (special) {
        p = func_001AFFDC(src, '.');
        p++;
        p = func_001AFFDC(p, '.');
        p++;
        for (i = 0; i < size && p[i] && p[i] != '.'; i++)
            dst[i] = p[i];
        dst[i] = 0;
    } else {
        for (i = 0; i < size && src[i]; i++)
            dst[i] = src[i];
        dst[i] = 0;
    }
    return 0;
}
