/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0098F0C0(void *, u8);                      /* extern */
M2C_UNK func_00B98610(void *, s32, s32, s32, s32, s32); /* extern */
s32 func_00BBB8C0(u32);                             /* extern */
extern void *Pes6Ball_Current;
extern char D_00591BE4[];

void func_00B990A0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_a4;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    u32 var_v1;

    var_v0 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x10);
    if (var_v0 > 0) {

    } else {
        var_v0 = -var_v0;
    }
    if (!((f32) var_v0 <= 9241.0f)) {
        var_v0_2 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x18);
        if (var_v0_2 <= 0) {
            var_v0_2 = -var_v0_2;
        }
        if ((f32) var_v0_2 < 5160.0f) {
            if (func_0098F0C0(arg0, M2C_FIELD(arg0, u8 *, 0x13)) != 0) {
                var_a4 = 1;
            } else {
                var_v0_3 = func_00BBB8C0(((*(u8 *)D_00591BE4) / 6) + ((u8) (*(u8 *)D_00591BE4) >> 0x1F));
                var_v1 = ((*(u8 *)D_00591BE4) / 10) + ((u8) (*(u8 *)D_00591BE4) >> 0x1F);
                goto block_10;
            }
        } else {
            goto block_9;
        }
    } else {
block_9:
        var_v0_3 = func_00BBB8C0((u8) (*(u8 *)D_00591BE4) >> 2);
        var_v1 = (u8) (*(u8 *)D_00591BE4) >> 1;
block_10:
        var_a4 = var_v1 + var_v0_3;
    }
    func_00B98610(arg0, arg1, arg2, arg3, var_a4, arg4);
}
