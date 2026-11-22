/* compiler: ee-gcc-2.96-G0 */
#include "types.h"

extern s8 *func_00172FE8(void);
extern s8 D_003CB520[];
extern s8 D_003CB550[];
extern s8 D_003CB578[];
extern void func_00172E10(void *, void *);
extern void func_00173060(void *);

s32 func_001735B0(s32 arg0, s32 arg1, s32 arg2) {
    s8 *value1;
    if (!((arg0 > 0))) {
        func_00172E10(0, D_003CB520);
        return 0;
    } else {
        if (arg2 != 0) {
            func_00172E10(0, D_003CB550);
            return 0;
        } else {
            value1 = func_00172FE8();
            if (value1 == 0) {
                func_00172E10(0, D_003CB578);
                return 0;
            } else {
                func_00173060(value1);
                return value1;
            }
        }
    }
}
