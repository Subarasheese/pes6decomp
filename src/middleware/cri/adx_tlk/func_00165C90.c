/* compiler: ee-gcc-2.96-G0 */
/* func_0032A018 adapted from LucasPicoli/god-hand-decomp, src/cod/0032a018.c. See THIRD_PARTY.md.
 */
typedef struct AdxDecHn {
    unsigned char unk0;
    unsigned char stat;
    char pad2[2];
    void *sj;
    char pad8[4];
    int unkC;
    char pad10[0x78];
    int ofs;
    char pad8C[0x18];
    int base;
    int sub;
} AdxDecHn;
extern int func_00162A20(void *);
extern int func_00162A98(void *);
extern int func_00162A50(void *);
extern int func_00162888(void *);
extern int func_00161410(int);
extern int func_00166EA0(AdxDecHn *, int);
void func_00165C90(AdxDecHn *adxt, int *pos, int *rate) {
    unsigned char stat = adxt->stat;
    int t;
    int n;
    int v;
    if (((unsigned int)(stat - 3)) < 2) {
        *rate = func_00162A20(adxt->sj);
        t = func_00162888(adxt->sj);
        n = func_00161410(adxt->unkC);
        *pos = (t - ((n - adxt->sub) + func_00166EA0(adxt, 0))) + adxt->base;
    } else if (((signed char)stat) == 5) {
        *pos = func_00162A98(adxt->sj);
        *rate = func_00162A20(adxt->sj);
        *pos = (*pos) * (16 / func_00162A50(adxt->sj));
        *pos = (*pos) + adxt->base;
    } else {
        *pos = 0;
        *rate = 1;
    }
    v = (*pos) + adxt->ofs;
    if (v < 0)
        v = 0;
    *pos = v;
}
