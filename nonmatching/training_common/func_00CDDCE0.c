/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002648E0(int);
extern int func_002646D0(int);
extern void func_002648F0(int);
M2C_UNK func_002646E0(s32);                         /* extern */
M2C_UNK func_00CE4210();                            /* extern */
M2C_UNK func_00CE9E40();                            /* extern */
M2C_UNK func_00CEC550(M2C_UNK);                     /* extern */
M2C_UNK func_00CECDE0();                            /* extern */
extern void *D_003E7E1C;
extern M2C_UNK func_00CDD940;

s32 func_00CDDCE0(s32 arg0) {
    s32 temp_v1;
    s32 var_s1;

    var_s1 = 0;
    func_002648F0(arg0);
    temp_v1 = func_002646D0(arg0) & 0xFF;
    if (temp_v1 != 1) {
        if (temp_v1 != 0) {
            var_s1 = 1;
        } else {
            func_00CE4210();
            func_002646E0(arg0);
        }
    } else {
        func_00CECDE0();
        M2C_FIELD(D_003E7E1C, M2C_UNK **, 0x188) = &func_00CDD940;
        func_00CE9E40();
        func_00CEC550(0x26);
        func_002646E0(arg0);
    }
    func_002648E0(arg0);
    return var_s1;
}
