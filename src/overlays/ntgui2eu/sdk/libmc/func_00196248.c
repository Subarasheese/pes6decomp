/* compiler: ee-gcc-2.9-G0 */
/* Adapted from gt4-decomp, src/libstream/unit_0057A128/func_0058DDA0.c.
 * MIT licence. See THIRD_PARTY.md. */
struct G480 {
    char pad[0x24];
    int v24;
};
struct G500 {
    int v0;
    int v4;
    int v8;
    int vc;
    int v10;
    unsigned v14;
    int v18;
    int v1c;
    unsigned char data[0x10];
};
extern struct G480 D_011FD7C0;
extern struct G500 D_011FD840;
extern char D_011FED80[];
extern int D_005CAA34, D_005CAA30;
extern char func_00195BF0[];
extern void func_0019B140(int);
extern int func_0019B170(int);
extern void func_0019B3A0(int);
extern int func_0019EE30(void *, int, int, void *, int, void *, int, void *, int);

int func_00196248(int a0, unsigned p, int len) {
    unsigned i;
    struct G500 *r;
    unsigned char *p2 = (unsigned char *)p;
    if (D_011FD7C0.v24 == 0)
        return -100;
    if (func_0019B170(D_005CAA34) < 0)
        return -200;
    D_011FD840.v0 = a0;
    r = &D_011FD840;
    if (len < 0x11) {
        r->v14 = len;
        r->vc = 0;
        r->v18 = 0;
    } else {
        unsigned t = p - 0x10;
        unsigned d = ((p - 1) & 0xFFFFFFF0) - t;
        r->vc = len - d;
        r->v14 = d;
        r->v18 = p + d;
    }
    for (i = 0; i < D_011FD840.v14; i++) {
        unsigned char c = p2[i];
        D_011FD840.data[i] = c;
    }
    func_0019B3A0(0);
    if (func_0019EE30(&D_011FD7C0, 6, 1, &D_011FD840, 0x30, D_011FED80, 4, func_00195BF0, 0)) {
        func_0019B140(D_005CAA34);
        return -91;
    }
    D_005CAA30 = 6;
    return 0;
}
