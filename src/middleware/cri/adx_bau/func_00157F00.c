/* compiler: ee-gcc-2.96-G0 */
/* ADXB_Create adapted from LucasPicoli/god-hand-decomp, src/cod/0033c7f8.c. See THIRD_PARTY.md. */
typedef struct ADX_BASIC {
    short used;
    char pad2[6];
    void *xpd;
    char padC[0x38 - 0xC];
    int maxnch;
    int pcmbuf;
    int pcmbsize;
    int pcmbdist;
    char pad48[0x78 - 0x48];
    void *getwrfunc;
    struct ADX_BASIC *getwrobj;
    void (*addwrfunc)(void);
    struct ADX_BASIC *addwrobj;
    char pad88[0xCC - 0x88];
    int ainfLen;
    char ainf[16];
    short defOutVol;
    short defPan[2];
    char padE6[0x104 - 0xE6];
} ADX_BASIC;
extern ADX_BASIC D_00377028[16];
extern void func_00157EC8(ADX_BASIC *self);
extern void D_00157E70(int a0, int a1, int a2, int a3);
extern void func_00157EA8(int *a0, int a1, int a2);
extern void *memset(void *dst, int value, unsigned int size);
extern void *ADXPD_Create(void);
extern void func_00158020(ADX_BASIC *e);
ADX_BASIC *func_00157F00(int a0, int a1, int a2, int a3) {
    ADX_BASIC *p = D_00377028;
    ADX_BASIC *e;
    int i = 0;
    if (p->used != 0) {
        do {
            i++;
            p++;
            if (i >= 0x10)
                break;
        } while (p->used != 0);
    }
    if (i == 0x10)
        return 0;
    e = &D_00377028[i];
    memset(e, 0, 0x104);
    e->used = 1;
    e->xpd = ADXPD_Create();
    if (e->xpd == 0) {
        func_00158020(e);
        return 0;
    }
    e->getwrfunc = ((char *)D_00157E70) + 8;
    e->maxnch = a0;
    e->pcmbuf = a1;
    e->pcmbsize = a2;
    e->pcmbdist = a3;
    e->addwrfunc = func_00157EA8;
    e->getwrobj = e;
    e->addwrobj = e;
    func_00157EC8(e);
    return e;
}
