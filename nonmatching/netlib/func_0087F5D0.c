/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_002DCA40();                                /* extern */
s64 func_00858B60(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK func_0085E440(s64, M2C_UNK);                /* extern */
s32 func_0085E4C0(s64);                             /* extern */
s32 func_0085EF20(M2C_UNK);                         /* extern */
M2C_UNK func_0085EF40();                            /* extern */
M2C_UNK func_0085F190();                            /* extern */
s32 func_0087F400();                                /* extern */
extern char D_003AE970[];
extern char D_0058D7A2[];
extern char D_0058D7C8[];
extern char D_0058D804[];
extern char D_0058D805[];
extern char D_0058D806[];
extern char D_008B21C0[];

void func_0087F5D0(s8 arg0) {
    M2C_UNK *var_s1;
    s32 temp_v0;
    s32 var_s0;
    s64 var_s2;

    if (((*(s8 *)D_003AE970) == 0xB) && (((*(s8 *)D_0058D804) = arg0, (*(s8 *)D_0058D805) = 6, (*(s8 *)D_0058D806) = 0xF, temp_v0 = func_0085EF20(0xB), (temp_v0 == 7)) || (temp_v0 == 0xC))) {
        switch (arg0) {                             /* irregular */
        case 1:
            func_0085F190();
            if (func_002DCA40() != 0) {
                var_s0 = func_0087F400() & 0xFF;
                if (var_s0 < (*(s8 *)D_0058D7C8)) {
                    var_s0 = (*(s8 *)D_0058D7C8) & 0xFF;
                }
                var_s2 = 2;
                if ((((s64) (func_00858B60(((void *)D_008B21C0), 1) << 0x38) >> 0x38) + 1) >= 3) {
                    var_s1 = ((void *)D_0058D7A2);
                    do {
                        if ((func_0085E4C0((s64) (var_s2 << 0x30) >> 0x30) == 3) && (M2C_FIELD(var_s1, s8 *, 0x4B) < (var_s0 & 0xFF))) {
                            func_0085E440((s64) (var_s2 << 0x30) >> 0x30, 0);
                        }
                        var_s1 += 1;
                        var_s2 += 1;
                    } while (var_s2 < (((s64) (func_00858B60(((void *)D_008B21C0), 1) << 0x38) >> 0x38) + 1));
                    return;
                }
            }
            break;
        case 2:
            func_0085EF40();
            break;
        }
    }
}
