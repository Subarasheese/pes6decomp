/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef unsigned int u32;

struct IopBufReq {
    unsigned int size;
    unsigned int count;
};

extern struct IopBufReq D_003EDD00;
extern int D_0037138C;
extern char D_003EF400[];
extern char D_003EE940[];
extern int func_00109A48(void);
extern u32 func_00109B50(int, int, int, int, int, int, int, int, int, int);
extern int func_0010A0C0(int);
extern void func_0010A0F0(void);
extern void func_0010A1E8(void);
extern int func_0010A3F0(void);

/* sceFsSetIopBuf */
int func_0010A4B8(unsigned int buffsize, unsigned int buffcnt)
{
    struct IopBufReq *req;
    int ret;

    func_0010A0C0(0xFE);
    if (D_0037138C == 0)
        func_0010A1E8();
    if (func_0010A3F0() != 0) {
        func_0010A0F0();
        return 0xFFFEFFFC;
    }
    if (func_00109A48() != 0) {
        func_0010A0F0();
        return -0x10;
    }
    if ((buffsize & 0x3FFF) != 0 || buffsize == 0 || buffsize > 0xFFFFF || buffcnt == 0 || buffcnt > 0x20) {
        func_0010A0F0();
        return -0x16;
    }
    D_003EDD00.size = buffsize;
    req = &D_003EDD00;
    req->count = buffcnt;
    if ((int)func_00109B50((int)D_003EF400, 0xFE, 0, (int)req, 8, (int)D_003EE940, 4, 0, 0, 0) < 0) {
        func_0010A0F0();
        return -0xB;
    }
    ret = *(int *)((u32)D_003EE940 | 0x20000000);
    func_0010A0F0();
    return ret;
}
