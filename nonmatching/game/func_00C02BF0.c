/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00BF6280(void);
extern u32 func_00288670(u32, u32);
extern void func_00207390(s32, s32);
extern void func_00209A00(s32, s32, s32);
extern s32 func_009BAE30(void *);
extern s32 func_009E1C90(s32);
extern void func_00B7C7F0(void *);
extern char Pes6MatchSquads[];

void func_00C02BF0(void *arg0) {
    s32 var_s0;
    s32 t;

    var_s0 = 0;
    M2C_FIELD(arg0, s8 *, 0x61) = func_00288670(M2C_FIELD(Pes6MatchSquads + ((M2C_FIELD(arg0, u8 *, 0x12) * 105) << 8) + ((M2C_FIELD(arg0, u8 *, 0x11) * 105) << 3), u8 *, 0x6C) & 0x7F, 0x32U);
    t = func_009E1C90(1) & 0xFF;
    if (t == 12) {
        if (func_00BF6280() == 0) {
            func_009BAE30(arg0);
        }
        var_s0 = 1;
    } else if (t == 1) {
        if (func_009BAE30(arg0) == 0) {
            var_s0 = 1;
        }
    } else {
        var_s0 = 1;
    }
    if (var_s0 != 0) {
        func_00209A00(M2C_FIELD(arg0, s32 *, 4), 0x385, 0);
        func_00207390(M2C_FIELD(arg0, s32 *, 4), 6);
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    } else {
        func_00B7C7F0(arg0);
    }
}
