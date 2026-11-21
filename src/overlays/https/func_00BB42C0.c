/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void func_00BB4300(s32 *);
extern void func_00BC0A88(void *);

void func_00BB42C0(void *arg0) {
    void *temp_a0;

    func_00BB4300(arg0);
    temp_a0 = M2C_FIELD(arg0, void **, 0x78);
    if (temp_a0 != NULL) {
        func_00BC0A88(temp_a0);
    }
    func_00BC0A88(arg0);
}
