/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002D5410(void);
extern s32 D_003EA848;
extern char D_00591DCC[];
extern char D_00CCBF18[];

void func_00C79F10(s32 arg0) {
    s32 temp_a5;
    s32 temp_v0;
    s32 var_s0;
    u8 var_a0;

    var_s0 = arg0;
    if (D_003EA848 != 0) {
        temp_v0 = func_002D5410();
        if ((temp_v0 != 0xE) && (temp_v0 != 0)) {
            if (((u64) ((s64) (*(u8 *)D_00CCBF18) << 0x3D) >> 0x3F) != 0) {

            } else {
                var_s0 ^= (*(u8 *)D_00591DCC) & 1;
            }
        }
        temp_a5 = 0 & 1;
        (*(u8 *)D_00CCBF18) = ((*(u8 *)D_00CCBF18) & ~1) | temp_a5;
        (*(u8 *)D_00CCBF18) = ((*(u8 *)D_00CCBF18) & ~2) | (temp_a5 * 2);
        switch (var_s0) {                           /* irregular */
        case 0:
            var_a0 = ((*(u8 *)D_00CCBF18) & ~1) | (1 & 1);
block_11:
            (*(u8 *)D_00CCBF18) = var_a0;
            break;
        case 1:
            var_a0 = ((*(u8 *)D_00CCBF18) & ~2) | ((1 & 1) * 2);
            goto block_11;
        }
    }
}
