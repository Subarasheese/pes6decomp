/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
struct RpcBuf { int result; int value; char name[0xFC]; char name2[0xFC]; };
struct Result { int result; int value; };
extern struct RpcBuf D_01204D00;
extern int D_01204F00;
extern int func_001A36E8(void);
extern int func_001A37E8(void);
extern char *func_001B08E8(char *, const char *, unsigned int);
extern int func_0019EE30(void *, int, unsigned int, void *, int, void *, int, void *, void *);
int func_001A4128(const char *name, const char *name2, struct Result *out, int fno) {
    if (func_001A36E8() < 0) return -0x10000;
    if (func_001A37E8() != 0) return -0x10004;
    func_001B08E8(D_01204D00.name, name, 0xFC);
    D_01204D00.name[0xFB] = 0;
    func_001B08E8(D_01204D00.name2, name2, 0xFC);
    D_01204D00.name2[0xFB] = 0;
    if (func_0019EE30(&D_01204F00, fno, 0, &D_01204D00, 0x200, &D_01204D00, 0x10, 0, 0) < 0) return -0x10001;
    if (D_01204D00.result == 0) return -0x10003;
    out->result = D_01204D00.result;
    out->value = D_01204D00.value;
    return 0;
}
