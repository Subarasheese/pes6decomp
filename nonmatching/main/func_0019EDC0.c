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
extern char D_00520310[];
extern char D_00520314[];
extern char D_00520318[];
extern char D_0052031C[];
extern char D_0052031E[];

void func_0019EDC0(void) {
    s32 temp_v0;
    s32 temp_v0_2;

    (*(s32 *)D_00520310) = 0;
    (*(s32 *)D_00520314) = 0;
    (*(s32 *)D_00520318) = 0;
    (*(s16 *)D_0052031C) = 0;
    (*(u16 *)D_0052031E) = 0;
    temp_v0 = func_001454C0(0x2751);
    if (temp_v0 != 0) {
        (*(s32 *)D_00520310) = temp_v0;
        (*(s32 *)D_00520314) = func_00145440(temp_v0);
        (*(s16 *)D_0052031C) = func_00150110(temp_v0);
        (*(u16 *)D_0052031E) = func_00150150(temp_v0);
        temp_v0_2 = func_00153FE0((*(s16 *)D_0051FFB2), (*(u16 *)D_0052031E));
        (*(s32 *)D_00520318) = temp_v0_2;
        func_001C4730(temp_v0_2, (*(s32 *)D_00520314), (*(u16 *)D_0052031E));
    }
}
