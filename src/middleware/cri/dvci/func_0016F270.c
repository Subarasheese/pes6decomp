/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/dvci.c (dvCiStopTr). See THIRD_PARTY.md. */

extern char D_003CA6F8[]; /* E0092912:handl is null. */
extern char D_003CA758[]; /* DVCI: dvCiStopTr timeout. (10sec)\r\n */
typedef struct {
    unsigned int lsn;
    unsigned int size;
    char name[16];
    unsigned char date[8];
    unsigned int flag;
} sceCdlFILE;
typedef struct {
    unsigned char trycount;
    unsigned char spindlctrl;
    unsigned char datapattern;
    unsigned char pad;
} sceCdRMode;
typedef struct SrdObj SrdObj;
extern void func_0016CBB8(SrdObj *srd);
extern void func_0016D138(void);
extern void func_001610B0(const char *format, ...);
typedef struct DvCiFile {
    signed char used;
    signed char cached;
    signed char state;
    signed char instat;
    unsigned int size;
    int nsct;
    int pos;
    int req;
    int done;
    char *buf;
    SrdObj *stm;
    sceCdlFILE fp;
    sceCdRMode rmode;
} DvCiFile;
extern void func_0016E9E0(void *detail, const char *message);
extern void func_0016EB80(void);
extern int func_0016F358(DvCiFile *h);
void func_0016F270(DvCiFile *h) {
    int i;
    i = 0;
    if (h == 0) {
        func_0016E9E0(0, D_003CA6F8);
        return;
    }
    if (((unsigned char)h->state) < 2) {
        return;
    }
    if (h->stm != 0) {
        func_0016CBB8(h->stm);
    }
    while (1) {
        func_0016D138();
        func_0016EB80();
        func_0016F358(h);
        if (h->state != 2) {
            break;
        }
        if ((++i) > 0x9ffff) {
            func_001610B0(D_003CA758);
            break;
        }
    }

    h->state = 0;
    h->done = 0;
}
