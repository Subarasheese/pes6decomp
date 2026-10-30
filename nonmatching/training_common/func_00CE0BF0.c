/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001B8DC0(void);
extern u32 func_00CECE10(void);
extern int func_002646D0(int);
extern void func_002648F0(int);
extern void func_002648E0(int);
M2C_UNK func_002646E0(s32);                         /* extern */
M2C_UNK func_00CECDB0();                            /* extern */
s32 func_00CED260();                                /* extern */
extern void *D_003E7E1C;

s32 func_00CE0BF0(s32 arg0) {
    s32 temp_v1;
    s32 var_s1;

    var_s1 = 0;
    func_002648F0(arg0);
    temp_v1 = func_002646D0(arg0) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 1:
        func_002646E0(arg0);
        break;
    case 0:
        if (func_001B8DC0() != 0) {
            func_002646E0(arg0);
        }
        break;
    case 2:
        if (func_00CED260() != 0) {
            func_00CECE10();
            M2C_FIELD(D_003E7E1C, s32 *, 4) = 0;
            func_00CECDB0();
            var_s1 = 1;
        }
        break;
    }
    func_002648E0(arg0);
    return var_s1;
}
