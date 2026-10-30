/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001D7D60(s32, s32);                    /* extern */
M2C_UNK func_001D7D80(s32, s64);                    /* extern */
M2C_UNK func_001EDAE0(s32, s32);                    /* extern */
s32 func_002DCA30();                                /* extern */
extern char D_0058D7AB[];
extern char D_00921DE0[];
extern char D_00921DE4[];
extern char D_00921E2C[];
extern char D_00921E30[];
extern char D_00921E6C[];

void func_00910F00(s64 arg0) {
    s32 temp_s1;
    s32 temp_s1_2;
    s32 var_v0;
    s32 var_v0_2;
    s64 var_s0;

    var_s0 = arg0;
    if (func_002DCA30() != 0) {
        var_s0 = 2;
        if ((*(s8 *)D_0058D7AB) != 2) {
            var_s0 = 0;
        }
    }
    func_001D7D60((*(s32 *)D_00921E6C), var_s0 >= 0);
    var_v0 = var_s0 == 0;
    if (var_v0 == 0) {
        var_v0 = var_s0 == 2;
    }
    func_001EDAE0((*(s32 *)D_00921E2C), var_v0 & 0xFF);
    var_v0_2 = var_s0 == 0;
    if (var_v0_2 == 0) {
        var_v0_2 = var_s0 == 2;
    }
    func_001EDAE0((*(s32 *)D_00921E30), var_v0_2 & 0xFF);
    temp_s1 = (*(s32 *)D_00921DE0);
    if (var_s0 < 0) {
        func_001D7D60(temp_s1, 0);
    } else {
        func_001D7D60(temp_s1, 1);
        func_001D7D80(temp_s1, (s64) (var_s0 << 0x30) >> 0x30);
    }
    temp_s1_2 = (*(s32 *)D_00921DE4);
    if (var_s0 < 0) {
        func_001D7D60(temp_s1_2, 0);
        return;
    }
    func_001D7D60(temp_s1_2, 1);
    func_001D7D80(temp_s1_2, (s64) (var_s0 << 0x30) >> 0x30);
}
