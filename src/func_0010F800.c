/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern int func_0010F798(void);
extern void func_0010F730(int, int);
extern void func_0010F740(unsigned int, void *, int);
extern void FlushCache(int);
extern int func_0010F788(int);
extern int D_003721D0[];
extern char D_00371A28[];
void func_0010F800(void) {
    if (func_0010F798()) {
        int first;
        unsigned int i = 2;
        int *base = D_003721D0;
        int *p = base + 4;
        func_0010F730(base[0], base[1]);
        func_0010F740(0x80074000, D_00371A28, 0x7A8);
        FlushCache(0);
        FlushCache(2);
        first = *(volatile int *)&base[2];
        func_0010F730(first, base[3]);
        do {
            int value = func_0010F788(*p);
            i++;
            func_0010F730(*p, value);
            p += 2;
        } while (i < 3);
    }
}
