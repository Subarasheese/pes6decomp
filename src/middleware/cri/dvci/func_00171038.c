/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/htci.c (htci_getnumtr_lower). See THIRD_PARTY.md. */

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

int func_00171038(HtCiFile *h) {
    unsigned long long size = ((long long)h->done) << 11;
    return (int)(((h->size < size) ? (h->size) : (size)) & 0xFFFFFFFF);
}
