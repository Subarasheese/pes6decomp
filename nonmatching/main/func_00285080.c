/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK Pes6Ball_IntegratePhysics(M2C_UNK, s32, s32, s32, s32, s32, s32, s32, f32, s64, s64, s64, s64); /* extern */
extern f32 *D_003E74CC;
extern s32 Pes6Ball_Current;

void func_00285080(s32 arg0) {
    s32 var_a0;

    var_a0 = arg0;
    if (var_a0 == 0) {
        var_a0 = 1;
    }
    Pes6Ball_IntegratePhysics(1, Pes6Ball_Current + 0x144F, Pes6Ball_Current + 0x1444, Pes6Ball_Current + 0x1448, Pes6Ball_Current + 0x1454, Pes6Ball_Current + 0x1458, Pes6Ball_Current + 0x145C, Pes6Ball_Current + 0x1450, (f32) var_a0 * *D_003E74CC, Pes6Ball_Current + 0x1440, Pes6Ball_Current + 0x144C, Pes6Ball_Current + 0x144E, 0);
}
