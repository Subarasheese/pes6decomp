/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00277360(void *, s32);                     /* extern */
s32 func_009A00D0(u8, s32);                         /* extern */
extern char D_00591DCD[];
extern char D_00591E0C[];
extern char Pes6MatchSquads[];
extern char D_00592AAC[];
extern char D_00592AB0[];
extern char D_00592AB4[];

void func_002CA3C0(void *arg0, s32 arg1) {
    s32 *var_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 var_v0;
    u8 temp_a1;

    temp_a1 = M2C_FIELD(arg0, u8 *, 0x11);
    temp_s2 = temp_a1 * 0x348;
    temp_s1 = M2C_FIELD(arg0, u8 *, 0x12) * 0x6900;
    if (func_00277360(temp_s2 + (((void *)Pes6MatchSquads) + temp_s1) + 0xF0, temp_a1 * 0x69) != 0) {
        switch (arg1) {                             /* irregular */
        case 3:
            var_s0 = temp_s2 + (((void *)D_00592AB4) + temp_s1);
            if (*var_s0 == -1) {
block_5:
                var_v0 = func_009A00D0((*(u8 *)D_00591DCD), (*(s32 *)D_00591E0C));
block_10:
                *var_s0 = var_v0;
            }
            break;
        case 1:
            var_s0 = temp_s2 + (((void *)D_00592AAC) + temp_s1);
            if (*var_s0 == -1) {
                var_v0 = func_009A00D0((*(u8 *)D_00591DCD), (*(s32 *)D_00591E0C));
                goto block_10;
            }
            if (arg1 != 2) {
                goto block_3;
            }
        case 2:
            var_s0 = temp_s2 + (((void *)D_00592AB0) + temp_s1);
            if (*var_s0 == -1) {
                var_v0 = func_009A00D0((*(u8 *)D_00591DCD), (*(s32 *)D_00591E0C));
                goto block_10;
            }
block_3:
            if (arg1 == 3) {
                var_s0 = temp_s2 + (((void *)D_00592AB4) + temp_s1);
                if (*var_s0 == -1) {
                    goto block_5;
                }
            }
            break;
        }
    }
}
