/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_002D4BE0(int);
extern void func_00305E60(void *, void *);
s32 func_00BD99D0();
extern void func_002FEC10(void);

s32 func_002FEB50(void *arg0) {
    s32 temp_v1;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x18);
    if (func_00BD99D0() != 0) {
        return 0;
    }
    temp_v1 = M2C_FIELD(temp_s0, s32 *, 0x18);
    if (temp_v1 == 3) {
        func_002D4BE0(5);
    } else if (temp_v1 == 2) {
        func_002D4BE0(0x1B);
        func_002D4BE0(5);
    } else if (temp_v1 == 1) {
        func_002D4BE0(0x25);
    } else {
        return 0;
    }
    func_00305E60(arg0, (void *) func_002FEC10);
    return 1;
}
