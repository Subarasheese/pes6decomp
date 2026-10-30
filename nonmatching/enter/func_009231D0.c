/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern float func_002955F0(void);
M2C_UNK sprintf(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern char D_0092EC60[];
extern char D_0092F658[];
extern char D_0092F660[];

M2C_UNK *func_009231D0(M2C_UNK *arg0) {
    f32 temp_f1_2;
    s32 temp_f1;
    s32 var_a2;

    temp_f1 = (s32) func_002955F0();
    var_a2 = temp_f1;
    temp_f1_2 = (f32) temp_f1;
    if (!(temp_f1_2 < -999.0f)) {
        if (!(temp_f1_2 <= 999.0f)) {
            var_a2 = 0x3E7;
        }
    } else {
        var_a2 = -0x3E7;
    }
    sprintf(((void *)D_0092F658), ((void *)D_0092EC60), (M2C_UNK *) var_a2);
    sprintf(((void *)D_0092F660), arg0, ((void *)D_0092F658));
    return ((void *)D_0092F660);
}
