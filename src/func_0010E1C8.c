/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
struct RpcBuf {
    int result;
    int pad;
    char name[0x100];
};

extern struct RpcBuf D_003EF6C0;
extern int D_003EF8C0;

extern int _lf_bind(void);
extern int func_0010DC60(void);
extern char *func_001C8590(char *dst, const char *src, unsigned int n);
extern int sceSifCallRpc(void *cd, int fno, unsigned int mode, void *send, int ssize, void *recv, int rsize, void *end, void *param);

int func_0010E1C8(const char *name)
{
    if (_lf_bind() < 0) {
        return -0x10000;
    }
    if (func_0010DC60() != 0) {
        return -0x10004;
    }
    func_001C8590(D_003EF6C0.name, name, 0xFC);
    D_003EF6C0.name[0xFB] = 0;
    if (sceSifCallRpc(&D_003EF8C0, 9, 0, &D_003EF6C0, 0x200, &D_003EF6C0, 4, 0, 0) < 0) {
        return -0x10001;
    }
    return D_003EF6C0.result;
}
