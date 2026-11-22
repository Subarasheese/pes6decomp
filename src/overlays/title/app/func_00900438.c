/* compiler: ee-gcc-2.9-G0 */
/* Komasia/sly2-decomp, src/lib/_sceMpegErrorBdec.c (_sceMpegErrorBdec). See THIRD_PARTY.md. */

typedef struct {
    int type;
    int data[7];
} CB;
typedef struct {
    char p0[0x868];
    void *mp;
} D;
void func_00900500(D *d, const char *msg);
int func_008FBDB0(void *mp, CB *cb);
int DIntr(void);
int EIntr(void);
void func_00900438(D *d) {
    CB cb;
    int e;

    func_00900500(d, "Error code detected(BDEC)");
    cb.type = 2;
    func_008FBDB0(d->mp, &cb);
    *(volatile unsigned int *)0x10002010 = 0x40000000;
    cb.type = 3;
    func_008FBDB0(d->mp, &cb);
    e = DIntr();
    *(volatile unsigned int *)0x1000F590 = *(volatile unsigned int *)0x1000F520 | 0x10000;
    *(volatile unsigned int *)0x1000B000 = 0;
    *(volatile unsigned int *)0x1000F590 = *(volatile unsigned int *)0x1000F520 & ~0x10000;
    if (e)
        EIntr();
    *(volatile unsigned int *)0x1000B020 = 0;
}
