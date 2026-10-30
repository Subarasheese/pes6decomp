/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001236B8(s32, s32, M2C_UNK);           /* extern */
s32 func_001378E8();                                /* extern */
extern char D_005B58F0[];
extern char D_005BD2BC[];

void func_00141788(void) {
    s32 temp_a0;

    if ((*(s32 *)D_005B58F0) != 0) {
        func_001236B8((*(s32 *)D_005B58F0), func_001378E8() == 0, 0x40);
    }
    temp_a0 = *(s32 *)0x5B58F8;
    if (temp_a0 != 0) {
        func_001236B8(temp_a0, ~(*(s32 *)D_005BD2BC) != 0, 0x40);
    }
}
