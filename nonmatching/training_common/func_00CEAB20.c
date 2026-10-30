/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DC210(void);
extern void func_001D7BE0(void *, void *);
M2C_UNK func_002DB600(s32, void *);                 /* extern */
M2C_UNK func_002DBF40(s32, s32, s32);               /* extern */

void func_00CEAB20(void *arg0) {
    f32 temp_f2;
    f32 temp_f3;
    s32 temp_s0;
    s32 temp_s1;

    if (arg0 != NULL) {
        func_001D7BE0(M2C_FIELD(arg0, void **, 0x1C), arg0 + 0x20);
        temp_f3 = M2C_FIELD(arg0, f32 *, 0x5C);
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x54);
        temp_s1 = (s32) ((M2C_FIELD(arg0, f32 *, 0x58) + temp_f3) / temp_f2);
        temp_s0 = (s32) (temp_f3 / temp_f2);
        if (M2C_FIELD(arg0, s32 *, 0x6C) == 0) {
            M2C_FIELD(arg0, s32 *, 0x6C) = func_002DC210();
        }
        func_002DB600(M2C_FIELD(arg0, s32 *, 0x6C), arg0 + 0x70);
        func_002DBF40(M2C_FIELD(arg0, s32 *, 0x6C), temp_s1, temp_s0 + 1);
    }
}
