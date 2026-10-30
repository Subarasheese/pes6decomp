/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A58E0(void *, signed char);
void **func_00B2A420(s32);                          /* extern */
s32 func_00C37760(u8, s32);                         /* extern */
M2C_UNK func_00C391E0(void **);                     /* extern */
extern char D_00CCB8FC[];

void func_00C3B840(void *arg0) {
    s32 var_s0;
    void **temp_v0;

    var_s0 = 0;
    if ((s32) M2C_FIELD(arg0, u8 *, 2) > 0) {
        do {
            temp_v0 = func_00B2A420(func_00C37760((*(u8 *)D_00CCB8FC), var_s0) & 0xFF);
            M2C_FIELD(M2C_FIELD(*temp_v0, void ***, 4), s8 *, 0x2C) = 1;
            func_001A58E0(*M2C_FIELD(*temp_v0, void ***, 4), 1);
            M2C_FIELD(*M2C_FIELD(*temp_v0, void ***, 4), s8 *, 3) = 0;
            M2C_FIELD(*temp_v0, s16 *, 0x18) = 0x30;
            func_00C391E0(temp_v0);
            var_s0 += 1;
        } while (var_s0 < (s32) M2C_FIELD(arg0, u8 *, 2));
    }
}
