/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void func_001EDAE0(void *, s8);
M2C_UNK func_002DF8E0(s32, s8);                     /* extern */
M2C_UNK func_002E4400(s32, s32);                    /* extern */
M2C_UNK func_00C75010(void *, s32);                 /* extern */
M2C_UNK func_00C75070(void *, s32);                 /* extern */
extern char D_003AE970[];
extern void *D_003EA6C0;

void func_008FAB70(s64 arg0) {
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_v0;
    s64 temp_s0;
    s8 temp_s1;
    void *temp_s3;
    void *temp_v1;

    if (D_003EA6C0 != NULL) {
        temp_s1 = arg0 & 0xFF;
        func_001D7D60(M2C_FIELD(D_003EA6C0, void **, 0x3C), temp_s1);
        func_002DF8E0(M2C_FIELD(D_003EA6C0, s32 *, 0x44), temp_s1);
        var_s1 = arg0 != 0;
        if (var_s1 != 0) {
            var_s1 = (*(s8 *)D_003AE970) >= 0xB;
        }
        func_001D7D60(M2C_FIELD(D_003EA6C0, void **, 0x40), var_s1 & 0xFF);
        func_00C75010(D_003EA6C0 + 0xEC, var_s1 & 0xFF);
        func_00C75010(D_003EA6C0 + 0xF4, var_s1 & 0xFF);
        temp_s0 = (s64) (arg0 << 0x38) >> 0x38;
        func_001D7D60(M2C_FIELD(D_003EA6C0, void **, 0x1F0), temp_s0 & 0xFF);
        var_v0 = temp_s0 != 0;
        if (var_v0 != 0) {
            var_v0 = M2C_FIELD(D_003EA6C0, s32 *, 0x18C) >= 2;
        }
        func_002E4400(M2C_FIELD(D_003EA6C0, s32 *, 0x1F4), var_v0 & 0xFF);
        var_s2 = 0;
        var_s1_2 = 0;
loop_6:
        temp_v1 = D_003EA6C0 + var_s1_2;
        temp_s3 = temp_v1 + 0x204;
        if (M2C_FIELD(temp_v1, s8 *, 0x204) != 0) {
            func_00C75070(temp_s3, temp_s0 & 0xFF);
            func_001EDAE0(M2C_FIELD(temp_s3, void **, 0x18), temp_s0 & 0xFF);
            var_s2 += 1;
            var_s1_2 += 0x1C;
            if (var_s2 >= 0xB) {

            } else {
                goto loop_6;
            }
        }
    }
}
