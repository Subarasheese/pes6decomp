/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void *func_002211C0(void);
extern char D_00591BCE[];

void func_002625F0(s32 value) {
    M2C_FIELD(func_002211C0(), u8 *, 3) = (u8) (value & 0xFF);
    (*(s8 *)D_00591BCE) = value;
}
