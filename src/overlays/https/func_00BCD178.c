/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_00BA8FA8(void);
extern s32 func_00BAB748(void);
M2C_UNK func_00BC0DC8(s32);
s32 func_00BC5F68(M2C_UNK);
extern void func_00BCD1C8(void);
extern s32 func_00BCF2A0(void);
extern void func_00BDB660(void);

s32 func_00BCD178(void) {
    func_00BCF2A0();
    func_00BCD1C8();
    func_00BAB748();
    func_00BA8FA8();
    func_00BC0DC8(func_00BC5F68(0));
    func_00BDB660();
    return 1;
}
