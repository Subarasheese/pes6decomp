/* compiler: ee-gcc-2.9-G0 */
/* Adapted from gt4-decomp, src/libstream/unit_0057A128/func_0058D4C8.c.
 * MIT licence. See THIRD_PARTY.md. */
struct Sema {
    int count, max, init, wait, attr;
    const char *option;
};
struct Client {
    char pad[0x24];
    int server;
};
extern int D_005CAA34, D_005CAA38;
extern struct Client D_011FD7C0;
extern int D_011FED80[3];
extern char D_011FD840[], D_005FF288[], D_005FF298[], D_005FF2B0[], D_005FF2C8[], D_005FF2F0[];
int func_001963C0(int, int *, int *);
int func_0019B120(struct Sema *);
void func_0019B130(int);
void func_0019B140(int);
int func_0019B160(int);
void func_0019DBD0(const char *, ...);
void func_0019E4A8(int);
int func_0019EC50(struct Client *, int, int);
int func_0019EE30(struct Client *, int, int, void *, int, void *, int, void *, void *);
int func_00195970(void) {
    struct Sema sem;
    int i = 0, j, r;
    if (D_005CAA34 < 0) {
        sem.init = 1;
        sem.option = D_005FF288;
        sem.max = 1;
        D_005CAA34 = func_0019B120(&sem);
        if (D_005CAA34 == -1)
            return -101;
        sem.max = 1;
        sem.init = 0;
        sem.option = D_005FF298;
        r = func_0019B120(&sem);
        D_005CAA38 = r;
        if (r == -1) {
            func_0019B130(D_005CAA34);
            D_005CAA34 = r;
            return -101;
        }
    }
    func_001963C0(0, 0, 0);
    func_0019B160(D_005CAA34);
    func_0019E4A8(0);
    for (;;) {
        if (func_0019EC50(&D_011FD7C0, 0x80000400, 0) < 0) {
            func_0019DBD0(D_005FF2B0);
            for (;;)
                ;
        }
        if (D_011FD7C0.server)
            break;
        for (j = 0x100000; j; j--)
            ;
        i++;
        if (i >= 512) {
            func_0019DBD0(D_005FF2B0);
            return -91;
        }
    }
    r = func_0019EE30(&D_011FD7C0, 254, 0, D_011FD840, 48, D_011FED80, 12, 0, 0);
    func_0019B140(D_005CAA34);
    if (r < 0) {
        D_011FD7C0.server = 0;
        return -91;
    }
    if (D_011FED80[1] < 522) {
        func_0019DBD0(D_005FF2C8);
        D_011FD7C0.server = 0;
        return -120;
    }
    if (D_011FED80[2] < 526) {
        func_0019DBD0(D_005FF2F0);
        D_011FD7C0.server = 0;
        return -121;
    }
    return D_011FED80[0];
}
