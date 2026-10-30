/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6280(void);
s32 func_009E1C90(M2C_UNK);                         /* extern */
s32 func_00B29BD0();                                /* extern */
s32 func_00B29E20();                                /* extern */
s32 func_00C00390(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_00C00440(M2C_UNK, s32);                /* extern */
extern void *Pes6Ball_Current;
extern char D_00591BE4[];
extern char D_00591E10[];
extern char D_00591E4C[];
extern char D_00591E67[];
extern char D_00591F14[];
extern char D_00591F24[];
extern char D_005E3828[];

s32 func_00B29110(void) {
    s16 temp_a0;
    s16 temp_v1;
    s32 temp_s0;
    s32 var_s1;

    var_s1 = 0;
    if (func_00B29E20() != 0) {
        temp_s0 = func_00B29BD0();
        (*(s32 *)D_005E3828) = 1;
        if ((temp_s0 != 4) && (temp_s0 != 3) && (temp_s0 != 1) && (temp_s0 != 2)) {

        } else {
            if (((*(s16 *)D_00591E10) >= (s32) (*(u8 *)D_00591BE4)) && (((*(u8 *)D_00591F14) != 0) || (((*(u8 *)D_00591E4C) != 0) && ((*(u8 *)D_00591E67) == 1)) || ((*(u8 *)D_00591F24) == 5) || (((func_009E1C90(1) & 0xFF) == 0xC) && (func_00BF6280() == 2)))) {
                (*(s16 *)D_00591E10) = (s16) (*(u8 *)D_00591BE4);
            }
            if (temp_s0 == 1) {
                temp_a0 = (*(u8 *)D_00591BE4) * 5;
                if (((*(s16 *)D_00591E10) >= temp_a0) && (M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) == 0xB)) {
                    (*(s16 *)D_00591E10) = temp_a0;
                }
            }
            if (temp_s0 != 1) {
                temp_v1 = (*(u8 *)D_00591BE4) * 6;
                if (((*(s16 *)D_00591E10) >= temp_v1) && ((*(u8 *)D_00591E67) == 1)) {
                    (*(s16 *)D_00591E10) = temp_v1;
                }
            }
            (*(s16 *)D_00591E10) -= 1;
            if ((*(s16 *)D_00591E10) <= 0) {
                func_00C00440(3, func_00C00390(3, 1));
                var_s1 = 1;
            }
        }
    }
    return var_s1;
}
