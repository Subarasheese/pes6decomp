/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/srd.c (SRD_WaitComplete). See THIRD_PARTY.md. */

typedef struct {
    unsigned char trycount;
    unsigned char spindlctrl;
    unsigned char datapattern;
    unsigned char pad;
} sceCdRMode;
extern void func_001795B0(void);
extern void func_001795C8(void);
typedef struct SrdObj SrdObj;
struct SrdObj {
    signed char used;
    signed char devtype;
    signed char stat;
    signed char mode;
    int abort_request;
    int lsn;
    int sectors;
    void *buf;
    sceCdRMode rmode;
    void *host_buf;
    int pad1c;
    long long host_size;
    long long host_sector;
    int fd;
    int error;
};
extern SrdObj D_00385098;
extern int D_003850D4;
extern volatile int D_003850F4;
extern void func_0016C960(void);
extern void func_0016C990(SrdObj *srd);
extern void func_0016C9B8(SrdObj *f);

void func_0016CA88(SrdObj *h) {
    short i;
    int stat;
    SrdObj *srd;
    for (i = 0; i < 1000; i++) {
        func_001795B0();
        if (D_003850D4 == 1) {
            func_001795C8();
            func_0016C960();
            continue;
        }
        D_003850D4 = 1;
        func_001795C8();
        break;
    }

    stat = h->stat;
    if (stat == 2) {
        srd = &D_00385098;
        if (srd->devtype == 1) {
            func_0016C990(h);
        }
        if (srd->devtype == stat) {
            func_0016C9B8(h);
        }
        if (h->stat != 9) {
            h->stat = 3;
            D_003850F4++;
        }
    }
    D_003850D4 = 0;
}
