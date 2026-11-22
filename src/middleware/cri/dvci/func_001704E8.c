/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/k0.c (func_0040B1C0). See THIRD_PARTY.md. */

struct B {
    int p0;
    int p4;
    long long lim;
    int p10;
    int p14;
    int p18;
    int a;
    int base;
    int b;
};
extern void func_001C48E8(int, int, int);

void func_001704E8(struct B *p) {
    long long lim = p->lim;
    long long end = (((long long)p->a) + p->b) << 11;
    if (((unsigned long long)lim) < ((unsigned long long)end)) {
        int n = (int)(end - lim);
        func_001C48E8((p->base + (p->b << 11)) - n, 0, n);
    }
}
