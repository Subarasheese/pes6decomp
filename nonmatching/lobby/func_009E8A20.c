/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_00815100(M2C_UNK *);                   /* extern */
s32 func_008156F0();                                /* extern */
M2C_UNK func_00817930();                            /* extern */
M2C_UNK func_0099D7F0();                            /* extern */
s32 func_0099DF60(s32, M2C_UNK *, M2C_UNK);         /* extern */
extern char D_00A00430[];
extern char D_00A03390[];

s32 func_009E8A20(void *arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_s1;
    void *temp_s0;

    var_s1 = 0;
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x74);
    temp_s0 = arg0 + 0x70;
    switch (temp_v1) {                              /* irregular */
    case 1:
        if ((M2C_FIELD(arg0, u8 *, 0x5D) != 0) || ((func_0099DF60(func_001F08B0(arg1), ((void *)D_00A00430), 0) != 0) == 1)) {
            func_0099D7F0();
            func_00817930();
            M2C_FIELD(temp_s0, s32 *, 4) = (s32) (M2C_FIELD(temp_s0, s32 *, 4) + 1);
        }
        break;
    case 0:
        if (func_008156F0() == 1) {
            M2C_FIELD(temp_s0, s32 *, 4) = (s32) (M2C_FIELD(temp_s0, s32 *, 4) + 1);
        }
        break;
    case 2:
        func_00815100(((void *)D_00A03390));
        var_s1 = 1;
        break;
    }
    return var_s1;
}
