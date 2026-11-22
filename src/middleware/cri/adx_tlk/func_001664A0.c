/* compiler: ee-gcc-2.96-G0 */
/* func_0032A720 adapted from LucasPicoli/god-hand-decomp, src/cod/0032a720.c. See THIRD_PARTY.md.
 */
extern int D_0037AC98;
extern char D_003C8AD0[];
extern char D_003C8B00[];
typedef struct {
    char pad0[3];
    signed char nch;
    int sj;
    char pad8[4];
    int rna;
    char pad10[0x42 - 0x10];
    short pan[(0xAC - 0x42) / 2];
    char padAC;
    signed char mode;
} AdxPanHn;
extern void func_0015B478(const char *msg);
extern int func_00162BE0(int sj, int ch);
extern int func_00162A38(int sj);
extern void func_001614F0(int rna, int ch, int pan);
void func_001664A0(AdxPanHn *a, int ch, int pan) {
    int base;
    int out;
    if (a == 0) {
        func_0015B478(D_003C8AD0);
        return;
    }
    if (a->mode == 1) {
        base = func_00162BE0(a->sj, ch);
        if (base == (-128))
            base = 0;
    } else {
        base = 0;
    }
    if (D_0037AC98 != 0) {
        out = 0;
    } else if (pan == (-128)) {
        if (func_00162A38(a->sj) == 2)
            out = (ch == 0) ? (-15) : (15);
        else
            out = 0;
        out += base;
    } else {
        out = pan + base;
    }
    a->pan[ch] = pan;
    if (ch < a->nch)
        func_001614F0(a->rna, ch, out);
    else
        func_0015B478(D_003C8B00);
}
