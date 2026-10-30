/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008B14B8[];
extern char D_008B14BC[];
extern char D_008B14C0[];
extern char D_008B14C4[];

void func_0084A5E0(s32 arg0, s32 arg1) {
    s32 temp_a4;

    (*(s32 *)D_008B14B8) = arg1;
    temp_a4 = arg0 * 0x3E8;
    (*(s32 *)D_008B14C0) = temp_a4;
    (*(s8 *)D_008B14C4) = 1;
    (*(s32 *)D_008B14BC) = arg1 + temp_a4;
}
