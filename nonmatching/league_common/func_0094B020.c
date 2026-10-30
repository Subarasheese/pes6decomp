/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00227EB0(void);
extern u8 func_0022BC60(s32);
extern void * func_002260A0(void);
s32 func_00224BC0(s32, s32);                        /* extern */
s32 func_00229010(s32);                             /* extern */
s32 func_002307F0();                                /* extern */
M2C_UNK func_0094B170(s32);                         /* extern */
s32 func_0094B600(s32, s32);                        /* extern */

void func_0094B020(s32 arg0) {
    s32 temp_a0;
    s32 var_a0;
    s32 var_s1;
    s32 var_s2;
    void *temp_v0;

    temp_v0 = func_002260A0();
    if (((arg0 & 0xFF) != 0xFF) && (temp_v0 != NULL) && (func_00227EB0() != 0)) {
        var_s2 = 0;
        do {
            if (!(func_002307F0() & 0xFF)) {
                var_s1 = func_00229010(arg0) & 0xFF;
                var_a0 = func_00224BC0(var_s1, var_s2 & 0xFF) & 0xFFFF;
            } else {
                var_s1 = func_0022BC60(arg0) & 0xFF;
                var_a0 = func_00224BC0(var_s1, var_s2 & 0xFF) & 0xFFFF;
            }
            if (var_a0 & 0xFFFF) {
                temp_a0 = func_0094B600(var_a0, var_s1) & 0xFFFF;
                if (temp_a0 < 0x400) {
                    func_0094B170(temp_a0);
                }
            }
            var_s2 += 1;
        } while (var_s2 < 0x20);
    }
}
