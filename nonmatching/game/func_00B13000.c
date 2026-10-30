/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, s32);                 /* extern */
M2C_UNK func_00A9D570(void *);                      /* extern */
M2C_UNK func_00AADED0(void *, s16, M2C_UNK, s32);   /* extern */
s16 func_00AB3B70(void *, s16, s32);                /* extern */
f32 func_00AB3C60(void *, s32);                     /* extern */
extern void *Pes6Ball_Current;

s32 func_00B13000(void *arg0, s32 arg1, s16 arg2, s32 arg3, s32 arg4, s8 arg5, s32 arg6) {
    s16 var_v0_2;
    s32 temp_v0;
    s32 var_v0;

    func_00209A00(M2C_FIELD(arg0, void **, 4), arg3 & 0xFFFF);
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0x28) = func_00AB3C60(arg0, arg4);
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x2D) = arg5;
    M2C_FIELD(arg0, s16 *, 0x2C) = arg2;
    func_00AADED0(arg0, arg2, 0, arg4);
    func_00A9D570(arg0);
    M2C_FIELD(arg0, s8 *, 0x16) = 0xE;
    var_v0 = arg6 - M2C_FIELD(arg0, s32 *, 0x1C);
    if (var_v0 <= 0) {
        var_v0 = -var_v0;
    }
    M2C_FIELD(arg0, s32 *, 0x90) = var_v0;
    temp_v0 = arg1 & 0xFFFF;
    switch (temp_v0) {                              /* irregular */
    case 0x314:
        M2C_FIELD(arg0, s16 *, 0x26) = (s16) (M2C_FIELD(Pes6Ball_Current, u16 *, 0x58) + 0x7FFF + 1);
    default:
        var_v0_2 = 0x10;
        break;
    case 0x37F:
        var_v0_2 = 0x82;
        break;
    case 0x321:
    case 0x1E0:
    case 0x352:
    case 0x35B:
        var_v0_2 = 0x10;
        break;
    case 0x34E:
    case 0x356:
    case 0x355:
        var_v0_2 = 8;
        break;
    case 0x341:
    case 0x33A:
    case 0x33C:
    case 0x33E:
    case 0x33D:
    case 0x33F:
        var_v0_2 = 0xA0;
        break;
    case 0x34B:
    case 0x34A:
        var_v0_2 = 0x12;
        break;
    case 0x319:
    case 0x163:
    case 0x2F:
        var_v0_2 = 0x70;
        break;
    case 0x164:
    case 0x1E6:
        var_v0_2 = 8;
        break;
    }
    M2C_FIELD(arg0, s16 *, 0x18) = var_v0_2;
    M2C_FIELD(arg0, s16 *, 0x38) = func_00AB3B70(arg0, arg2, arg4);
    func_00207390(M2C_FIELD(arg0, void **, 4), 2);
    M2C_FIELD(arg0, s8 *, 0x66) = 0;
    return 1;
}
