/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_002DF8E0(u8 *, s32);

void func_009ECCD0(s8 *arg0, s32 arg1) {
    func_002DF8E0(*(u8 * *)((s8 *)(arg0) + 0x2C), (arg1 & 0xFF));
}
