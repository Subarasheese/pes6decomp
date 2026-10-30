/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001B66C0(M2C_UNK);                     /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_002F7E00(s32, M2C_UNK, u8);            /* extern */
M2C_UNK func_00BC8E00(M2C_UNK);                     /* extern */
M2C_UNK func_00BCC540(s32, M2C_UNK);                /* extern */
M2C_UNK func_00BFA1F0(M2C_UNK);                     /* extern */
s32 func_00BFB5B0();                                /* extern */
extern char D_00CEB748[];

void func_00BF7FA0(void *arg0) {
    M2C_UNK var_s0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    s32 var_v0_2;

    var_s0 = 0;
    temp_v0 = func_00BFB5B0();
    switch (temp_v0) {                              /* irregular */
    case 9:
        func_00BC8E00(0);
        break;
    case 8:
        func_00BC8E00(1);
        break;
    case 7:
        temp_v1 = M2C_FIELD(arg0, s32 *, 4);
        var_v0 = temp_v1 + 1;
        if (var_v0 >= 3) {
            var_v0 = 2;
        } else if (var_v0 <= 0) {
            var_v0 = 1;
        }
        if (var_v0 != temp_v1) {
            M2C_FIELD(arg0, s32 *, 4) = var_v0;
            func_0026E840(0x8400F802);
        }
        temp_s0 = M2C_FIELD(arg0, s32 *, 0);
        func_002F7E00(temp_s0, 0, (u8) M2C_FIELD(arg0, s32 *, 4));
        func_00BCC540(temp_s0, 0);
        var_s0 = 1;
        break;
    case 6:
        temp_v1_2 = M2C_FIELD(arg0, s32 *, 4);
        var_v0_2 = temp_v1_2 - 1;
        if (var_v0_2 >= 3) {
            var_v0_2 = 2;
        } else if (var_v0_2 <= 0) {
            var_v0_2 = 1;
        }
        if (var_v0_2 != temp_v1_2) {
            M2C_FIELD(arg0, s32 *, 4) = var_v0_2;
            func_0026E840(0x8400F802);
        }
        temp_s0_2 = M2C_FIELD(arg0, s32 *, 0);
        func_002F7E00(temp_s0_2, 0, (u8) M2C_FIELD(arg0, s32 *, 4));
        func_00BCC540(temp_s0_2, 0);
        var_s0 = 1;
        break;
    case 2:
        func_0026E840(0x84008401);
        temp_s0_3 = M2C_FIELD(arg0, s32 *, 0);
        func_002F7E00(temp_s0_3, 0, M2C_FIELD(arg0, u8 *, 8));
        func_00BCC540(temp_s0_3, 0);
        (*(s32 *)D_00CEB748) = 2;
        var_s0 = 1;
        break;
    case 1:
        func_0026E840(0x84028400);
        (*(s32 *)D_00CEB748) = 2;
        break;
    }
    func_001B66C0(0x015F001D);
    func_00BFA1F0(var_s0);
}
