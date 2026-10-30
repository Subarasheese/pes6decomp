/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00295930();                            /* extern */
M2C_UNK func_00296E00(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_005A24C0[];
extern char D_005A2520[];
extern char D_00929300[];
extern char D_00929320[];
extern char D_00929340[];
extern char D_00929360[];
extern char D_0092F028[];

void func_009099F0(void) {
    if ((*(u32 *)D_0092F028) != 0) {
        if ((u32) (*(u32 *)D_0092F028) >= 6U) {
            if ((u32) (*(u32 *)D_0092F028) >= 0xAU) {
                if ((u32) (*(u32 *)D_0092F028) < 0x1EU) {
                    if ((u32) ((*(u32 *)D_0092F028) - 0x1A) < 2U) {
                        func_00296E00(((void *)D_005A24C0), ((void *)D_00929360), 0, 0);
                    } else {
                        func_00296E00(((void *)D_005A24C0), ((void *)D_00929340), 0, 0);
                    }
                    func_00296E00(((void *)D_005A2520), ((void *)D_00929320), 0, 0);
                    return;
                }
                func_00295930();
            }
        } else {
            func_00296E00(((void *)D_005A24C0), ((void *)D_00929300), 0, 0);
            func_00296E00(((void *)D_005A2520), ((void *)D_00929300), 0, 0);
        }
    }
}
