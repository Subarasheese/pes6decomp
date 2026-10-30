/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void Pes6Sprite_SetPositionZ(void *, float);
extern void func_001D76B0(void *, u32);
extern void func_001D7D60(void *, s8);
extern char D_003B3210[];
extern char D_003B3214[];
extern void *D_003B3218;
extern char D_003B321C[];
extern char D_003B3220[];

s32 func_002DC8A0(void *arg0) {
    s32 temp_v1;
    s32 var_s0;
    void *temp_v0;

    var_s0 = 0;
    if ((*(s32 *)D_003B3220) != 1) {
        if ((*(s32 *)D_003B3220) != 0) {
            var_s0 = 1;
        } else {
            D_003B3218 = arg0;
            if ((arg0 != NULL) && (temp_v0 = M2C_FIELD(arg0, void **, 0x1C), (temp_v0 != NULL))) {
                Pes6Sprite_SetPositionZ(arg0, 875.0f - (f32) M2C_FIELD(temp_v0, s16 *, 8));
            } else {
                Pes6Sprite_SetPositionZ(arg0, -65536.0f);
            }
            func_001D76B0(arg0, 0U);
            func_001D7D60(arg0, 1);
            (*(s32 *)D_003B321C) = 0;
            (*(s32 *)D_003B3214) = (*(s32 *)D_003B3210);
            (*(s32 *)D_003B3220) += 1;
        }
    } else {
        temp_v1 = (*(s32 *)D_003B321C) + (0xFF / (s32) (*(s32 *)D_003B3214));
        (*(s32 *)D_003B321C) = temp_v1;
        if (temp_v1 >= 0xFF) {
            (*(s32 *)D_003B321C) = 0xFF;
            (*(s32 *)D_003B3220) += 1;
        }
        func_001D76B0(arg0, (u32) (u8) (*(s32 *)D_003B321C));
    }
    return var_s0;
}
