/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"
void func_008FBCF8(void *a, s32 b, s32 c, s32 d) {  void *t = M2C_FIELD(a, void **, 0x40);
M2C_FIELD(t, s32 *, 0xA8) = b;
M2C_FIELD(t, s32 *, 0xAC) = c;
M2C_FIELD(t, s32 *, 0xB0) = d;
}
