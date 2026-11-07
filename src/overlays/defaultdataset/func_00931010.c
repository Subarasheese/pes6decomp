/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern s32 func_002EEA90(s32);
extern s32 func_001E6E10(s32);
extern void func_001E8740(s32, void *);
extern void func_001E8B90(s32, void *, void *);
extern void func_002EE6A0(void *, void *, s32, s32);
extern s32 D_009CA720[];
extern s16 D_009CA7B0[];

void func_00931010(void) {
    u8 a[0x408];
    u8 b[0x1000];
    s16 c[4];
    u32 i;
    s32 s3;
    s32 s2;
    c[0] = D_009CA7B0[0];
    c[1] = D_009CA7B0[1];
    c[2] = D_009CA7B0[2];
    c[3] = D_009CA7B0[3];
    for (i = 0; i < 0x21; i++) {
        s3 = func_002EEA90(0);
        s2 = func_001E6E10(D_009CA720[i]);
        func_001E8740(s2, a);
        func_001E8B90(s2, b, c);
        func_002EE6A0(a, b, s3, 0);
    }
}
