/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/srd.c (SRD_Break). See THIRD_PARTY.md. */

extern void printf(const char *format, ...);
typedef struct {
    unsigned char trycount;
    unsigned char spindlctrl;
    unsigned char datapattern;
    unsigned char pad;
} sceCdRMode;
extern void func_001795E0(void);
extern void func_00179658(void);
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

void func_0016CBB8(SrdObj *object) {
    func_001795E0();
    if (object == 0) {
        printf("SRD: SRD_Break handle is NULL\r\n");
    } else if (object->abort_request == 1) {
        printf("SRD: Already Break!\r\n");
    } else {
        object->abort_request = 1;
    }
    func_00179658();
}
