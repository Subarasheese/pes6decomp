/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00A10250(void);
s32 func_00AF83C0(void *arg0) {
    u16 temp_v1;
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 4);
    temp_v1 = M2C_FIELD(temp_a1, u16 *, 0x30);
    switch (temp_v1) {                              /* irregular */
    case 0x3:
    case 0xB7:
    case 0xC5:
    case 0xC4:
    case 0xC3:
    case 0xC2:
    case 0xC6:
    case 0xC7:
    case 0xB6:
        M2C_FIELD(arg0, u16 *, 0x26) = (u16) (M2C_FIELD(arg0, u16 *, 0x26) + ((((M2C_FIELD(temp_a1, u8 *, 0x2D) != 0) ? -1 : 1) * 0x1C00) & 0xFFFF));
        return 1;
    case 0x16:
    case 0x17:
    case 0x15:
    case 0xBE:
        M2C_FIELD(arg0, u16 *, 0x26) = (u16) (M2C_FIELD(arg0, u16 *, 0x26) + ((((M2C_FIELD(temp_a1, u8 *, 0x2D) != 0) ? -1 : 1) * 0x1C00) & 0xFFFF));
        return 1;
    default:
        func_00A10250();
        return 0;
    }
}
