/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_001EDC80(s32, s32);
void *func_002F96F0(s32, s32);
s32 func_002F9F20(s32, s32, s32, void *, s32, s32);
s32 func_0035F400(s32, s32, s32 *);
extern s32 D_003EA5D4;
extern u8 *D_003EA5D8[2];
extern char D_0092A4C0[];

void func_00921B40(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 value;
    s32 value2;
    void *entry;
    void *entry2;

    entry = D_003EA5D8[D_003EA5D4];
    value = M2C_FIELD(entry, s32 *, 0x60);
    func_002F9F20(arg0, value, 0, func_002F96F0(M2C_FIELD(entry, s32 *, 0), 0), arg2, arg3);
    value2 = 0;
    entry2 = func_002F96F0(M2C_FIELD(D_003EA5D8[D_003EA5D4], s32 *, 4), 0);
    if (entry2 != NULL) {
        value2 = M2C_FIELD(entry2, s32 *, 0xC);
    }
    func_0035F400(func_001EDC80(value2, arg1), value, ((void *)D_0092A4C0));
}
