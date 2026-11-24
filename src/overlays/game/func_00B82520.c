/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern s32 (*D_005924AC[])(void);
extern u8 Pes6MatchFlow_GetState(s32);
extern s32 func_00154080(s32);
extern void func_001A5BE0(s32), func_002CBAF0(s32), func_009E1CB0(s32), Pes6HeapZone_Close(s32),
    func_00BF6240(s32);
void func_00B82520(void) {
    if (!D_005924AC[0]) {
        func_00BF6240(1);
    } else {
        switch (Pes6MatchFlow_GetState(3)) {
        case 0:
            func_001A5BE0(5);
            func_002CBAF0(11);
            func_009E1CB0(3);
            break;
        case 1:
            if (D_005924AC[0]() == 1)
                func_009E1CB0(3);
            break;
        case 2:
            if (!func_00154080(11)) {
                Pes6HeapZone_Close(11);
                func_00BF6240(1);
            }
            break;
        }
    }
}
