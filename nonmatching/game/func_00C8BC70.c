/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_00CCD4B8[];
extern char D_00CCD4BC[];
extern char D_00CCD4C0[];
extern char D_00CCD4C4[];
extern char D_00CA88D0[];
extern char D_003D2A60[];
extern s32 D_003EA894;
extern void *func_001F1F10(void);
extern void *func_001F0AF0(void *a0);
extern void func_001F0A60(void *a0, s32 a1);
extern void func_001F3D80(void *a0, f32 *a1, void *a2);
extern void func_001F3C80(void *a0, f32 a1);
extern void func_001F3D10(void *a0, s32 a1);
extern void func_00C89490(s32 a0, s32 a1);
void func_00C8BC70(void) {
    void *s1;
    void *s0;
    f32 v[4];
    s32 h;
    u32 k = 0x45855000;
    s1 = func_001F1F10();
    if (s1 != 0) {
        s0 = func_001F0AF0(s1);
        if (s0 != 0) {
            v[0] = *(f32 *)D_00CCD4B8;
            v[1] = *(f32 *)D_00CCD4BC;
            *(u32 *)&v[2] = 0x42D80000;
            *(u32 *)&v[3] = 0x42180000;
            func_001F0A60(s0, 0);
            func_001F3D80(s0, v, D_003D2A60 + *((u8 *)s0 + 0x48) * 8);
            func_001F3C80(s0, *(f32 *)&k);
            func_001F3D10(s0, 0);
        }
        func_001F3D10(s1, 1);
    }
    *(void **)D_00CCD4C0 = s1;
    *(void **)D_00CCD4C4 = s0;
    D_003EA894 = 0;
    h = *(s16 *)(D_00CA88D0 + 0x12);
    func_00C89490(h, 0);
    *(s32 *)(D_00CCD4C0 + 8) = h;
}
