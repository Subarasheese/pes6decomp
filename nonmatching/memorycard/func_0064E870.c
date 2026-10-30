/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BA3C0(void);
extern u8 D_003E9E20;

void func_0064E870(void) {
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;

    var_s3 = 0;
    do {
        if (var_s3 == D_003E9E20) {
            var_s4 = 0;
            if (0 < 4) {
                do {
                    var_s2 = 0;
loop_5:
                    func_001BA3C0();
                    var_s2 += 1;
                    if (var_s2 < 0xF) {
                        goto loop_5;
                    }
                    var_s4 += 1;
                } while (var_s4 < 4);
            }
        }
        var_s3 += 1;
    } while (var_s3 < 8);
}
