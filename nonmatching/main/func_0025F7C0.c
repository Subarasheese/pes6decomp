/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern char D_0058D30C[];
extern char D_0058D30D[];
extern char D_0058D30E[];
extern char D_0058D310[];

void func_0025F7C0(s8 arg0) {
    s32 temp_a1;

    if ((*(u16 *)D_0058D30E) != 0) {
        temp_a1 = arg0 & 0xFF;
        if ((temp_a1 < (s32) (*(u8 *)D_0058D30C)) && ((s32) (*(u8 *)D_0058D30D) < temp_a1)) {
            return;
        }
        (*(s8 *)D_0058D310) = arg0;
    }
}
