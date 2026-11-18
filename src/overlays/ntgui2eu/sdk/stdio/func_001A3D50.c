/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
struct RpcBuf {
    int result;
    int pad;
    char name[0x100];
};

extern struct RpcBuf D_01204D00;
extern int D_01204F00;

extern int func_001A36E8(void);
extern int func_001A37E8(void);
extern char *func_001B08E8(char *dst, const char *src, unsigned int n);
extern int func_0019EE30(void *cd, int fno, unsigned int mode, void *send, int ssize, void *recv, int rsize, void *end, void *param);

int func_001A3D50(const char *name)
{
    if (func_001A36E8() < 0) {
        return -0x10000;
    }
    if (func_001A37E8() != 0) {
        return -0x10004;
    }
    func_001B08E8(D_01204D00.name, name, 0xFC);
    D_01204D00.name[0xFB] = 0;
    if (func_0019EE30(&D_01204F00, 9, 0, &D_01204D00, 0x200, &D_01204D00, 4, 0, 0) < 0) {
        return -0x10001;
    }
    return D_01204D00.result;
}
