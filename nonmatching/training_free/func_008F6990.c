/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00262630(u8);
extern void func_00262760(s32);
extern void func_00262660(s32);
extern int func_002211C0(int, int, int, int);
extern void func_002627A0(s32);
extern void func_002627E0(s32);
M2C_UNK func_002626A0(u16);                         /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_003710E0(s32);                         /* extern */
s32 func_00371130();                                /* extern */
M2C_UNK func_008F6C60();                            /* extern */
M2C_UNK func_00C99AD0(void *, s32);                 /* extern */
extern void *D_003AE9D0;

s32 func_008F6990(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_002211C0(arg0, arg1, arg2, arg3);
    func_003710E0(M2C_FIELD(D_003AE9D0, s32 *, 0x2C));
    func_00262630(func_00371130() & 0xFF);
    func_002627E0(M2C_FIELD(D_003AE9D0, s32 *, 0x30));
    func_002627A0(M2C_FIELD(D_003AE9D0, s32 *, 0x34));
    func_00262760(M2C_FIELD(D_003AE9D0, s32 *, 0x38));
    func_002626A0(M2C_FIELD(D_003AE9D0, u16 *, 0x3C));
    func_00262660(M2C_FIELD(D_003AE9D0, s32 *, 0x40));
    func_008F6C60();
    func_0026E840(0x84028400);
    func_00C99AD0(M2C_FIELD(D_003AE9D0, void **, 0xEC), arg2);
    M2C_FIELD(M2C_FIELD(D_003AE9D0, void **, 0xEC), s16 *, 0x10) = 0;
    return 2;
}
