/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591E4C[];
extern char D_005922C4[];
extern char D_005922C5[];
extern char D_005922C6[];
extern char D_005922C7[];
extern char D_005922C8[];
extern char D_005922D8[];
extern char D_005922EC[];
extern char D_005922EE[];
extern char D_005922F0[];
extern char D_005922F1[];
extern char D_005922F2[];
extern char D_005922F4[];
extern char D_005922F5[];
extern char D_005926E4[];

s32 func_00A439C0(void *arg0) {
    u16 temp_a1;

    M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    (*(s8 *)D_005922C4) = 0;
    (*(s8 *)D_005922C5) = 0;
    (*(s8 *)D_005922C6) = 0;
    (*(s8 *)D_005922C7) = 0;
    (*(s8 *)D_005922C8) = 0;
    (*(s32 *)D_005922D8) = 0;
    (*(s8 *)D_005922EC) = 0;
    (*(s8 *)D_005922EE) = 0;
    (*(s8 *)D_005922F0) = 0;
    (*(s8 *)D_005922F4) = 0;
    (*(s8 *)D_005922F5) = 0;
    M2C_FIELD(arg0, s8 *, 0x102) = 0;
    temp_a1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
    if ((temp_a1 != 0x2E8) && (temp_a1 != 0x2E9)) {

    } else if (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)D_00591E4C)) {
        (*(s8 *)D_005922F0) = 3;
        (*(u8 *)D_005922F1) = (*(u8 *)D_005926E4);
        (*(u16 *)D_005922F2) = M2C_FIELD(arg0, u16 *, 0x2C);
    }
    return 0;
}
