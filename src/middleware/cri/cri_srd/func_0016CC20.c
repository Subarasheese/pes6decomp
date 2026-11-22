/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/srd.c (srd_check_dvd_error). See THIRD_PARTY.md. */

extern void printf(const char *format, ...);
typedef struct {
    unsigned char trycount;
    unsigned char spindlctrl;
    unsigned char datapattern;
    unsigned char pad;
} sceCdRMode;
extern int func_00114B20(void);
extern void func_00179610(void);
extern void func_00179688(void);
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
extern volatile int D_003850E0;
extern volatile int D_003850E4;
extern volatile int D_003850EC;
extern void func_0016D5C0(int value);

int func_0016CC20(SrdObj *h) {
    int err;
    if (D_003850E4 == 0) {
        return 0;
    }
    if (h->stat != 2) {
        return 0;
    }
    D_003850EC = 1;
    if (D_003850E0 == 1) {
        func_00179610();
        func_0016D5C0(0x1400);
        err = func_00114B20();
        func_0016D5C0(0x1401);
        func_00179688();
    } else {
        func_0016D5C0(0x1500);
        err = func_00114B20();
        func_0016D5C0(0x1501);
    }
    D_003850EC = 0;
    if ((err != 0) && (err != (-1))) {
        if (err != 32) {
            h->error = err;
            printf("SRD: Drive Error (sceCdGetError = 0x%x)\r\n", err);
            return 1;
        }
    }
    return 0;
}
