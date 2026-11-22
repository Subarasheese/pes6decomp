/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_009A60C0(s32);
extern void *D_003EA998;
extern char D_00AE1000[];

void func_009A6030(s32 arg0) {
    s32 value;
    s8 *entry;
    s8 *entry2;
    s8 *entry3;

    entry3 = D_003EA998;
    if (entry3 == NULL) {
        return;
    }
    func_009A60C0(arg0);
    entry2 = M2C_FIELD(entry3, void **, 4);
    value = 0;
    entry = ((s8 *)D_00AE1000) + (arg0 * 0x28);
    do {
        M2C_FIELD(entry, s32 *, 4) = (s32)M2C_FIELD(entry3, s32 *, 0x10);
        if (entry2 != NULL) {
            M2C_FIELD(entry, s8 *, 0) = (s8)M2C_FIELD(entry2, s32 *, 0x14);
            entry2 = M2C_FIELD(entry2, void **, 4);
        } else {
            M2C_FIELD(entry, s8 *, 0) = 0;
        }
        value += 1;
        entry3 += 4;
        entry += 8;
    } while (value < 5);
}
