/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_002ADC20(M2C_UNK *, u8, s32, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern char D_005E30E1[];
extern char D_005E327C[];
extern char D_005E3280[];
extern char D_005E3290[];
extern char D_005E32AD[];

s32 func_002BAB50(void *arg0) {
    func_002ADC20(((void *)D_005E30E1), M2C_FIELD(arg0, u8 *, 4), ~((*(s32 *)D_005E3280) | (*(s32 *)D_005E327C)), ((void *)D_005E3290), ((void *)D_005E32AD), 0x1D);
    return 0;
}
