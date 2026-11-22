/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 D_003E7B17;
extern void func_001EEDA0(u8 *, u8);

void func_00972CC0(u8 *arg0) {
    func_001EEDA0(arg0, ((D_003E7B17 + 0x33) & 0xFF));
}
