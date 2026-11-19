/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern int func_001A4AA0(void);
extern void func_001A4A38(int, int);
extern void func_001A4A48(unsigned int, void *, int);
extern void func_0019B3A0(int);
extern int func_001A4A90(int);
extern int D_005CB3D0[];
extern char D_005CAC28[];
void func_001A4B08(void) {
    if (func_001A4AA0()) {
        int first;
        unsigned int i = 2;
        int *base = D_005CB3D0;
        int *p = base + 4;
        func_001A4A38(base[0], base[1]);
        func_001A4A48(0x80074000, D_005CAC28, 0x7A8);
        func_0019B3A0(0);
        func_0019B3A0(2);
        first = *(volatile int *)&base[2];
        func_001A4A38(first, base[3]);
        do {
            int value = func_001A4A90(*p);
            i++;
            func_001A4A38(*p, value);
            p += 2;
        } while (i < 3);
    }
}
