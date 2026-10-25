/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_00153C90(void);
void func_00153C40(f32);
void func_00153A20(void);
void func_00120D90(void (*)(void), s32);
void func_00153710(void);

void func_002FA9E0(f32 volume) {
    func_00153C90();
    func_00153C40(volume);
    func_00153A20();
    func_00120D90(func_00153710, 0x1C);
}
