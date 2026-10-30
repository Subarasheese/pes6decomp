/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00145440(s32);                             /* extern */
s32 func_001454C0(M2C_UNK);                         /* extern */
s16 func_00150110(s32);                             /* extern */
u16 func_00150150(s32);                             /* extern */
s32 func_00153FE0(s16, u16);                        /* extern */
M2C_UNK func_001C4730(s32, s32, u16);               /* extern */
extern char D_0051FFB2[];
extern char D_005202F8[];
extern char D_005202FC[];
extern char D_00520300[];
extern char D_00520302[];

void func_0019E9C0(void) {
    s32 temp_v0;
    s32 temp_v0_2;

    (*(s32 *)D_005202F8) = 0;
    (*(s32 *)D_005202FC) = 0;
    (*(s16 *)D_00520300) = 0;
    (*(u16 *)D_00520302) = 0;
    temp_v0 = func_001454C0(0x2752);
    if (temp_v0 != 0) {
        (*(s32 *)D_005202F8) = func_00145440(temp_v0);
        (*(s16 *)D_00520300) = func_00150110(temp_v0);
        (*(u16 *)D_00520302) = func_00150150(temp_v0);
        temp_v0_2 = func_00153FE0((*(s16 *)D_0051FFB2), (*(u16 *)D_00520302));
        (*(s32 *)D_005202FC) = temp_v0_2;
        func_001C4730(temp_v0_2, (*(s32 *)D_005202F8), (*(u16 *)D_00520302));
    }
}
