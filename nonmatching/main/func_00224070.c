/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_00229310(void);
extern u8 func_00225820(void);
extern char D_00591C09[];

s32 func_00224070(s32 arg0, s32 arg1) {
    s32 temp_s1;
    s32 var_s0;
    u32 var_a0;
    void *var_v0;

    var_s0 = 0;
    if (func_00231240() == 1) {
        return 0;
    }
    if ((*(u8 *)D_00591C09) == 0xE) {
        if ((arg0 & 0xFF) == (func_00225820() & 0xFF)) {
            temp_s1 = arg1 & 0xFFFF;
            if (temp_s1 == 0) {
                return 0;
            }
            var_v0 = func_00229310();
            if (var_v0 != NULL) {
                var_a0 = 0;
                do {
                    if (temp_s1 == M2C_FIELD(var_v0, u16 *, 0x10)) {
                        var_s0 = (var_s0 + 1) & 0xFF;
                    }
                    var_a0 += 1;
                    var_v0 += 2;
                } while (var_a0 < 0x17FU);
                return var_s0;
            }
            return 0;
        }
        return 0;
    }
    return 0;
}
