/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

void func_00153FA0(void *);
u32 func_0025E0E0(s32);
s32 func_0025E100(s32, s32);
extern char D_0058D380[];
extern char D_0058D382[];
extern char D_0058D384[];
extern char D_0058D386[];
extern char D_0058D3A4[];
extern char D_0058D3A8[];
extern char D_0058D3AC[];

void func_00261670(void) {
    if (func_0025E0E0(9) == 3) {
        if ((*(s32 *)D_0058D3A4) != 0) {
            func_00153FA0(*(void **)D_0058D3A4);
            (*(s32 *)D_0058D3A4) = 0;
            (*(s32 *)D_0058D3A8) = 0;
            (*(s32 *)D_0058D3AC) = 0;
        }
        (*(s16 *)D_0058D380) = 0;
        (*(s16 *)D_0058D382) = 0;
        (*(s16 *)D_0058D384) = 0;
        (*(s16 *)D_0058D386) = 0;
        func_0025E100(9, 0);
    }
}
