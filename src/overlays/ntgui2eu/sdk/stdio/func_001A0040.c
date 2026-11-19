/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef unsigned int u32;

struct IopBufReq {
    unsigned int size;
    unsigned int count;
};

extern struct IopBufReq D_01203340;
extern int D_005CABE4;
extern char D_01204A40[];
extern char D_01203F80[];
extern int func_0019F5D0(void);
extern u32 func_0019F6D8(int, int, int, int, int, int, int, int, int, int);
extern int func_0019FC48(int);
extern void func_0019FC78(void);
extern void func_0019FD70(void);
extern int func_0019FF78(void);

/* sceFsSetIopBuf */
int func_001A0040(unsigned int buffsize, unsigned int buffcnt)
{
    struct IopBufReq *req;
    int ret;

    func_0019FC48(0xFE);
    if (D_005CABE4 == 0)
        func_0019FD70();
    if (func_0019FF78() != 0) {
        func_0019FC78();
        return 0xFFFEFFFC;
    }
    if (func_0019F5D0() != 0) {
        func_0019FC78();
        return -0x10;
    }
    if ((buffsize & 0x3FFF) != 0 || buffsize == 0 || buffsize > 0xFFFFF || buffcnt == 0 || buffcnt > 0x20) {
        func_0019FC78();
        return -0x16;
    }
    D_01203340.size = buffsize;
    req = &D_01203340;
    req->count = buffcnt;
    if ((int)func_0019F6D8((int)D_01204A40, 0xFE, 0, (int)req, 8, (int)D_01203F80, 4, 0, 0, 0) < 0) {
        func_0019FC78();
        return -0xB;
    }
    ret = *(int *)((u32)D_01203F80 | 0x20000000);
    func_0019FC78();
    return ret;
}
