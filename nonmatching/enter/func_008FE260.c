/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00338940(s32);
extern void func_00338930(int);
extern void func_00333320(s32);
s32 func_0090F610();                                /* extern */

void func_008FE260(s32 arg0) {
    if (func_0090F610() == 0) {
        func_00333320(1);
        func_00338940(0x2F);
        func_00338930(arg0);
    }
}
