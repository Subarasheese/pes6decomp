/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00189AD0(void *, M2C_UNK);             /* extern */
M2C_UNK func_0018A148(void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_0018A3F0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_0016C5E8(void *arg0) {
    s32 temp_v0;
    s32 var_a2;
    s64 temp_a0;
    void *temp_s0;
    void *var_a1;

    temp_s0 = arg0 + 0x910;
    M2C_FIELD(arg0, s32 *, 0x910) = 0x10000002;
    M2C_FIELD(temp_s0, s32 *, 4) = 0;
    M2C_FIELD(temp_s0, s32 *, 8) = 0;
    temp_v0 = func_0018A3F0(0x50, 0, 2, 0);
    M2C_FIELD(temp_s0, s32 *, 0x3C) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x34) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x38) = 0;
    M2C_FIELD(temp_s0, s32 *, 0xC) = temp_v0;
    M2C_FIELD(temp_s0, s32 *, 0x30) = 0x60000000;
    func_00189AD0(arg0 + 0x920, 1);
    func_0018A148(arg0 + 0x930, 0x98, 0xD7, 0, 0xD8, 0, 0);
    var_a1 = arg0 + 0x40;
    M2C_FIELD(arg0, s64 *, 0x20950) = (s64) M2C_FIELD(arg0, s32 *, 0x910);
    var_a2 = 0x7FF;
    M2C_FIELD(arg0, s64 *, 0x20958) = (s64) M2C_FIELD(arg0, s64 *, 0x918);
    M2C_FIELD(arg0, s64 *, 0x20960) = (s64) M2C_FIELD(arg0, s64 *, 0x920);
    M2C_FIELD(arg0, s64 *, 0x20968) = (s64) M2C_FIELD(arg0, s64 *, 0x928);
    M2C_FIELD(arg0, s64 *, 0x20970) = (s64) M2C_FIELD(arg0, s64 *, 0x930);
    M2C_FIELD(arg0, s64 *, 0x20978) = (s64) M2C_FIELD(arg0, s64 *, 0x938);
    M2C_FIELD(arg0, s64 *, 0x20980) = (s64) M2C_FIELD(arg0, s64 *, 0x940);
    M2C_FIELD(arg0, s64 *, 0x20988) = (s64) M2C_FIELD(arg0, s64 *, 0x948);
    do {
        temp_a0 = (s64) M2C_FIELD(arg0, s32 *, 0x910);
        var_a2 -= 1;
        M2C_FIELD(var_a1, s64 *, 0x20950) = temp_a0;
        M2C_FIELD(var_a1, s64 *, 0x20958) = (s64) M2C_FIELD(arg0, s64 *, 0x918);
        M2C_FIELD(var_a1, s64 *, 0x20960) = (s64) M2C_FIELD(arg0, s64 *, 0x920);
        M2C_FIELD(var_a1, s64 *, 0x20968) = (s64) M2C_FIELD(arg0, s64 *, 0x928);
        M2C_FIELD(var_a1, s64 *, 0x20970) = (s64) M2C_FIELD(arg0, s64 *, 0x930);
        M2C_FIELD(var_a1, s64 *, 0x20978) = (s64) M2C_FIELD(arg0, s64 *, 0x938);
        M2C_FIELD(var_a1, s64 *, 0x20980) = (s64) M2C_FIELD(arg0, s64 *, 0x940);
        M2C_FIELD(var_a1, s64 *, 0x20988) = (s64) M2C_FIELD(arg0, s64 *, 0x948);
        M2C_FIELD(var_a1, s64 *, 0x910) = temp_a0;
        M2C_FIELD(var_a1, s64 *, 0x918) = (s64) M2C_FIELD(var_a1, s64 *, 0x20958);
        M2C_FIELD(var_a1, s64 *, 0x920) = (s64) M2C_FIELD(var_a1, s64 *, 0x20960);
        M2C_FIELD(var_a1, s64 *, 0x928) = (s64) M2C_FIELD(var_a1, s64 *, 0x20968);
        M2C_FIELD(var_a1, s64 *, 0x930) = (s64) M2C_FIELD(var_a1, s64 *, 0x20970);
        M2C_FIELD(var_a1, s64 *, 0x938) = (s64) M2C_FIELD(var_a1, s64 *, 0x20978);
        M2C_FIELD(var_a1, s64 *, 0x940) = (s64) M2C_FIELD(var_a1, s64 *, 0x20980);
        M2C_FIELD(var_a1, s64 *, 0x948) = (s64) M2C_FIELD(var_a1, s64 *, 0x20988);
        var_a1 += 0x40;
    } while (var_a2 >= 0);
}
