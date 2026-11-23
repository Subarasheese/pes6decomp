/* compiler: ee-gcc-2.96-G0 */
/* SVM_ExecSvrFunc adapted from LucasPicoli/god-hand-decomp, src/cod/0033bc48.c. See THIRD_PARTY.md.
 */
extern int D_00396E18[6];
extern struct Ent D_00510D20[];
extern volatile int D_00396E38[];
typedef int (*Fp)(int);
struct Ent {
    Fp fp;
    int arg;
    int pad;
};
int func_00179E98(int idx) {
    volatile int *flag = &D_00396E38[idx];
    struct Ent *e = &D_00510D20[idx * 6];
    int acc = 0;
    int i = 5;
    do {
        Fp fp = e->fp;
        int arg = e->arg;
        e++;
        if (fp) {
            int r;
            *flag = 1;
            r = fp(arg);
            *flag = 0;
            acc |= r;
        }
    } while ((--i) >= 0);
    D_00396E18[idx]++;
    return acc;
}
