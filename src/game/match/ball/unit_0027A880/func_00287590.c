/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_001A58F0(void *, int);
void func_00287590(u8 *arg0, s32 arg1) {
    u8 *temp_s1;
    u8 *temp_s0;

    temp_s1 = *(u8 **)(arg0 + 4);
    temp_s0 = *(u8 **)temp_s1;
    func_001A58F0(temp_s0, arg1);
    if (temp_s1[0x2C] == 0) return;
    if (temp_s0[1] == 0) { temp_s0[1] = 1; }
}
