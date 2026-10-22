/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef int s32;
extern s32 func_00105380(s32);
extern s32 func_001053B0(s32);
extern s32 sceSifCallRpc(void *, s32, s32, void *, s32, void *, s32, void *, s32);
extern char D_003F3880[];
extern char D_003F3900[];
extern char D_003F5400[];
extern char D_00374654[];
extern char D_00374650[];
extern char D_00115708[];

s32 func_00115718(s32 arg0) {
    char *s1 = D_003F3880;
    s32 saved = arg0;
    if (*(s32 *)(s1 + 0x24) == 0) {
        return -0x64;
    }
    if (func_001053B0(*(s32 *)D_00374654) < 0) {
        return -0xC8;
    }
    {
    char *a3 = D_003F3900;
    *(s32 *)(a3 + 0x14) = saved;
    if (sceSifCallRpc(s1, 0x14, 1, a3, 0x30, D_003F5400 - 0x5C0, 4, D_00115708, 0) != 0) {
        func_00105380(*(s32 *)D_00374654);
        return -0x5B;
    }
    }
    *(s32 *)D_00374650 = 0x14;
    return 0;
}
