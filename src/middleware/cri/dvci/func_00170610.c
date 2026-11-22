/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/htci.c (htCiExecServer). See THIRD_PARTY.md. */

extern int func_0017A220(int *flag);
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
extern int D_003873F4;
extern HtCiFile D_00387460[13];
extern void func_00170548(HtCiFile *h);
void func_00170610(void) {
    int i;
    if (func_0017A220(&D_003873F4) != 0) {
        for (i = 0; i < 13; i++) {
            if (D_00387460[i].used == 1) {
                func_00170548(&D_00387460[i]);
            }
        }

        D_003873F4 = 0;
    }
}
