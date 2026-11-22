/* compiler: ee-gcc-3.2-Os-G0 */
#include "types.h"
extern const char D_00C4ED58[]; /* %d.%d.%d.%d */
extern const char D_00C4EE30[]; /* *** enter sceNetGlueInetNtoa in.s_addr = %x ***\n */
extern void func_00C2B440(const char *format, ...);
extern int sprintf(char *, const char *, ...);
extern char D_00CD9B30[];
char *func_00C03280(u32 address) {
    func_00C2B440(D_00C4EE30, address);
    sprintf(D_00CD9B30, D_00C4ED58, address >> 24, (address >> 16) & 255, (address & 0xff00) >> 8,
            address & 255);
    return D_00CD9B30;
}
