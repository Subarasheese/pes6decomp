/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_002243B0(s32, s32);
extern u16 func_002282A0(void);
s32 func_00224BC0(s32, s32);                        /* extern */
void *func_00224E20(s32, s32);                      /* extern */
extern char D_00591C09[];

u16 func_0022C6A0(s32 arg0, s32 arg1) {
    s32 var_s2;
    u64 var_v0;
    void *temp_v0;

    switch ((*(u8 *)D_00591C09)) {                           /* irregular */
    case 4:
        return func_002282A0();
    case 2:
    case 1:
        var_s2 = 0;
loop_7:
        if ((arg1 & 0xFFFF) != (func_00224BC0(arg0, var_s2) & 0xFFFF)) {
            var_s2 = (var_s2 + 1) & 0xFF;
            if (var_s2 >= 0x20) {
                return 0U;
            }
            goto loop_7;
        }
        temp_v0 = func_00224E20(arg0, func_002243B0(arg0, var_s2) & 0xFF);
        if (temp_v0 != NULL) {
            var_v0 = (u64) ((s64) M2C_FIELD(temp_v0, u16 *, 8) << 0x30) >> 0x34;
        } else {
            var_v0 = 0;
        }
        return (u16) var_v0;
    default:
        return 0U;
    }
}
