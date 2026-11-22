/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void *func_001D61A0(s32, s32, s32);
extern void *func_001D6440(s32);
extern void func_001D64B0(s32, s32, s32, s32);
extern void func_001D6600(void *);
extern s32 func_001D7F80(s32);

void *func_001D6640(s32 arg0, s32 arg1, s32 arg2) {
    void *entry;
    void *entry2;

    if (!((arg0 != 0) && (arg1 != 0))) {
        return NULL;
    }
    entry2 = func_001D61A0(arg0, 2, arg2);
    if (entry2 != NULL) {
        entry = func_001D6440(arg0);
        M2C_FIELD(entry, s32 *, 0) = 2;
        M2C_FIELD(entry, s32 *, 4) = arg2;
        M2C_FIELD(entry, void **, 8) = entry2;
        M2C_FIELD(entry, s32 *, 0xC) = func_001D7F80(arg1);
        M2C_FIELD(entry, void (**)(s32, s32, s32, s32), 0x14) = func_001D64B0;
        M2C_FIELD(entry, void (**)(void *), 0x18) = func_001D6600;
        return entry;
    }
    return NULL;
}
