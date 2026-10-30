/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001E5A30(s32, f32 *);                  /* extern */

void func_001B9A90(void *arg0, f32 fparg0, f32 fparg1) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 temp_f0;
    f32 temp_f1;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0x10);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x14);
    sp10 = M2C_FIELD(arg0, f32 *, 8);
    sp14 = M2C_FIELD(arg0, f32 *, 0xC);
    sp18 = temp_f1;
    sp1C = temp_f0;
    sp10 = fparg0;
    sp14 = fparg1;
    M2C_FIELD(arg0, f32 *, 8) = fparg0;
    M2C_FIELD(arg0, f32 *, 0xC) = fparg1;
    M2C_FIELD(arg0, f32 *, 8) = sp10;
    M2C_FIELD(arg0, f32 *, 0xC) = sp14;
    M2C_FIELD(arg0, f32 *, 0x10) = temp_f1;
    M2C_FIELD(arg0, f32 *, 0x14) = temp_f0;
    func_001E5A30(M2C_FIELD(arg0, s32 *, 0), &sp10);
}
