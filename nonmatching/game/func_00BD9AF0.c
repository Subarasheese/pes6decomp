/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6280(void);
extern u8 func_00C00630(void);
s32 func_009E1C90(M2C_UNK);                         /* extern */
extern char D_00591DC4[];
extern char D_00CBBE07[];
extern char D_00CBD550[];

s32 func_00BD9AF0(void) {
    s32 temp_v1;
    s32 var_s0;
    u8 temp_v0;

    var_s0 = 0;
    temp_v1 = func_009E1C90(1) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 12:
        if (func_00BF6280() == 0x10) {
            temp_v0 = func_00C00630();
            if ((temp_v0 != 0x28) && (temp_v0 != 0x26) && (temp_v0 != 0x24) && (temp_v0 != 0x23) && (temp_v0 != 0x21)) {
                if (*(u8 *)0x591C08 != 2) {
                    var_s0 = 2;
                }
            } else {
                var_s0 = 1;
            }
        }
        break;
    case 5:
        if ((*(u8 *)D_00CBBE07) == 1) {
            var_s0 = 2;
        } else {
            (*(s64 *)D_00CBD550) = 0;
        }
        break;
    default:
        *(s64 *)0xCBD550 = 0;
        break;
    }
    if (var_s0 != 0) {
        if ((*(s64 *)D_00CBD550) != 0) {
            if ((*(s64 *)D_00CBD550) != (*(u32 *)D_00591DC4)) {
                var_s0 = 0;
            }
        } else {
            (*(s64 *)D_00CBD550) = (s64) (*(u32 *)D_00591DC4);
        }
    }
    return var_s0;
}
