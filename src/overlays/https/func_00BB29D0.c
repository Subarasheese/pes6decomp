/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void *func_001C4730(void *, void *, u32);
extern s32 func_00BB4690(void *);
extern void func_00BC5EC0(void *, s32, s32);

void func_00BB29D0(s32 arg0, s32 arg1) {
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 0x78);
    if (arg1 != 0) {
        func_001C4730(temp_s1, (void *)arg1, func_00BB4690((void *)arg0));
    }
    func_00BC5EC0(temp_s1 + 0x10, func_00BB4690((void *)arg0), (s32)temp_s1);
}
