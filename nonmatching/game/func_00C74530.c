/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern s32 D_003EA820;
extern char D_00CCBD30[];
extern char D_00CCBD48[];
extern char D_00CCCE34[];
extern char D_00CCCE30[];
extern char D_00CA85C0[];
extern char D_00CA85C4[];
extern char D_00CA85C8[];
extern char D_00CA85CC[];
extern char D_00CA85D0[];
extern char D_00CA85D4[];
extern char D_00CA85E0[];
extern s32 func_001E6E10(s32);
extern s32 func_001EDD00(s32);
extern void func_001F6C20(s32, s32, s32, s32);
extern void func_00C8B160(s32, s32);
extern void func_001F6FC0(s32, void *, s32, s32);
extern f32 func_001F6F60(s32, s32, s32);
extern void func_001EE5D0(s32, void *);
extern void func_001EF860(s32, void *);
extern void func_001EF370(s32, void *);
extern s32 func_00C8B190(s32);
extern void func_001EEAC0(s32, s32);
extern s32 func_001B97B0(void);
extern s32 func_001B97A0(void);
extern void func_002D57E0(s32, s32, void *, s32);

void func_00C74530(void) {
    union { f32 f[8]; s32 i[8]; u16 h[16]; } a;
    f32 v1[4];
    f32 v2[4];
    s32 s0, s1, s2, s3, s4, s5, s7, i, idx;
    a.f[6] = *(f32 *)D_00CA85C0;
    a.f[7] = *(f32 *)D_00CA85C4;
    a.f[4] = *(f32 *)D_00CA85C8;
    a.f[5] = *(f32 *)D_00CA85CC;
    a.f[2] = *(f32 *)D_00CA85D0;
    a.f[3] = *(f32 *)D_00CA85D4;
    s5 = *(s32 *)D_00CCCE34;
    s0 = D_003EA820;
    s2 = *(s32 *)(D_00CCBD30 + s0 * 0x50);
    s7 = func_001E6E10(0x4E21);
    idx = s0;
    s1 = a.i[6 + s0];
    for (i = 0; i < 3; i++) {
        s3 = func_001EDD00(s5);
        func_001F6C20(*(s32 *)(D_00CCBD30 + D_003EA820 * 0x50), s3, i & 0xFFFF, 0);
        func_00C8B160(s1 + i, s3);
    }
    for (i = 0; i < 3; i++) {
        s3 = func_001EDD00(s5);
        func_001F6C20(*(s32 *)(D_00CCBD30 + D_003EA820 * 0x50), s3, (i + 6) & 0xFFFF, 0);
        func_00C8B160(s1 + 3 + i, s3);
    }
    s5 = *(s32 *)D_00CCCE30;
    s4 = a.i[4 + s0];
    for (i = 0; i < 2; i++) {
        f32 f20;
        s0 = func_001EDD00(s5);
        func_00C8B160(s4, s0);
        func_001F6FC0(s2, v1, a.h[i * 2 + 4], 2);
        f20 = func_001F6F60(s2, a.h[i * 2 + 4], 2);
        func_001EE5D0(s0, v2);
        v2[2] = f20;
        func_001EF860(s0, v2);
        func_001EF370(s0, v1);
        s4++;
    }
    s1 = a.i[4 + idx];
    s0 = func_00C8B190(s1 + 1);
    func_001EEAC0(s0, s7);
    func_001F6FC0(s2, v1, 4, 2);
    {
        f32 f20 = (f32)func_001B97B0();
        v1[3] = (f32)func_001B97A0();
        v1[2] = f20;
    }
    func_001EF370(s0, v1);
    s0 = *(s32 *)(D_00CCBD48 + D_003EA820 * 0x50);
    func_002D57E0(func_00C8B190(s1), s0, D_00CA85E0, 7);
}
