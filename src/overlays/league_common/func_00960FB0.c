/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_001BC2B0(void);
extern void func_001BC350(void);
extern s32 D_003EA8FC;

void func_00960FB0(void) {
    s32 temp_v1;

    if (D_003EA8FC != 0) {
        do {
            func_001BC350();
            func_001BC2B0();
            temp_v1 = D_003EA8FC - 1;
            D_003EA8FC = temp_v1;
        } while (temp_v1 != 0);
    }
}
