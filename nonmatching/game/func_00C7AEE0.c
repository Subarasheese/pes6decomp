/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F9370(void *);
extern int func_002D5410(void);
M2C_UNK func_002F9F20(s32, s32, M2C_UNK, s32, s32, s32); /* extern */
extern char D_00591DCC[];
extern void *D_00CCBEE0;

void func_00C7AEE0(s32 arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 var_s3;

    temp_v0 = func_002D5410();
    switch (temp_v0) {                              /* irregular */
    case 14:
        var_s3 = 0;
        break;
    case 0:
        var_s3 = 0;
        break;
    default:
        if (((u64) ((s64) *(u8 *)0xCCBF18 << 0x3D) >> 0x3F) != 0) {
            var_s3 = 0;
        } else {
            var_s3 = (*(u8 *)D_00591DCC) & 1;
        }
        break;
    }
    func_002F9F20(arg0, var_s3, 0, func_002F9370(D_00CCBEE0), arg2, arg3);
}
