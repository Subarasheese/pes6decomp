/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B7B80(s32);
extern char D_00D37700[];
extern char D_00D37720[];
extern char D_00D37772[];
extern char D_00D37776[];

void func_00D0C540(void) {
    s32 *temp_s0;
    s32 temp_a0;
    s32 var_s1;
    void *temp_v1;

    if ((*(s8 *)D_00D37772) != 0) {
        var_s1 = 0;
loop_7:
        if (var_s1 < 4) {
            temp_s0 = ((void *)D_00D37700) + (var_s1 * 8);
            temp_a0 = *temp_s0;
            if (temp_a0 != 0x18) {
                temp_v1 = ((void *)D_00D37720) + (temp_a0 * 4);
                if (M2C_FIELD(temp_v1, s32 *, 0x58) != 0) {
                    M2C_FIELD(temp_v1, s32 *, 0x58) = 0;
                    if ((*(s8 *)D_00D37776) == 0) {
                        func_001B7B80(temp_a0);
                    }
                }
                var_s1 += 1;
                *temp_s0 = 0x18;
                goto loop_7;
            }
        }
    }
}
