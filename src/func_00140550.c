/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 D_004FDC00[];
extern s32 D_004FDC04[];
void func_00140590(void);

void func_00140550(s32 value) {
    D_004FDC00[0] = value;
    if (D_004FDC04[0] == 0) {
        func_00140590();
    }
}
