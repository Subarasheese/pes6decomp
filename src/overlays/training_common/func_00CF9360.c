/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6Ball_SetVisible(int);
extern void Pes6World_SetActive(int);
M2C_UNK func_00287000();                            /* extern */
extern void *Pes6Ball_Current;

void func_00CF9360(void) {
    M2C_FIELD(Pes6Ball_Current, u8 *, 0xC) = 1U;
    Pes6Ball_SetVisible((s32) M2C_FIELD(Pes6Ball_Current, u8 *, 0xC));
    func_00287000();
    Pes6World_SetActive(1);
}
