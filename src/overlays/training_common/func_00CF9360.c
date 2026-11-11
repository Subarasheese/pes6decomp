/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6Ball_SetByte0(int);
extern void func_0017E120(int);
M2C_UNK func_00287000();                            /* extern */
extern void *Pes6Ball_Current;

void func_00CF9360(void) {
    M2C_FIELD(Pes6Ball_Current, u8 *, 0xC) = 1U;
    Pes6Ball_SetByte0((s32) M2C_FIELD(Pes6Ball_Current, u8 *, 0xC));
    func_00287000();
    func_0017E120(1);
}
