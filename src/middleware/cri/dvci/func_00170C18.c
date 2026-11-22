/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/htci.c (htCiSeek). See THIRD_PARTY.md. */

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
extern void func_00170400(void *detail, const char *message);

int func_00170C18(HtCiFile *h, int offset, int origin) {
    int position;
    if (h == 0) {
        func_00170400(h, "E0092712:handl is null.");
        return 0;
    }
    if (origin == 0) {
        h->pos = offset;
    } else if (origin == 2) {
        h->pos = h->nsct + offset;
    } else if (origin == 1) {
        h->pos += offset;
    }
    position = h->pos;
    h->done = 0;
    if (position >= h->nsct) {
        position = h->nsct;
    }
    if (position < 0) {
        position = 0;
    }
    h->pos = position;
    return position;
}
