/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC2B0(void);
extern void func_001BA3C0(void);
extern char D_008FA1C0[];

void func_008F7B60(void) {
    M2C_UNK *var_v1;
    s32 *temp_v0;
    s32 var_a0;
    s32 var_a1;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;

    var_a0 = 0;
    var_v1 = ((void *)D_008FA1C0);
    do {
        var_a1 = 0;
        if (0 < 4) {
            do {
                temp_v0 = var_v1 + (var_a1 * 4);
                var_a1 += 1;
                *temp_v0 = 0;
            } while (var_a1 < 4);
        }
        var_a0 += 1;
        var_v1 += 0x10;
    } while (var_a0 < 8);
    var_s2 = 0;
    do {
        var_s3 = 0;
        if (0 < 4) {
            do {
                var_s1 = 0;
loop_9:
                func_001BA3C0();
                var_s1 += 1;
                if (var_s1 < 0xF) {
                    goto loop_9;
                }
                var_s3 += 1;
            } while (var_s3 < 4);
        }
        var_s2 += 1;
    } while (var_s2 < 8);
    func_001BC2B0();
}
