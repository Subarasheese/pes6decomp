/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern s32 D_003EA820;
extern char D_00CA8698[];
extern char D_00CA869C[];
extern char D_00CA86A0[];
extern char D_00CA86A4[];
extern char D_00CCBD30[];
extern char D_00CCCE34[];
extern char D_00CCCE30[];
extern s32 func_00C8B100(s32);
extern s32 func_001EDD00(s32);
extern void func_001F6C20(s32, s32, s32, s32);
extern void func_00C8B160(s32, s32);
extern void func_001F6FC0(s32, void *, s32, s32);
extern f32 func_001F6F60(s32, s32, s32);
extern void func_001EE5D0(s32, void *);
extern void func_001EF860(s32, void *);
extern void func_001EF370(s32, void *);
extern void func_001EEAC0(s32, s32);

void func_00C73EF0(void) {
    s32 a[4];
    f32 c[4];
    f32 b[4];
    s32 idx, s3, s1, s6, s0, s2, i;
    f32 f20;
    s3 = *(s32 *)D_00CCCE34;
    idx = D_003EA820;
    s0 = idx;
    a[2] = *(s32 *)D_00CA8698;
    a[3] = *(s32 *)D_00CA869C;
    a[0] = *(s32 *)D_00CA86A0;
    s1 = *(s32 *)(D_00CCBD30 + s0 * 0x50);
    a[1] = *(s32 *)D_00CA86A4;
    s6 = func_00C8B100(0);
    s0 = a[idx + 2];
    for (i = 0; i < 3; i++) {
        s2 = func_001EDD00(s3);
        func_001F6C20(*(s32 *)(D_00CCBD30 + D_003EA820 * 0x50), s2, (i + 3) & 0xFFFF, 0);
        func_00C8B160(s0, s2);
        s0++;
    }
    s0 = func_001EDD00(*(s32 *)D_00CCCE30);
    func_00C8B160(a[idx], s0);
    func_001F6FC0(s1, c, 0, 2);
    f20 = func_001F6F60(s1, 0, 2);
    func_001EE5D0(s0, b);
    b[2] = f20;
    func_001EF860(s0, b);
    func_001EF370(s0, c);
    func_001EEAC0(s0, s6);
}
