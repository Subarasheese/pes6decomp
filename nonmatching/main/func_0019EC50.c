/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00145380(M2C_UNK);                     /* extern */
M2C_UNK func_001453E0(M2C_UNK);                     /* extern */
s32 func_00145440(s32);                             /* extern */
s32 func_001454C0(M2C_UNK);                         /* extern */
M2C_UNK func_00145590(s32);                         /* extern */
M2C_UNK func_00145750(s32);                         /* extern */
M2C_UNK func_00147010(s32, M2C_UNK);                /* extern */
s16 func_00150110(s32);                             /* extern */
u16 func_00150150(s32);                             /* extern */
M2C_UNK func_00153FA0(s32);                         /* extern */
s32 func_00153FE0(s16, u16);                        /* extern */
M2C_UNK func_001C4730(s32, s32, u16);               /* extern */
extern char D_0051FFB2[];
extern char D_00520310[];
extern char D_00520314[];
extern char D_00520318[];
extern char D_0052031C[];
extern char D_0052031E[];

void func_0019EC50(void) {
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;

    temp_s0 = (*(s32 *)D_00520310);
    if (temp_s0 != 0) {
        temp_v0 = func_001454C0(0x2751);
        if (temp_v0 != 0) {
            func_00145590(temp_v0);
        }
        if ((*(s32 *)D_00520318) != 0) {
            func_001C4730((*(s32 *)D_00520314), (*(s32 *)D_00520318), (*(u16 *)D_0052031E));
            func_00153FA0((*(s32 *)D_00520318));
        }
        (*(s32 *)D_00520314) = 0;
        (*(s32 *)D_00520318) = 0;
        func_00147010(temp_s0, 0x2751);
        func_00145750(temp_s0);
        (*(s32 *)D_00520314) = func_00145440(temp_s0);
        (*(s16 *)D_0052031C) = func_00150110(temp_s0);
        (*(u16 *)D_0052031E) = func_00150150(temp_s0);
        temp_v0_2 = func_00153FE0((*(s16 *)D_0051FFB2), (*(u16 *)D_0052031E));
        (*(s32 *)D_00520318) = temp_v0_2;
        func_001C4730(temp_v0_2, (*(s32 *)D_00520314), (*(u16 *)D_0052031E));
        func_001453E0(0x2751);
        func_00145380(0x2751);
    }
}
