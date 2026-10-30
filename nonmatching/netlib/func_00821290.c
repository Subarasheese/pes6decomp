/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
M2C_UNK func_0099BC80(M2C_UNK);                     /* extern */
extern void *D_008A4338;
extern void *D_008A4340;
extern void *D_008A4348;

s32 func_00821290(void) {
    if (D_008A4338 != NULL) {
        func_001D7F10(D_008A4338);
        D_008A4338 = NULL;
    }
    if (D_008A4340 != NULL) {
        func_001D7F10(D_008A4340);
        D_008A4340 = NULL;
    }
    if (D_008A4348 != NULL) {
        func_001D7F10(D_008A4348);
        D_008A4348 = NULL;
    }
    func_0099BC80(0x103A0);
    return 1;
}
