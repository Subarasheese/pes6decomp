/* compiler: ee-gcc-2.9-G0 */
/* Adapted from gt4-decomp, src/libstream/unit_0057A128/func_00582C48.c.
 * MIT licence. See THIRD_PARTY.md. */
extern int D_005CA400;
extern volatile int D_005C8DEC;
extern int D_005C9FC0[2];
extern char D_005CA940[];
extern int func_001916E0(int);
extern void func_0019B140(int);
extern void func_0019E3F8(void *, int);
extern int func_0019EE30(void *, int, int, void *, int, void *, int, void *, void *);
int func_001921B8(int a, unsigned int *out) {
    int *send = &D_005CA400;
    int *buf;
    int r;
    if (!func_001916E0(26))
        return -1;
    D_005CA400 = a;
    func_0019E3F8(send, 4);
    buf = D_005C9FC0;
    if (func_0019EE30(D_005CA940, 5, 0, send, 4, buf, 8, 0, 0) < 0) {
        func_0019B140(D_005C8DEC);
        return -1;
    }
    if (out)
        *out = *(unsigned int *)((unsigned int)(buf + 1) | 0x20000000);
    r = *(int *)((unsigned int)buf | 0x20000000);
    func_0019B140(D_005C8DEC);
    return r;
}
