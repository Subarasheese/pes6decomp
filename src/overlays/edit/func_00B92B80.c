/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *func_002E3370(void *group, s32 index);
extern void func_002E36D0(void *object, u8 value);

void func_00B92B80(void *group, s32 index, u8 value) {
    void *object = func_002E3370(group, index);
    func_002E36D0(object, value);
}
