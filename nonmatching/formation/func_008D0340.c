/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F3CA0(void *);
extern void func_001F22B0(void *);
M2C_UNK func_008CFFA0(void *, void *, u8);          /* extern */
M2C_UNK func_008D0150(void *, u8);                  /* extern */

void func_008D0340(void *arg0) {
    func_001F3CA0(M2C_FIELD(arg0, void **, 0x48));
    M2C_FIELD(arg0, s32 *, 0x190) = 0;
    func_008CFFA0(arg0, M2C_FIELD(arg0, void **, 0x48), M2C_FIELD(arg0, u8 *, 9));
    func_001F22B0(M2C_FIELD(arg0, void **, 0x1D0));
    M2C_FIELD(arg0, void **, 0x1D0) = NULL;
    if (M2C_FIELD(arg0, u8 *, 9) == 3) {
        func_008D0150(arg0, M2C_FIELD(arg0, u8 *, 2));
    }
}
