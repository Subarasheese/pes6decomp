/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

s32 func_00136FD8(s32, s32);
extern void func_00154510(void);
s32 func_001566A8(void *);
s32 func_001B02B0(s32 *, s32 *);
extern char D_005B57E8[];
extern char D_005BD348[];
extern char D_005BEB80[];

void func_00144080(void) {
    void *temp_s0;

    if ((*(s32 *)D_005BD348) == 0) {
        func_00154510();
        func_001B02B0(((void *)D_005B57E8), ((void *)D_005BEB80));
        temp_s0 = ((void *)D_005BEB80) - 0x1100;
        M2C_FIELD(temp_s0, s8 *, 0x1310) = 1;
        func_00136FD8(5, 0xF);
        func_001566A8(temp_s0);
    }
}
