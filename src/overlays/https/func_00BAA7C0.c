/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void *func_001C4730(void *, void *, u32);
extern u32 func_001C80F0(s8 *);
extern void func_00BB3380(s32, s32, s32, s32, s32);

void *func_00BC0A38(u32);

s32 func_00BAA7C0(s32 arg0) {
    u32 temp_s2;
    void *temp_v0;

    if (arg0 == 0) {
        return 0;
    }
    temp_s2 = func_001C80F0((s8 *)arg0) + 1;
    temp_v0 = func_00BC0A38(temp_s2);
    if (temp_v0 == NULL) {
        func_00BB3380(7, 0x66, 0x21, 0, 0);
        return 0;
    }
    func_001C4730(temp_v0, (void *)arg0, temp_s2);
    return (s32)temp_v0;
}
