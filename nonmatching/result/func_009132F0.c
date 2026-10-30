/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0026B580(void *, s32, s32);
extern void func_00153FA0(void *);
M2C_UNK func_00910060();                            /* extern */
M2C_UNK func_00C75330(void *);                      /* extern */
extern char D_0058D7AA[];
extern void *D_00923FCC;

void func_009132F0(s32 arg0) {
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;

    func_0026B580(D_00923FCC + 0x4BC, 0x10, arg0);
    if ((*(s8 *)D_0058D7AA) == 0) {
        var_s0 = 0xC;
    } else {
        var_s0 = 9;
    }
    func_00910060();
    var_s2 = 0;
    if (var_s0 > 0) {
        var_s1 = 0;
        do {
            func_00C75330(D_00923FCC + var_s1 + 0xFC);
            func_00C75330(D_00923FCC + var_s1 + 0x124);
            var_s2 += 1;
            var_s1 += 0x50;
        } while (var_s2 < var_s0);
    }
    func_00C75330(D_00923FCC + 0xE4);
    func_00153FA0(D_00923FCC);
    D_00923FCC = NULL;
}
