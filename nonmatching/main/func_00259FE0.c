/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0025EC20(s32);
extern u32 func_0025E0E0(s32);
extern void open(unsigned int, unsigned int);
M2C_UNK func_001C48E8(u32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0025A170();                            /* extern */
M2C_UNK func_0025A270();                            /* extern */
extern char D_0058CF90[];
extern char D_0058CF94[];
extern char D_0058CFB1[];

void func_00259FE0(void) {
    u32 temp_s0;
    u32 temp_v0;

    if ((*(u8 *)D_0058CFB1) != 0) {
        temp_s0 = (*(u32 *)D_0058CF94);
        func_001C48E8(temp_s0, 0, (*(s32 *)D_0058CF90));
        open(temp_s0, temp_s0 + (*(s32 *)D_0058CF90));
        (*(u8 *)D_0058CFB1) = 0;
        func_0025EC20(3);
    }
    temp_v0 = func_0025E0E0(5);
    switch (temp_v0) {                              /* irregular */
    case 2:
        func_0025A270();
        return;
    case 3:
        func_0025A170();
        break;
    case 1:
    case 0:
        return;
    }
}
