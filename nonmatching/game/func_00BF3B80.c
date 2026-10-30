/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_001CD9E0(f32);                             /* extern */
s32 func_009B3350(s32, s32, M2C_UNK);               /* extern */
M2C_UNK func_00B256B0(s32);                         /* extern */
extern s32 Pes6Ball_Current;

void func_00BF3B80(void *arg0) {
    f32 var_f12;
    s32 temp_f0;
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_009B3350(Pes6Ball_Current, (s32) (13465.0f * (f32) M2C_FIELD(arg0, s16 *, 0x14)), 0);
    if (temp_v0 < 0) {
        var_f12 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
    } else {
        var_f12 = (f32) temp_v0;
    }
    temp_f0 = (s32) func_001CD9E0(var_f12);
    var_v0 = temp_f0 >> 8;
    if (temp_f0 < 0) {
        var_v0 = (s32) (temp_f0 + 0xFF) >> 8;
    }
    func_00B256B0(var_v0 & 0xFFFF);
}
