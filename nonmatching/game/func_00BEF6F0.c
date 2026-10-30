/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00285080(s32);
extern void *Pes6Ball_Current;
extern char D_00591F1C[];
extern char D_00591F20[];

void func_00BEF6F0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_s0;

    var_s0 = 0;
    M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454) = (f32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x10);
    M2C_FIELD(Pes6Ball_Current, f32 *, 0x1458) = (f32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x14);
    M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C) = (f32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x18);
    M2C_FIELD(Pes6Ball_Current, u16 *, 0x1450) = (u16) M2C_FIELD(arg0, u16 *, 0x26);
    M2C_FIELD(Pes6Ball_Current, s16 *, 0x144C) = 0;
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x1444) = arg1;
    M2C_FIELD(Pes6Ball_Current, f32 *, 0x1448) = (f32) (arg2 * -0xBC);
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x1440) = -0x800;
    M2C_FIELD(Pes6Ball_Current, s8 *, 0x144F) = 1;
    if (arg3 != 0) {
        do {
            func_00285080(1);
            if (M2C_FIELD(Pes6Ball_Current, f32 *, 0x1458) == -28.0f) {
                var_s0 += 1;
            }
        } while (var_s0 != arg3);
    }
    (*(s32 *)D_00591F1C) = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454);
    (*(s32 *)D_00591F20) = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C);
}
