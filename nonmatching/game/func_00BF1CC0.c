/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, s32, M2C_UNK);        /* extern */
s32 func_00BC13A0(M2C_UNK);                         /* extern */
extern char Pes6MatchSquads[];

void func_00BF1CC0(void *arg0) {
    func_00209A00(M2C_FIELD(arg0, void **, 4), func_00BC13A0(0x17), 0);
    func_00207390(M2C_FIELD(arg0, void **, 4), 4);
    M2C_FIELD(arg0, u16 *, 0x28) = (u16) M2C_FIELD(arg0, u16 *, 0x26);
    M2C_FIELD(arg0, s8 *, 0x4E) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x2D) = (s8) (M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x68) & 1 & 1);
    M2C_FIELD(arg0, u16 *, 0x2C) = (u16) M2C_FIELD(arg0, u16 *, 0x26);
    M2C_FIELD(arg0, s16 *, 0x18) = 6;
}
