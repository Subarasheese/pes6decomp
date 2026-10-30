/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A58E0(void *, signed char);
extern char D_00908410[];

s32 func_008F8DB0(void *arg0) {
    u8 temp_v0;

    temp_v0 = M2C_FIELD(arg0, u8 *, 0x16);
    switch (temp_v0) {                              /* irregular */
    case 1:
        break;
    case 0:
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x38) = 0;
        M2C_FIELD(arg0, u8 *, 0x4E) = (u8) (M2C_FIELD(arg0, u8 *, 0x4E) + 1);
        if (((*(u8 *)D_00908410) * 0xC8) >= (s32) M2C_FIELD(arg0, u8 *, 0x4E)) {
            func_001A58E0(M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0), 0);
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        } else {
            func_001A58E0(M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0), 1);
            M2C_FIELD(arg0, u8 *, 0x16) = (u8) (M2C_FIELD(arg0, u8 *, 0x16) + 1);
        }
        break;
    }
    return 1;
}
