/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001AAF40(s32, M2C_UNK);                /* extern */
M2C_UNK func_001AAF50(s32, M2C_UNK);                /* extern */
M2C_UNK func_00901C00(M2C_UNK);                     /* extern */
M2C_UNK func_0090A410(s32, M2C_UNK, M2C_UNK, f32);  /* extern */
M2C_UNK func_0090B0E0(M2C_UNK);                     /* extern */
void *func_009177C0(s32);                           /* extern */
extern char D_0092F0D0[];
extern char D_0092F0FA[];

s32 func_00901FE0(void) {
    s32 *temp_v0_2;
    s32 temp_a0;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;
    void *temp_v0;

    func_0090B0E0(0x80);
    if (!((*(s32 *)D_0092F0D0) & 0x20000)) {
        func_0090B0E0(6);
    }
    func_00901C00(0);
    func_00901C00(1);
    temp_v1 = (*(s32 *)D_0092F0D0) | 0x10;
    (*(s32 *)D_0092F0D0) = temp_v1;
    if (!(temp_v1 & 0x800)) {
        if (!(temp_v1 & 0x20000)) {
            var_v0 = 6;
        } else {
            var_v0 = 9;
        }
    } else if (!(temp_v1 & 0x20000)) {
        var_v0 = 5;
    } else {
        var_v0 = 8;
    }
    func_0090A410(var_v0 & 0xFF, 0xFF, -1, (f32) (*(s16 *)D_0092F0FA));
    var_s2 = 0;
    do {
        var_s1 = 0;
loop_15:
        temp_v0 = func_009177C0((var_s1 & 0xFF) + ((var_s2 & 0xFF) * 0xB));
        if (temp_v0 != NULL) {
            temp_v0_2 = M2C_FIELD(temp_v0, s32 **, 4);
            if (temp_v0_2 != NULL) {
                temp_a0 = *temp_v0_2;
                if (temp_a0 != 0) {
                    func_001AAF50(temp_a0, 0);
                    func_001AAF40(*M2C_FIELD(temp_v0, s32 **, 4), 1);
                }
            }
        }
        var_s1 = (var_s1 + 1) & 0xFF;
        if (var_s1 < 0xB) {
            goto loop_15;
        }
        var_s2 = (var_s2 + 1) & 0xFF;
    } while (var_s2 < 2);
    return 1;
}
