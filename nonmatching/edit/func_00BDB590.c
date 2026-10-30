/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C4698(void *, void *, M2C_UNK);         /* extern */
s32 func_001C7E10(void *, void *);                  /* extern */
M2C_UNK func_00C1B380(M2C_UNK);                     /* extern */
extern void *D_003E7DC0;

void func_00BDB590(void) {
    u16 temp_v1;
    void *temp_s0;
    void *temp_s1;

    temp_s1 = M2C_FIELD(D_003E7DC0, void **, 0x70);
    temp_s0 = D_003E7DC0 + 0x78;
    temp_v1 = M2C_FIELD(D_003E7DC0, u16 *, 0xFA);
    if (((s32) temp_v1 >= 0x8000) && ((s32) temp_v1 < 0x80B8)) {
        if (func_001C4698(temp_s1, temp_s0, 0x2E) != 0) {
            func_00C1B380(8);
        }
        if (func_001C7E10(temp_s1 + 0x20, temp_s0 + 0x20) != 0) {
            func_00C1B380(8);
        }
        if (M2C_FIELD(temp_s1, u16 *, 0x30) != M2C_FIELD(temp_s0, u16 *, 0x30)) {
            func_00C1B380(8);
        }
        if (func_001C4698(temp_s1 + 0x34, temp_s0 + 0x34, 0x48) != 0) {
            func_00C1B380(8);
        }
    } else {
        if (func_001C4698(temp_s1, temp_s0, 0x2E) != 0) {
            func_00C1B380(0);
        }
        if (func_001C7E10(temp_s1 + 0x20, temp_s0 + 0x20) != 0) {
            func_00C1B380(1);
        }
        if (M2C_FIELD(temp_s1, u16 *, 0x30) != M2C_FIELD(temp_s0, u16 *, 0x30)) {
            func_00C1B380(2);
        }
        if (func_001C4698(temp_s1 + 0x34, temp_s0 + 0x34, 0x48) != 0) {
            func_00C1B380(5);
        }
    }
}
