/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/m2c.h"

void func_0012D598(s32);
void func_00154538(void);
extern s32 D_005B3744;
extern void (*D_011D4C94)(s32);

void func_0012C550(s32 arg0, s64 arg1) {
    s32 v = arg1;

    D_005B3744 = arg0;
    func_0012D598(v);
    func_00154538();
    if (D_011D4C94 != NULL) {
        if (arg0 != 0) {
            D_011D4C94(v);
        } else {
            D_011D4C94(-1);
        }
    }
}
