/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *func_002E3370(void *group, s32 index);
extern void func_002E3A40(void *object, u16 value);
extern void func_002E3660(void *object, u8 flag);

void func_00B92D20(void *group, s32 index, s32 value, u8 flag) {
    void *object = func_002E3370(group, index);
    func_002E3A40(object, (u16)value);
    func_002E3660(object, flag);
}
