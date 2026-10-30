/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002648E0(int);
extern s32 func_003656E0(void);
extern int func_002646D0(int);
extern s32 func_00262FC0(void);
extern void func_002648F0(int);
M2C_UNK func_001B9030(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_002646E0(s32);                         /* extern */
M2C_UNK func_00CE4210();                            /* extern */
M2C_UNK func_00CE4260();                            /* extern */
M2C_UNK func_00CE9B20();                            /* extern */
M2C_UNK func_00CE9E40();                            /* extern */
M2C_UNK func_00CEC550(M2C_UNK);                     /* extern */
M2C_UNK func_00CECDE0();                            /* extern */
s32 func_00CEFE60();                                /* extern */
s8 func_00CF0C40();                                 /* extern */
extern void *D_003E7E1C;
extern s32 D_003EB29C;
extern M2C_UNK func_00CDE150;
extern M2C_UNK func_00CDE4F0;
extern M2C_UNK func_00CEBFF0;

s32 func_00CDEBF0(s32 arg0) {
    M2C_UNK *var_v0;
    s32 temp_v1;
    s32 var_s0;
    void *temp_s0;

    var_s0 = 0;
    func_002648F0(arg0);
    temp_v1 = func_002646D0(arg0) & 0xFF;
    switch (temp_v1) {                              /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        temp_s0 = D_003E7E1C;
        if (func_00262FC0() != 0) {
            switch (D_003EB29C) {                   /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                var_v0 = &func_00CEBFF0;
                goto block_13;
            case 1:                                 /* switch 2 */
                var_v0 = &func_00CDE4F0;
                goto block_13;
            }
        } else {
            var_v0 = &func_00CDE150;
block_13:
            M2C_FIELD(temp_s0, M2C_UNK **, 0x188) = var_v0;
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = func_00CEFE60();
        M2C_FIELD(arg0, s8 *, 0x20) = func_00CF0C40();
        func_001B9030(7, 0x460001, 1);
        func_00CE9E40();
        func_00CE9B20();
        func_003656E0();
        func_00CECDE0();
        func_00CE4210();
        var_s0 = 1;
        break;
    default:                                        /* switch 1 */
        var_s0 = 1;
        break;
    case 0:                                         /* switch 1 */
        func_00CE4260();
        func_00CEC550(0x2A);
        func_002646E0(arg0);
        break;
    }
    func_002648E0(arg0);
    return var_s0;
}
