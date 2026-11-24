/* compiler: mwcc-3.0.1b210 */

#include "types.h"
typedef void (*HighlightHandler)(void);
extern void func_00BC71B0(void);
extern void func_00BC6E90(void);
extern void func_00BC6C80(void);
extern void func_00BCD6F0(s32, HighlightHandler);

void func_00BC6C30(void) {
    func_00BCD6F0(0, func_00BC71B0);
    func_00BCD6F0(2, func_00BC6E90);
    func_00BCD6F0(3, func_00BC6C80);
}
