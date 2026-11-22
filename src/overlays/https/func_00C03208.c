/* compiler: ee-gcc-3.2-Os-G0 */
#include "types.h"
extern const char D_00C4EDB8[]; /* *** enter sceNetGlueInetAton ***\n */
extern const char D_00C4EDE0[]; /* *** out sceNetGlueInetAton(0) ***\n */
extern const char D_00C4EE08[]; /* *** out sceNetGlueInetAton(1) ***\n */
extern void func_00C2B440(const char *format, ...);
extern u32 func_00C03108(const char *text);
int func_00C03208(const char *text, u32 *address) {
    func_00C2B440(D_00C4EDB8);
    *address = func_00C03108(text);
    if (*address == 0xffffffffU) {
        func_00C2B440(D_00C4EDE0);
        return 0;
    }
    func_00C2B440(D_00C4EE08);
    return 1;
}
