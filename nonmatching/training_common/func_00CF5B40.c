/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001D5A10(M2C_UNK);                         /* extern */
s32 *func_001D6EF0(s32, s32, s32);                  /* extern */
M2C_UNK func_001D7C20(s32, M2C_UNK);                /* extern */
M2C_UNK func_001D7D60(s32, M2C_UNK);                /* extern */
M2C_UNK func_001D7D80(s32, M2C_UNK);                /* extern */
M2C_UNK func_001D7E40(s32, M2C_UNK);                /* extern */
s32 func_001D7F90(s32);                             /* extern */
M2C_UNK func_001DF820(s32, s32);                    /* extern */
s32 func_001DF940(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_001F0160(s32);                             /* extern */
s32 func_001F08B0(M2C_UNK);                         /* extern */
extern s32 D_003EB344;
extern char D_0067000C[];
extern char D_00CFC958[];
extern char D_00CFC95C[];
extern char D_00CFC960[];
extern char D_00CFEB50[];
extern char D_00D000C0[];
extern char D_00D000C4[];
extern char D_00D000C8[];
extern char D_00D000CC[];

void func_00CF5B40(void) {
    M2C_UNK *var_v0;
    s32 *temp_v0_3;
    s32 *temp_v0_4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_v1;

    if ((*(s32 *)D_00D000C0) == 0) {
        func_001F0160(0x670001);
        temp_v0 = func_001D5A10(0x12594);
        (*(s32 *)D_00D000C0) = 1;
        temp_v0_2 = func_001D7F90(temp_v0);
        (*(s32 *)D_00D000C4) = temp_v0_2;
        func_001D7E40(temp_v0_2, 0xF);
        func_001D7D80((*(s32 *)D_00D000C4), 0);
        func_001D7C20((*(s32 *)D_00D000C4), 0);
        func_001D7D60((*(s32 *)D_00D000C4), 1);
        temp_v0_3 = func_001D6EF0((*(s32 *)D_00D000C4), func_001F0160(0x180062), (*(s32 *)D_00CFC958));
        if (temp_v0_3 == NULL) {
            var_v0 = ((void *)D_0067000C);
        } else {
            if (temp_v0_3 == NULL) {
                var_a0 = 0;
            } else {
                var_a0 = *temp_v0_3;
            }
            (*(s32 *)D_00D000C8) = var_a0;
            func_001DF820((*(s32 *)D_00D000C8), func_001F08B0(0x6C001E));
            var_v0 = (M2C_UNK *)0x670000;
        }
        temp_v0_4 = func_001D6EF0((*(s32 *)D_00D000C4), func_001F0160((s32) var_v0 | 4), (*(s32 *)D_00CFC95C));
        if (temp_v0_4 != NULL) {
            if (temp_v0_4 == NULL) {
                var_v1 = 0;
            } else {
                var_v1 = *temp_v0_4;
            }
            (*(s32 *)D_00D000CC) = var_v1;
        }
        D_003EB344 = func_001DF940(0x17, ((void *)D_00CFC960), ((void *)D_00CFEB50), 2, 0);
    }
}
