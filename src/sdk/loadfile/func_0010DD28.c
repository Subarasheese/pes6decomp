/* compiler: ee-gcc-2.9-G0 */
/* Adapted from gt4-decomp, src/runtime/unit_0059BE80/func_005B6430.c.
 * MIT licence. See THIRD_PARTY.md. */
struct Buf {
    int size, result;
    char name[252];
    char args[252];
};
extern struct Buf D_003EF6C0;
extern int D_003EF8C0;
int _lf_bind(void), func_0010DC60(void);
extern void *memcpy(void *, const void *, unsigned int);
int sceSifCallRpc(void *, int, int, void *, int, void *, int, void *, void *);
int func_0010DD28(int buffer, int arglen, const void *args, int *result) {
    if (_lf_bind() < 0)
        return -0x10000;
    if (func_0010DC60())
        return -0x10004;
    D_003EF6C0.size = buffer;
    if (args) {
        if (arglen > 252) {
            __builtin_memcpy(D_003EF6C0.args, args, 252);
            D_003EF6C0.result = 252;
        } else {
            memcpy(D_003EF6C0.args, args, arglen);
            D_003EF6C0.result = arglen;
        }
    } else {
        D_003EF6C0.result = 0;
    }
    if (sceSifCallRpc(&D_003EF8C0, 6, 0, &D_003EF6C0, 512, &D_003EF6C0, 8, 0, 0) < 0)
        return -0x10001;
    {
        int ret = D_003EF6C0.size;
        *result = D_003EF6C0.result;
        return ret;
    }
}
