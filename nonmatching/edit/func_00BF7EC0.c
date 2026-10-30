/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BF99A0(void);
extern u8 func_002F7EA0(s32, s32);
M2C_UNK func_00B912F0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00B91440(M2C_UNK);                     /* extern */
M2C_UNK func_00B91490(M2C_UNK);                     /* extern */
M2C_UNK func_00BC3FB0(M2C_UNK);                     /* extern */
M2C_UNK func_00BF7FA0(M2C_UNK *);                   /* extern */
extern char D_00CEB748[];
extern char D_00CEB750[];

s32 func_00BF7EC0(void) {
    s32 temp_v0;
    s32 temp_v0_2;

    switch ((*(s32 *)D_00CEB748)) {                           /* irregular */
    case 0:
        temp_v0 = func_00BF99A0();
        M2C_FIELD(((void *)D_00CEB750), s32 *, 0) = temp_v0;
        temp_v0_2 = func_002F7EA0(temp_v0, 0) & 0xFF;
        M2C_FIELD(((void *)D_00CEB750), s32 *, 4) = temp_v0_2;
        M2C_FIELD(((void *)D_00CEB750), s32 *, 8) = temp_v0_2;
        func_00B91490(0x2C);
        func_00B912F0(0x36, 1);
        func_00BC3FB0(0x20000);
        (*(s32 *)D_00CEB748) = 1;
        /* fallthrough */
    case 1:
        func_00BF7FA0(((void *)D_00CEB750));
    default:
        return 0;
    case 2:
        func_00B91440(0x2C);
        func_00B912F0(0x36, 0);
        (*(s32 *)D_00CEB748) = 0;
        return 1;
    }
}
