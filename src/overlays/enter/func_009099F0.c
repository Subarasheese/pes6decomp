/* compiler: mwcc-3.0.1b198 */
#include "types.h"

extern s32 func_00296E00(s32 *, s32 *, s32, s32);
extern void func_00295930(void);
extern char D_005A24C0[];
extern char D_00929300[];
extern char D_005A2520[];
extern char D_00929360[];
extern char D_00929340[];
extern char D_00929320[];
extern u32 D_0092F028[];

void func_009099F0(void) {
    if (D_0092F028[0] != 0) {
        if (D_0092F028[0] < 6) {
            func_00296E00((int *)D_005A24C0, (int *)D_00929300, 0, 0);
            func_00296E00((int *)D_005A2520, (int *)D_00929300, 0, 0);
        } else if (9 < D_0092F028[0]) {
            if (D_0092F028[0] < 0x1e) {
                if (D_0092F028[0] - 0x1a < 2) {
                    func_00296E00((int *)D_005A24C0, (int *)D_00929360, 0, 0);
                } else {
                    func_00296E00((int *)D_005A24C0, (int *)D_00929340, 0, 0);
                }
                func_00296E00((int *)D_005A2520, (int *)D_00929320, 0, 0);
            } else {
                func_00295930();
            }
        }
    }
}
