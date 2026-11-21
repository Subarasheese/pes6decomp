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
extern struct G480 D_003F3880;
extern struct G500 D_003F3900;
extern char D_003F4E40[];
extern int D_00374654, D_00374650;
extern char func_00115708[];
extern void func_00105380(int);
extern int func_001053B0(int);
extern void FlushCache(int);
extern int sceSifCallRpc(void *, int, int, void *, int, void *, int, void *, int);

int func_00115D60(int a0, unsigned p, int len) {
    unsigned i;
    struct G500 *r;
    unsigned char *p2 = (unsigned char *)p;
    if (D_003F3880.v24 == 0)
        return -100;
    if (func_001053B0(D_00374654) < 0)
        return -200;
    D_003F3900.v0 = a0;
    r = &D_003F3900;
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
    for (i = 0; i < D_003F3900.v14; i++) {
        unsigned char c = p2[i];
        D_003F3900.data[i] = c;
    }
    FlushCache(0);
    if (sceSifCallRpc(&D_003F3880, 6, 1, &D_003F3900, 0x30, D_003F4E40, 4, func_00115708, 0)) {
        func_00105380(D_00374654);
        return -91;
    }
    D_00374650 = 6;
    return 0;
}
