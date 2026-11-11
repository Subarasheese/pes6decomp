/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern int func_0030F240(void *);
extern int Pes6Job_SetField4(void *, void *, void *);
extern int func_00333600(int);
extern int func_0030F380(void);
M2C_UNK func_00313720(s32, s32, u8);                /* extern */
extern char func_00313100[];
extern char D_003E1500[];

s32 func_00313880(void *arg0) {
    u8 sp2F;

    if (func_0030F240(&sp2F) != 0) {
        if (func_00333600(4) != 0) {
            return 0;
        }
        if (func_0030F380() == 0) {
            func_00313720(M2C_FIELD(arg0, s32 *, 0x3C), M2C_FIELD(arg0, s32 *, 0x44), sp2F);
            Pes6Job_SetField4(arg0, func_00313100, D_003E1500);
            return 1;
        }
        return 0;
    }
    return 0;
}
