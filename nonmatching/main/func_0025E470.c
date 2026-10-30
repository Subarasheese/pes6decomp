/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0025EC20(s32);
extern u32 func_0025E0E0(s32);
M2C_UNK func_001C48E8(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_002581A0(M2C_UNK, M2C_UNK, s32);       /* extern */
M2C_UNK func_0025E080(M2C_UNK);                     /* extern */
s32 func_0025E630();                                /* extern */
s32 func_0025E7F0(M2C_UNK *);                       /* extern */
extern char D_0058D1E0[];
extern char D_0058D1E4[];
extern char D_0058D1E6[];
extern char D_0058D1E8[];
extern char D_0058D1EC[];
extern char D_0058D1F8[];

void func_0025E470(void) {
    s32 temp_s0;
    u32 temp_v0;

    temp_v0 = func_0025E0E0(8);
    switch (temp_v0) {                              /* irregular */
    case 2:
        func_002581A0(0, 0x100, (*(s32 *)D_0058D1E0));
        temp_s0 = (*(s16 *)D_0058D1E4) * (*(s16 *)D_0058D1E6);
        func_001C48E8((*(s32 *)D_0058D1E8), 0, temp_s0);
        func_001C48E8((*(s32 *)D_0058D1EC), 0, temp_s0);
        if (func_0025E7F0(((void *)D_0058D1F8)) != 0) {
            do {

            } while (func_0025E630() != 0);
            func_0025EC20(1);
        }
        func_0025E080(8);
        return;
    case 1:
    case 0:
        return;
    }
}
