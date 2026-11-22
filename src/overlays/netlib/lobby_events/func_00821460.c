/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_001D7F10(s32);
extern void func_002DC760(void);
extern s32 D_008A4350[];
extern s32 D_008A4358[];
extern s32 D_008A4360[];

void func_00821460(void) {
    func_002DC760();
    if (D_008A4350[0] != 0) {
        func_001D7F10(D_008A4350[0]);
        D_008A4350[0] = 0;
    }
    if (D_008A4358[0] != 0) {
        func_001D7F10(D_008A4358[0]);
        D_008A4358[0] = 0;
    }
    if (D_008A4360[0] != 0) {
        func_001D7F10(D_008A4360[0]);
        D_008A4360[0] = 0;
    }
}
