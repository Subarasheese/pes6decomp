/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001520C0(void);
extern int func_0013B660(void);
extern s32 func_00853B50(s8, s8, s8, s8, s16, s32, s32, s32);
s16 *func_008472D0();                               /* extern */
s32 func_0084E830();                                /* extern */
extern char D_008B14CC[];
extern char D_008B14CD[];

s32 func_0084D4F0(void) {
    s32 var_v0;
    u64 temp_s0;

    temp_s0 = (u64) ((s64) (*(u8 *)D_008B14CC) << 0x3B) >> 0x3F;
    if (func_001520C0() == 0) {
        if (temp_s0 == 0) {
            if (func_0013B660() == 0) {
                if (func_0084E830() == 0) {
                    if ((((u64) ((s64) (*(u8 *)D_008B14CD) << 0x3A) >> 0x3F) == 0) && (((u64) ((s64) (*(u8 *)D_008B14CD) << 0x3B) >> 0x3F) == 0)) {
                        var_v0 = 0;
                    } else {
                        var_v0 = 1;
                    }
                    if (var_v0 != 0) {
                        goto block_12;
                    }
                } else {
block_12:
                    func_00853B50(1, 0x11, 1, 0, *func_008472D0(), 0, 0, 0);
                }
            }
        }
        return 0;
    }
    if (temp_s0 != 0) {
        func_00853B50(1, 0x11, 2, 0, *func_008472D0(), 0, 0, 0);
    }
    return 1;
}
