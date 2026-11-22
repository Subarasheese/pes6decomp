/* compiler: ee-gcc-2.9-G0 */
/* OpenRAC/rac5-sm-decomp, src/boot/scePadEnd.c (scePadEnd). The reference name refers to the comparison source.
 * The PAL name remains provisional. See THIRD_PARTY.md. */

typedef unsigned int u32;

extern int func_00112C28(int callback);
extern int sceSifCallRpc(void *cd, unsigned int rpcNum, unsigned int mode, void *send, int ssize,
                         void *receive, int rsize, void *end_func, void *end_param);
extern void func_00108520(unsigned int id);
extern u32 D_003729D0;
extern u32 D_003729DC;
extern u32 D_003F3200[];
extern u32 D_003F3440[];
int func_001118E0(void) {
    if (D_003729D0 == 0)
        return 1;
    func_00112C28(0);
    D_003F3440[0] = 0xF;
    if (sceSifCallRpc(D_003F3200, 1, 0, D_003F3440, 0x80, D_003F3440, 0x80, 0, 0) < 0)
        return 0;
    func_00108520(0x80000019);
    if (D_003F3440[3] == 1)
        D_003729D0 = 0;
    D_003729DC = 0;
    return D_003F3440[3];
}
