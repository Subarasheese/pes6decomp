/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_0053C320[];
void func_008B31E0(s32, s32);
void func_008B31C0(s32, s32);

void func_0023B410(s32 index) {
    s32 *handle = &D_0053C320[index];

    func_008B31E0(*handle, 14);
    func_008B31C0(*handle, 0);
}
