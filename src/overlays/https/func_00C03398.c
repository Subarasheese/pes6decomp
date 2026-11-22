/* compiler: ee-gcc-3.2-Os-G0 */
#include "types.h"
extern const char D_00C4EEE8[]; /* *** sceNetGlueNtohl ***\n */
extern void func_00C2B440(const char *format, ...);
extern u32 func_00C032F0(u32 value);
u32 func_00C03398(u32 networkWord) {
    func_00C2B440(D_00C4EEE8);
    return func_00C032F0(networkWord);
}
