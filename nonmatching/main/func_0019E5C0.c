/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00145440(s32);                             /* extern */
s32 func_001454C0(M2C_UNK);                         /* extern */
s32 func_00153FE0(s16, M2C_UNK);                    /* extern */
M2C_UNK func_001887A0(u8 *, u8 *);                  /* extern */
M2C_UNK func_001C4730(s32, s32, M2C_UNK);           /* extern */
extern char D_0051FFB2[];
extern char D_005202E8[];
extern char D_005202EC[];
extern char D_005202F0[];
extern char D_005202F1[];

void func_0019E5C0(void) {
    u8 sp1E;
    u8 sp1F;
    s32 temp_v0;
    s32 temp_v0_2;

    (*(s32 *)D_005202E8) = 0;
    (*(s32 *)D_005202EC) = 0;
    (*(u8 *)D_005202F0) = 0;
    (*(s8 *)D_005202F1) = 0;
    temp_v0 = func_001454C0(0x2724);
    if (temp_v0 != 0) {
        (*(s32 *)D_005202E8) = func_00145440(temp_v0);
        temp_v0_2 = func_00153FE0((*(s16 *)D_0051FFB2), 0x40);
        (*(s32 *)D_005202EC) = temp_v0_2;
        func_001C4730(temp_v0_2, (*(s32 *)D_005202E8), 0x40);
        func_001887A0(&sp1F, &sp1E);
        (*(u8 *)D_005202F0) = sp1E;
        (*(s8 *)D_005202F1) = sp1F - sp1E;
    }
}
