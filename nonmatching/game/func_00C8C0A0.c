/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EEDA0(void *, u8);
extern void func_001F0A40(void *, s8);
extern char D_00CB4FB3[];
extern char D_00CCD510[];
extern void *D_00CCD514;
extern void *D_00CCD518;

void func_00C8C0A0(s32 arg0) {
    M2C_UNK *var_s0;
    M2C_UNK *var_s1;
    M2C_UNK *var_s2;
    s32 var_s3;
    s32 var_s4;

    func_001F0A40(D_00CCD514, arg0 & 0xFF);
    var_s4 = 0;
    var_s2 = ((void *)D_00CCD510);
    var_s1 = ((void *)D_00CCD510);
    do {
        var_s3 = 0;
        var_s0 = var_s2;
loop_2:
        func_001EEDA0(M2C_FIELD(var_s0, void **, 0x14), arg0 & 0xFF);
        var_s3 += 1;
        var_s0 += 4;
        if (var_s3 < 5) {
            goto loop_2;
        }
        func_001EEDA0(M2C_FIELD(var_s1, void **, 0xC), arg0 & 0xFF);
        var_s4 += 1;
        var_s2 += 0x14;
        var_s1 += 4;
    } while (var_s4 < 2);
    func_001EEDA0(D_00CCD518, (((arg0 * (*(u8 *)D_00CB4FB3)) / 255) + ((u32) (arg0 * (*(u8 *)D_00CB4FB3)) >> 0x1F)) & 0xFF);
}
