/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00CE43F0(void);
extern void func_002648E0(int);
extern int func_002646D0(int);
extern void func_002648F0(int);
M2C_UNK func_001B9030(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_002646E0(s32);                         /* extern */
M2C_UNK func_00CE4210();                            /* extern */
M2C_UNK func_00CE4260();                            /* extern */
M2C_UNK func_00CE4400();                            /* extern */
M2C_UNK func_00CE9B20();                            /* extern */
M2C_UNK func_00CE9E40();                            /* extern */
M2C_UNK func_00CEC550(M2C_UNK);                     /* extern */
M2C_UNK func_00CECDE0();                            /* extern */
extern void *D_003E7E1C;
extern M2C_UNK func_00CF0710;

s32 func_00CF09F0(s32 arg0) {
    s32 temp_v0;
    s32 var_s1;
    void *temp_s1;

    var_s1 = 0;
    func_002648F0(arg0);
    temp_v0 = func_002646D0(arg0) & 0xFF;
    switch (temp_v0) {                              /* irregular */
    case 1:
        func_001B9030(7, 0x390016, 1);
        func_00CECDE0();
        func_00CE9E40();
        func_00CE9B20();
        func_00CE4210();
        temp_s1 = D_003E7E1C;
        if (func_00CE43F0() != 0) {
            func_00CE4400();
        } else {
            M2C_FIELD(temp_s1, M2C_UNK **, 0x188) = &func_00CF0710;
        }
        func_00CEC550(0x2A);
        var_s1 = 1;
        break;
    default:
        var_s1 = 1;
        break;
    case 0:
        func_00CE4260();
        func_002646E0(arg0);
        break;
    }
    func_002648E0(arg0);
    return var_s1;
}
