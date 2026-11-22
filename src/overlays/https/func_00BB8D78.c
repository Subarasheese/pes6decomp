/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern void func_00BB9048(s32, s32);
extern s32 func_00BB9248(void);

void func_00BB8D78(s32 arg0) {
    func_00BB9048(arg0, func_00BB9248());
}
