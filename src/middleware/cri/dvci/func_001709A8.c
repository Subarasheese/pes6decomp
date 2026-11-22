/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/htci.c (htci_alloc). See THIRD_PARTY.md. */

typedef struct SrdObj SrdObj;
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
extern HtCiFile D_00387460[13];
HtCiFile *func_001709A8(void) {
    HtCiFile *found = 0;
    int i;
    for (i = 0; i < 13; i++) {
        if (D_00387460[i].used == 0) {
            found = &D_00387460[i];
        }
    }

    return found;
}
