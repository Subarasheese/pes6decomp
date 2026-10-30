/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A5670(f32);
extern void func_001A55F0(float, float, float);
extern void func_001A5520(float, float, float);
M2C_UNK func_001A56D0(M2C_UNK, M2C_UNK);            /* extern */

void func_00272650(void) {
    func_001A56D0(0x42480000, 0x467A0000);
    func_001A5670(1430.0f);
    func_001A55F0(0.0f, -10000.0f, 5000.0f);
    func_001A5520(0.0f, 0.0f, 0.0f);
}
