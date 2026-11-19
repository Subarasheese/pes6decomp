/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef int s32;
extern s32 func_0019B140(s32);
extern s32 func_0019B170(s32);
extern s32 func_0019EE30(void *, s32, s32, void *, s32, void *, s32, void *, s32);
extern char D_011FD7C0[];
extern char D_011FD840[];
extern char D_011FF340[];
extern char D_005CAA34[];
extern char D_005CAA30[];
extern char D_00195BF0[];

s32 func_00195C00(s32 arg0) {
    char *s1 = D_011FD7C0;
    s32 saved = arg0;
    if (*(s32 *)(s1 + 0x24) == 0) {
        return -0x64;
    }
    if (func_0019B170(*(s32 *)D_005CAA34) < 0) {
        return -0xC8;
    }
    {
    char *a3 = D_011FD840;
    *(s32 *)(a3 + 0x14) = saved;
    if (func_0019EE30(s1, 0x14, 1, a3, 0x30, D_011FF340 - 0x5C0, 4, D_00195BF0, 0) != 0) {
        func_0019B140(*(s32 *)D_005CAA34);
        return -0x5B;
    }
    }
    *(s32 *)D_005CAA30 = 0x14;
    return 0;
}
