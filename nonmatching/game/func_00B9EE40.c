/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 func_009B44E0(void);
extern u16 func_009B4390(void);
extern s32 D_003E758C;
extern char D_00CBCE2D[];
extern char D_00CBCE3C[];
extern char D_00CBD038[];
extern char D_00CBD03C[];

void func_00B9EE40(void) {
    s32 var_s1;
    u8 temp_s0;

    if ((*(u8 *)D_00CBCE2D) == 0) {
        (*(u16 *)D_00CBD038) = 0;
        (*(s32 *)D_00CBD03C) = 0;
    }
    var_s1 = ((func_009B4390() & 0xFFFF) + 4) & 0xFFFF;
    if ((func_009B44E0() & 0xFFFF) < var_s1) {
        var_s1 = func_009B44E0() & 0xFFFF;
    }
    temp_s0 = M2C_FIELD((((var_s1 & 0xFFFF) * 0x354) + D_003E758C), u8 *, 0x34E);
    if ((*(s32 *)D_00CBD03C) != 0) {
        if ((temp_s0 & 0xFF) == 4) {
            (*(f32 *)D_00CBCE3C) = 0.125f;
            (*(u16 *)D_00CBD038) = (u16) var_s1;
            (*(s32 *)D_00CBD03C) = 0;
        }
    } else if ((func_009B4390() & 0xFFFF) >= (s32) (*(u16 *)D_00CBD038)) {
        if ((temp_s0 & 0xFF) != 4) {
            (*(s32 *)D_00CBD03C) = 1;
        }
        if ((*(f32 *)D_00CBCE3C) == 0.125f) {
            (*(f32 *)D_00CBCE3C) = 0.25f;
        }
    }
}
