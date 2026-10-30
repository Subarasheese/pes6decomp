/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void *D_003E7878;

void func_00826E60(void) {
    func_001D7D60(M2C_FIELD(D_003E7878, void **, 4), 0);
    func_001D7D60(M2C_FIELD(D_003E7878, void **, 8), 0);
    func_001D7D60(M2C_FIELD(D_003E7878, void **, 0xC), 0);
    func_001D7D60(M2C_FIELD(D_003E7878, void **, 0x10), 0);
    func_001D7D60(M2C_FIELD(D_003E7878, void **, 0x18), 0);
    func_001D7D60(M2C_FIELD(D_003E7878, void **, 0x14), 0);
    func_001D7D60(M2C_FIELD(D_003E7878, void **, 0x1C), 0);
}
