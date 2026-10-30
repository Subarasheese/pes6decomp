/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int rand(void);
extern void func_00110E58(unsigned long long, void *, void *);
u64 func_001105C8();                                /* extern */
M2C_UNK func_001C6B48(s32);                         /* extern */
s32 func_00843C50(s32);                             /* extern */
extern u16 D_003EA31C;

void func_00854FB0(s32 arg0, u16 *arg1) {
    u32 sp48;
    s32 sp4C;
    u16 var_s1;

    var_s1 = D_003EA31C;
    if (var_s1 != 0) {
        do {
loop_2:
            var_s1 = (var_s1 + 1) & 0xFFFF;
            if ((s32) var_s1 >= 0x7531) {
                var_s1 = 0x2710;
            }
            if ((var_s1 & 0xFFFF) == (arg0 & 0xFFFF)) {
                goto loop_2;
            }
        } while (func_00843C50((s32) var_s1) == -1);
    } else {
        func_00110E58(func_001105C8(), &sp4C, &sp48);
        func_001C6B48((sp48 / 1000U) + (sp4C * 0x3E8));
        do {
loop_10:
            var_s1 = (((s32) (rand() >> 4) % 10000) + 0x2710) & 0xFFFF;
            if (var_s1 == (arg0 & 0xFFFF)) {
                goto loop_10;
            }
        } while (func_00843C50((s32) var_s1) == -1);
    }
    if (arg1 != NULL) {
        *arg1 = var_s1;
    }
    D_003EA31C = var_s1;
}
