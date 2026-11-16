/* compiler: mwcc-3.0.1b210 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

extern void func_001A5670(f32);
extern void func_001A55F0(f32, f32, f32);
extern void func_001A5520(f32, f32, f32);
extern void func_001A56D0(s32, s32, f32, f32);

void func_00272650(s32 arg0, s32 arg1) {
    func_001A56D0(arg0, arg1, 50.0f, 16000.0f);
    func_001A5670(1430.0f);
    func_001A55F0(0.0f, -10000.0f, 5000.0f);
    func_001A5520(0.0f, 0.0f, 0.0f);
}
