/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/htci.c (htCiStopTr). See THIRD_PARTY.md. */

typedef struct SrdObj SrdObj;
extern void func_0016CBB8(SrdObj *srd);
extern void func_0016D138(void);
extern void func_001610B0(const char *format, ...);
typedef struct HtCiFile {
    signed char used;
    signed char cached;
    signed char state;
    signed char rsv;
    long long size;
    int nsct;
    int end_fg;
    int fd;
    int pos;
    char *buf;
    int req;
    int done;
    SrdObj *stm;
} HtCiFile;
extern void func_001703D0(void);
extern void func_00170400(void *detail, const char *message);
extern void func_00170610(void);
extern int func_00170F70(HtCiFile *h);
void func_00170E78(HtCiFile *h) {
    int i;
    i = 0;
    if (h == 0) {
        func_00170400(0, "E0082401:handl is null.");
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
        func_00170610();
        func_00170F70(h);
        if (h->state != 2) {
            break;
        }
        if ((++i) > 0x63fff6) {
            func_001610B0("HTCI: htCiStopTr timeout.\r\n");
            break;
        }
        func_001703D0();
    }

    h->state = 0;
    h->done = 0;
}
