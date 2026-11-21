/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *func_00228960(void);
s32 func_001C48E8(void *, s32, s32);
s32 func_001C7F58(void *, void *);
extern void func_00957990(void);
void *func_0096DB90(s32);
extern void *D_003EAE34;

void func_00B2FDB0(void) {
    s8 *entry;
    s8 *entry2;
    s8 *entry3;

    if (D_003EAE34 == NULL) {
        func_00957990();
        if (D_003EAE34 == NULL) {
            entry2 = func_0096DB90(0x58);
            D_003EAE34 = entry2;
            func_001C48E8(entry2, 0, 0x58);
        }
        entry = D_003EAE34;
        if (entry != NULL) {
            entry3 = func_00228960();
            M2C_FIELD(entry, void **, 0) = entry3;
            func_001C7F58(entry + 0x20, entry3);
            M2C_FIELD(entry, s32 *, 0x50) =
                (s32)M2C_FIELD(M2C_FIELD(entry, void **, 0), s32 *, 0x30);
            M2C_FIELD(entry, s32 *, 0x54) = 0;
        }
    }
}
