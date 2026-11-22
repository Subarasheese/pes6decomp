/* compiler: ee-gcc-3.2-Os-G0 */
#include "types.h"
extern const char D_00C4F618[]; /* *** enter sceNetGlueErrnoLoc %d ***\n */
extern void func_00C2B440(const char *format, ...);
extern s32 D_00C47520;
s32 *func_00C043E8(void) {
    func_00C2B440(D_00C4F618, D_00C47520);
    return &D_00C47520;
}
