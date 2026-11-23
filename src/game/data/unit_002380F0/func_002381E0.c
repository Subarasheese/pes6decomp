/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 *func_002293F0(void);
extern s32 Pes6SaveData_IsUnavailable(void);

void func_002381E0(u8 count) {
    u8 *slots = func_002293F0();
    s32 i;
    if (Pes6SaveData_IsUnavailable() == 1)
        return;
    if (!slots)
        return;
    if (count >= 113)
        return;
    for (i = 0; i < 113; i++)
        slots[i] = 0xff;
    for (i = 0; i < count; i++)
        slots[i] = i;
}
