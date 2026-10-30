/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0025EC20(s32);
extern u32 func_0025E0E0(s32);
extern int func_0025F820(void);
extern void func_0025F830(void *);
M2C_UNK func_001C4730(s32, s32, s32);               /* extern */
M2C_UNK func_001C48E8(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0025E080(M2C_UNK);                     /* extern */
extern char D_0058D280[];
extern char D_0058D284[];
extern char D_0058D288[];
extern char D_0058D28C[];
extern char D_0058D290[];
extern char D_0058D294[];
extern char D_0058D298[];
extern char D_0058D29C[];
extern char D_0058D2A0[];

void func_0025F470(void) {
    u8 sp38;
    u8 sp3C;
    s32 *var_s0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_s1;
    u32 temp_v0;

    temp_v0 = func_0025E0E0(0);
    switch (temp_v0) {                              /* irregular */
    case 1:
        func_001C4730((*(s32 *)D_0058D288), (*(s32 *)D_0058D290), (*(s32 *)D_0058D298));
        func_001C4730((*(s32 *)D_0058D28C), (*(s32 *)D_0058D294), (*(s32 *)D_0058D29C));
    default:
block_12:
        func_0025E080(0);
        break;
    case 2:
        func_001C4730((*(s32 *)D_0058D290), (*(s32 *)D_0058D288), (*(s32 *)D_0058D298));
        func_001C4730((*(s32 *)D_0058D294), (*(s32 *)D_0058D28C), (*(s32 *)D_0058D29C));
        temp_s0 = func_0025F820() & 0xFFFF;
        func_0025F830(&sp3C);
        temp_a1 = sp3C * 4;
        func_001C4730((*(s32 *)D_0058D2A0) + temp_a1, (*(s32 *)D_0058D28C) + temp_a1, (temp_s0 & 0xFFFF) * 4);
        func_0025EC20(1);
        func_0025EC20(2);
        goto block_12;
    case 3:
        func_001C4730((*(s32 *)D_0058D280), (*(s32 *)D_0058D290), (*(s32 *)D_0058D298));
        func_001C4730((*(s32 *)D_0058D284), (*(s32 *)D_0058D294), (*(s32 *)D_0058D29C));
        func_001C4730((*(s32 *)D_0058D290), (*(s32 *)D_0058D288), (*(s32 *)D_0058D298));
        func_001C4730((*(s32 *)D_0058D294), (*(s32 *)D_0058D28C), (*(s32 *)D_0058D29C));
        temp_s0_2 = func_0025F820() & 0xFFFF;
        func_0025F830(&sp38);
        temp_a1_2 = sp38 * 4;
        func_001C4730((*(s32 *)D_0058D2A0) + temp_a1_2, (*(s32 *)D_0058D28C) + temp_a1_2, (temp_s0_2 & 0xFFFF) * 4);
        func_001C4730((*(s32 *)D_0058D288), (*(s32 *)D_0058D280), (*(s32 *)D_0058D298));
        func_001C4730((*(s32 *)D_0058D28C), (*(s32 *)D_0058D284), (*(s32 *)D_0058D29C));
        func_0025EC20(1);
        func_0025EC20(2);
        goto block_12;
    case 4:
        var_s1 = 0;
        var_s0 = ((void *)D_0058D280);
        do {
            func_001C48E8(M2C_FIELD(var_s0, s32 *, 0), 0, (*(s32 *)D_0058D298));
            func_001C48E8(M2C_FIELD(var_s0, s32 *, 4), 0, (*(s32 *)D_0058D29C));
            var_s1 += 1;
            var_s0 += 8;
        } while (var_s1 < 2);
        goto block_12;
    }
}
