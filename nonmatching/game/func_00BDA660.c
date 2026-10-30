/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
void **func_00B2A420(u8);                           /* extern */
M2C_UNK func_00BD3CF0(void **, f32, f32);           /* extern */
M2C_UNK func_00BDAFE0(void **);                     /* extern */
void *func_00BDB260();                              /* extern */
extern char D_00CBD55C[];

void func_00BDA660(void **arg0) {
    f32 var_f1;
    u16 temp_v0_2;
    u16 var_a1;
    void **temp_s2;
    void *temp_a0;
    void *temp_s0;
    void *temp_v0;

    temp_s0 = func_00BDB260();
    temp_s2 = func_00B2A420((*(u8 *)D_00CBD55C));
    temp_v0 = *arg0;
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    temp_a0 = *temp_s2;
    if ((s32) M2C_FIELD(*arg0, u8 *, 0) >= (s32) M2C_FIELD(temp_a0, u8 *, 0)) {
        var_a1 = M2C_FIELD(temp_s0, u16 *, 0xE);
    } else {
        temp_v0_2 = M2C_FIELD(temp_s0, u16 *, 0xE);
        if ((s32) temp_v0_2 < 0) {
            var_f1 = 2.0f * (f32) ((temp_v0_2 >> 1) | (temp_v0_2 & 1));
        } else {
            var_f1 = (f32) temp_v0_2;
        }
        var_a1 = (u16) (s32) (var_f1 - M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), f32 *, 0x28));
    }
    if (func_00207D80(M2C_FIELD(temp_a0, void **, 4), (s32) var_a1) != 0) {
        func_00BDAFE0(arg0);
        M2C_FIELD(*arg0, s16 *, 0x18) = 0xC7;
    }
}
