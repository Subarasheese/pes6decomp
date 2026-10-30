/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F39A0(void *);
extern void func_001BC2B0(void);
extern void func_0026B580(void *, s32, s32);
extern s32 func_002F7970(void);
M2C_UNK func_002F2ED0(void *);                      /* extern */
s32 func_002F3850(void *);                          /* extern */
s32 func_00815450();                                /* extern */
s32 func_008156F0();                                /* extern */
extern char D_00591BE4[];

s32 func_00C99B70(void *arg0) {
    if (M2C_FIELD(arg0, s16 *, 0x16) != 0) {

    } else if ((func_002F7970() == 0) || (func_00815450() == 0) || (func_008156F0() != 0)) {
        func_001BC2B0();
        M2C_FIELD(arg0, s16 *, 0x16) = 1;
    }
    M2C_FIELD(arg0, u16 *, 0x14) = (u16) (M2C_FIELD(arg0, u16 *, 0x14) + 1);
    if (((s32) M2C_FIELD(arg0, u16 *, 0x14) >= ((*(u8 *)D_00591BE4) * 0xF)) && (M2C_FIELD(arg0, s16 *, 0x12) == 1)) {
        func_0026B580(arg0, 4, -1);
        func_002F39A0(M2C_FIELD(arg0, void **, 0x18));
    }
    func_002F2ED0(M2C_FIELD(arg0, void **, 0x18));
    return func_002F3850(M2C_FIELD(arg0, void **, 0x18)) == 4;
}
