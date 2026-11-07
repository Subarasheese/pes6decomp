/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"
void func_001045C8();
void func_00104618();
extern s32 D_00602154;
void func_00103998(s32 arg0) {
    D_00602154 = arg0;
    func_001045C8();
    if (D_00602154) {
        func_00104618();
    }
}
