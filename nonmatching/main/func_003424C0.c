/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0026E1A0(s32, s32, s32, s32, s32, s32, s32);
extern s32 func_00332F70(void);
extern s32 func_00333640(void);
extern s32 func_0024ED50(void);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00338C90();                            /* extern */
extern char D_005F1E10[];
extern char D_005F1E11[];
extern char D_005F1E14[];

s32 func_003424C0(void) {
    u8 var_v0;

    if (func_0024ED50() != 0) {
        func_0026E1A0(0, 0xD, 0, 0, 0, 0, 0);
        func_00333640();
        func_00338C90();
        func_00332F70();
        if ((*(s32 *)D_005F1E14) != 0x10) {
            var_v0 = 0;
        } else {
            var_v0 = (*(u8 *)D_005F1E11);
        }
        func_001C48E8(((void *)D_005F1E10), 0, 0x2368);
        (*(u8 *)D_005F1E11) = var_v0 & 0xFF;
        return 1;
    }
    return 0;
}
