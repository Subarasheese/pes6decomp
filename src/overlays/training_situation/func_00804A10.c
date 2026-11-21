/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 D_003E7E1C;
extern s32 D_008168E0[];
extern s32 func_00CE3F00(s32);
extern void func_00CE41E0(void);

void func_00804A10(void) {
    D_008168E0[0] = 0;
    func_00CE3F00((D_003E7E1C + 8));
    func_00CE41E0();
}
