/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00C8B210();                                /* extern */
extern char D_00CB5110[];
extern char D_00CCD8A0[];
typedef struct { u8 a:2; u8 b:1; u8 c:5; } BF;
extern BF D_00CCD8AC[];

void func_00C90B10(void) {
    u32 var_s1;
    u8 *var_s0;
    s32 temp_a0;
    s32 temp_v0;

    temp_v0 = func_00C8B210();
    if (D_00CCD8AC[0].b != temp_v0) {
        D_00CCD8AC[0].b = temp_v0;
        (*(s32 *)D_00CCD8A0) |= 1;
    }
    var_s1 = 0;
    var_s0 = ((void *)D_00CB5110);
    do {
        temp_a0 = 1 << M2C_FIELD(var_s0, s32 *, 0);
        if ((*(s32 *)D_00CCD8A0) & temp_a0) {
            M2C_FIELD(var_s0, M2C_UNK (**)(s32, M2C_UNK), 4)(temp_a0, 1);
        }
        var_s1 += 1;
        var_s0 += 8;
    } while (var_s1 < 5U);
    (*(s32 *)D_00CCD8A0) = 0;
}
