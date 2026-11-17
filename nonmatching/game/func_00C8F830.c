/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_00CB5100[];
extern char D_00CCD88E[];
extern u8 D_003EA89C;
extern u8 D_003EA898;
extern void func_00C8FBC0(void);
extern void func_001F3CA0(s32);
extern s32 func_002DB830(s32);
extern s32 func_002DCA30(void);
extern void func_001D7D80(s32, s32);
extern void func_001C78F8(char *, char *, s32);
extern s32 func_001F1A20(s32, s32, s32 *, char *);
extern void func_001F3D80(s32, f32 *, s32);
extern void func_001F1860(s32, s32);
extern void func_001F1810(s32, s32);
extern void func_001F3D10(s32, s32);
extern void func_0020E310(s32, f32 *);
extern void func_001F18D0(s32, f32 *);

void func_00C8F830(char *p) {
    s32 s1, s2, s3, s5, s0;
    s32 z[2];
    f32 v[4];
    f32 t[4];
    char buf[4];
    func_00C8FBC0();
    s1 = *(s32 *)(p + 0x16C);
    func_001F3CA0(s1);
    s2 = func_002DB830(*(s32 *)(p + 0x174));
    *(u8 *)(p + 1) = s2;
    s5 = D_003EA89C;
    if (s2 < s5) {
        z[0] = 0;
        s3 = s2;
        z[1] = 0;
        v[0] = *(f32 *)(p + 0x64);
        v[1] = *(f32 *)(p + 0x68);
        v[2] = *(f32 *)(p + 0x6C);
        v[3] = *(f32 *)(p + 0x70);
        while (s3 < s5 && (s3 - s2) < D_003EA898) {
            func_001C78F8(buf, D_00CB5100, (s3 + 1) % 100);
            s0 = func_001F1A20(s1, 0x17, z, buf);
            func_001F3D80(s0, v, 0);
            func_001F1860(s0, 1);
            func_001F1810(s0, 1);
            func_001F3D10(s0, 1);
            func_0020E310(2, t);
            func_001F18D0(s0, t);
            v[1] = v[1] + (f32)*(u8 *)D_00CCD88E;
            s3++;
        }
        if (func_002DCA30() != 0) {
            s32 r;
            if (0xB - D_003EA898 < s2) r = 0x17 - s2;
            else r = 0x13;
            func_001D7D80(*(s32 *)(p + 0x180), (s16)r);
        } else {
            func_001D7D80(*(s32 *)(p + 0x180), (s16)(0xB - s2));
        }
    } else {
        if (func_002DCA30() != 0) {
            func_001D7D80(*(s32 *)(p + 0x180), 0xC);
        } else {
            func_001D7D80(*(s32 *)(p + 0x180), 0);
        }
    }
}
