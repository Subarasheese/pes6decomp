/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
struct RpcBuf { int result; int value; char name[0xFC]; char name2[0xFC]; };
struct Result { int result; int value; };
extern struct RpcBuf D_003EF6C0;
extern int D_003EF8C0;
extern int _lf_bind(void);
extern int func_0010DC60(void);
extern char *func_001C8590(char *, const char *, unsigned int);
extern int sceSifCallRpc(void *, int, unsigned int, void *, int, void *, int, void *, void *);
int _sceSifLoadElfPart(const char *name, const char *name2, struct Result *out, int fno) {
    if (_lf_bind() < 0) return -0x10000;
    if (func_0010DC60() != 0) return -0x10004;
    func_001C8590(D_003EF6C0.name, name, 0xFC);
    D_003EF6C0.name[0xFB] = 0;
    func_001C8590(D_003EF6C0.name2, name2, 0xFC);
    D_003EF6C0.name2[0xFB] = 0;
    if (sceSifCallRpc(&D_003EF8C0, fno, 0, &D_003EF6C0, 0x200, &D_003EF6C0, 0x10, 0, 0) < 0) return -0x10001;
    if (D_003EF6C0.result == 0) return -0x10003;
    out->result = D_003EF6C0.result;
    out->value = D_003EF6C0.value;
    return 0;
}
