/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/mfci.c (mfci_alloc). See THIRD_PARTY.md. */

typedef struct MfCiFile {
    signed char used;
    signed char stat;
    char rsv;
    char rsv2;
    int sctsize;
    int size;
    int nsct;
    int pos;
    int nbyte;
    int reqsct;
    char name[20];
    int ofs;
    int len;
} MfCiFile;
extern MfCiFile D_0038C1F8[40];
MfCiFile *func_00172FE8(void) {
    MfCiFile *found = 0;
    int i;
    for (i = 0; i < 40; i++) {
        if (D_0038C1F8[i].used == 0) {
            found = &D_0038C1F8[i];
            break;
        }
    }

    return found;
}
