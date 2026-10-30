/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
extern void func_002648E0(int);
extern int func_002646D0(int);
extern void func_002648F0(int);
M2C_UNK func_002646E0(s32);                         /* extern */
M2C_UNK func_00271E40();                            /* extern */
s32 func_008F7C40(s32, M2C_UNK, s32);               /* extern */
M2C_UNK func_009B6810();                            /* extern */
s32 func_00CE2C80(s32, s32, s32);                   /* extern */
extern char D_005E3824[];
extern char D_005E382C[];

void func_00CF8250(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    if ((*(s32 *)D_005E382C) == 0) {
        func_00271E40();
        func_009B6810();
    }
    func_002648F0(arg0);
    temp_v0 = func_002646D0(arg0) & 0xFF;
    switch (temp_v0) {                              /* irregular */
    case 0:
        if (func_008F7C40(arg0, 1, (*(s32 *)D_005E3824)) != 0) {
            func_002646E0(arg0);
        }
        break;
    case 1:
        if (func_00CE2C80(arg0 + 0xFC, arg0, (*(s32 *)D_005E382C)) != 0) {
            func_002646E0(arg0);
            var_s0 = 1;
        }
        break;
    }
    func_002648E0(arg0);
    if (var_s0 != 0) {
        func_00264790((void *) arg0, 5U);
    }
}
