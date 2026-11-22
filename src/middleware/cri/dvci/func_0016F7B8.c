/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/dvci.c (dvci_analysis_flist). See THIRD_PARTY.md. */

typedef unsigned int size_t;
extern void *memcpy(void *, const void *, size_t);
typedef struct DvCiFileLoc {
    unsigned int lsn;
    unsigned int size;
} DvCiFileLoc;
typedef struct DvCiTable {
    int files;
    int nfiles;
    int nent;
    int namelen;
} DvCiTable;
extern DvCiTable D_00387240;
extern void func_0016EC10(char *path);
int func_0016F7B8(char *buf, char *list, int listlen, int n, int nameLen) {
    int i;
    int start;
    int count;
    int len;
    char *dst;
    i = 0;
    count = 0;
    start = 0;
    while (list[i] != 0) {
        if ((list[i] == '\n') || (list[i] == 0)) {
            if ((list[i + 1] == '\n') || (list[i + 1] == 0)) {
                i++;
            }
            len = i - start;
            if ((list[i - 1] == '\n') || (list[i - 1] == '\r')) {
                list[i - 1] = 0;
            }
            if ((list[i - 2] == '\n') || (list[i - 2] == '\r')) {
                list[i - 2] = 0;
            }
            dst = buf + ((n * (sizeof(DvCiFileLoc))) + (count * (nameLen + 1)));
            memcpy(dst, list + start, len);
            func_0016EC10(dst);
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
        if (i > listlen) {
            break;
        }
    }

    if (D_00387240.files == 0) {
        D_00387240.files = (int)buf;
        D_00387240.nfiles = count;
        D_00387240.nent = n;
        D_00387240.namelen = nameLen;
    }
    return count;
}
