/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B035D0(void);
extern void func_001D7D60(void *, s8);
void func_00AF9100(M2C_UNK arg0, s32 arg1) {
    s32 var_s0;
    s32 var_s3;
    s32 var_s4;
    u32 var_s1;
    u32 var_s2;

    var_s2 = func_00B035D0();
    if (var_s2 != 0) {
        var_s3 = 1;
        switch (arg1) {                             /* irregular */
        case 0:
            var_s3 = 0;
            /* fallthrough */
        case 1:
            var_s0 = 0;
            do {
                var_s4 = 0;
                var_s1 = var_s2;
loop_10:
                func_001D7D60(M2C_FIELD(var_s1, void **, 0x4AC), var_s3 & 0xFF);
                var_s4 += 1;
                var_s1 += 4;
                if (var_s4 < 0x10) {
                    goto loop_10;
                }
                var_s0 += 1;
                var_s2 += 0x40;
            } while (var_s0 < 2);
            break;
        }
    }
}
