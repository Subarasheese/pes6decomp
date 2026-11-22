/* compiler: ee-gcc-3.2-Os-G0 */
#include "types.h"
extern const char D_00C4F640[]; /* *** enter sceNetGlueHErrnoLoc %d ***\n */
extern void func_00C2B440(const char *format, ...);
extern s32 D_00C47524;
s32 *func_00C04420(void) {
    func_00C2B440(D_00C4F640, D_00C47524);
    return &D_00C47524;
}
