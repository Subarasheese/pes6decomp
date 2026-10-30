/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern char D_005E19B6[];
extern char D_005E19B8[];
extern char D_005E19BC[];
extern char D_005E19C0[];

void func_002A93D0(s32 arg0, f32 fparg0, f32 fparg1) {
    s32 temp_a3;

    temp_a3 = arg0 & 0xFF;
    (*(f32 *)D_005E19C0) = fparg1;
    (*(f32 *)D_005E19BC) = fparg0;
    (*(u16 *)D_005E19B6) = ((*(u16 *)D_005E19B6) & ~0x1F) | (temp_a3 & 0x1F);
    if ((fparg0 <= 0.0f) || (temp_a3 == 0)) {
        (*(s32 *)D_005E19B8) = 0;
    }
}
