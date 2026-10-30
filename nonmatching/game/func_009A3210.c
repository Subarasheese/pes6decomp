/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0099DC30(s32);                         /* extern */
s32 func_00B29B90();                                /* extern */
s32 func_00B29C80();                                /* extern */
s32 func_00B29E20(u8);                              /* extern */
extern void *D_003EA710;
extern char D_00591C09[];
extern char D_00591DD6[];

void func_009A3210(void) {
    s32 var_s0;
    s32 var_s1;
    s32 var_v1;
    u32 temp_a0;
    u32 temp_a1;
    void *temp_s0;
    void *temp_s1;

    var_s1 = 0;
    if ((*(u8 *)D_00591DD6) != 0) {
        var_s0 = 1;
        if ((*(u8 *)D_00591C09) == 5) {
            var_v1 = (*(u8 *)D_00591C09) == 5;
            if (var_v1 != 0) {
                var_v1 = func_00B29E20((*(u8 *)D_00591C09)) != 0;
                if (var_v1 != 0) {
                    var_v1 = func_00B29B90() != 0;
                }
                if (var_v1 == 0) {
                    var_v1 = func_00B29C80() != 0;
                }
            }
            if (var_v1 == 0) {
                var_s0 = 0;
            }
        }
        if (var_s0 != 0) {
            var_s1 = 1;
        }
    }
    if (var_s1 != 0) {
        temp_s1 = D_003EA710;
        temp_s0 = temp_s1 + 8;
        if (M2C_FIELD(temp_s1, s32 *, 0x38) != 0) {
            func_0099DC30(M2C_FIELD(temp_s0, s32 *, 0x24) + (M2C_FIELD(temp_s0, u32 *, 0x28) * 0xC0));
            M2C_FIELD(temp_s0, u32 *, 0x28) = (u32) (M2C_FIELD(temp_s0, u32 *, 0x28) + 1);
            temp_a1 = M2C_FIELD(temp_s0, s32 *, 4) * M2C_FIELD(temp_s0, s32 *, 8);
            temp_a0 = M2C_FIELD(temp_s0, u32 *, 0x28);
            if (temp_a0 >= temp_a1) {
                M2C_FIELD(temp_s0, u32 *, 0x28) = (u32) (temp_a0 - temp_a1);
            }
        }
        M2C_FIELD(temp_s0, s32 *, 0xC) = (s32) (M2C_FIELD(temp_s0, s32 *, 0xC) + 1);
        M2C_FIELD(temp_s1, s32 *, 0x78) = 0;
    }
}
