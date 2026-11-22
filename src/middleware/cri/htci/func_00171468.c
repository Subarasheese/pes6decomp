/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/htci.c (htci_analysis_flist). See THIRD_PARTY.md. */

typedef unsigned int size_t;
extern void *memcpy(void *, const void *, size_t);
typedef struct HtCiFileLoc {
    int fd;
    int size;
} HtCiFileLoc;
typedef struct HtCiTable {
    int files;
    unsigned int nfiles;
    int nent;
    int namelen;
} HtCiTable;
extern HtCiTable D_00387800;
int func_00171468(char *buf, char *list, int n, int nameLen) {
    int i;
    int start;
    int count;
    int len;
    char *dst;
    i = 0;
    count = 0;
    start = 0;
    while (list[i] != 0) {
        if (list[i] == '\\') {
            list[i] = '/';
        }
        if (((list[i] == '\n') || (list[i] == '\r')) || (list[i] == 0)) {
            if (((list[i + 1] == '\n') || (list[i + 1] == '\r')) || (list[i + 1] == 0)) {
                i++;
            }
            len = i - start;
            if ((list[i - 1] == '\n') || (list[i - 1] == '\r')) {
                list[i - 1] = 0;
            }
            dst = buf + ((n * (sizeof(HtCiFileLoc))) + (count * (nameLen + 1)));
            memcpy(dst, list + start, len);
            if (dst[len - 1] != 0) {
                dst[len] = 0;
            }
            start = i + 1;
            count++;
            if (count == n) {
                break;
            }
        }
        i++;
    }

    if (D_00387800.files == 0) {
        D_00387800.files = (int)buf;
        D_00387800.nfiles = count;
        D_00387800.nent = n;
        D_00387800.namelen = nameLen;
    }
    return count;
}
