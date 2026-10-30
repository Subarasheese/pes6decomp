/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
extern char D_008B20C0[];
extern char D_008B218C[];
extern char D_008B2190[];
extern char D_008B2194[];
extern char D_008B2196[];
extern char D_008B2198[];
extern char D_008B219C[];
extern char D_008B219E[];
extern char D_008B21A2[];

s32 func_00857580(void) {
    s32 var_s0;
    void *temp_a0;

    var_s0 = 0;
    do {
        temp_a0 = ((void *)D_008B20C0) + (var_s0 * 0x10);
        if (M2C_FIELD(temp_a0, s32 *, 0xC) == ((void *)D_008B218C)) {
            func_001C48E8(temp_a0, 0, 0x10);
        }
        var_s0 += 1;
    } while (var_s0 < 0xA);
    (*(s16 *)D_008B21A2) = 0;
    (*(s16 *)D_008B219E) = 0;
    (*(s32 *)D_008B218C) = 0;
    (*(s16 *)D_008B2194) = 0;
    (*(s32 *)D_008B2190) = 0;
    (*(s16 *)D_008B2196) = 0;
    (*(s32 *)D_008B2198) = 0;
    (*(s16 *)D_008B219C) = 0;
    return 0;
}
