/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *func_001C48E8(void *, int, unsigned int);
s32 func_00BCC510(s32);
extern char D_00CE4F40[];

void func_00BC8C70(s32 arg0) {
    char *temp_s0;

    temp_s0 = ((char *)D_00CE4F40) + (arg0 * 0xC0);
    func_00BCC510(M2C_FIELD(temp_s0, s32 *, 4));
    func_001C48E8(temp_s0 + 0x14, 0, 0x14);
}
