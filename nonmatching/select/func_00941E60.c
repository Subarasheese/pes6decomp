/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A55F0(float, float, float);
extern void func_001A5520(float, float, float);
extern void func_001A5670(f32);
M2C_UNK func_001A5750();                            /* extern */

void func_00941E60(void) {
    func_001A5750();
    func_001A55F0(0.0f, 20.0f, 3000.0f);
    func_001A5520(0.0f, 0.0f, 0.0f);
    func_001A5670(1430.0f);
}
