/* compiler: mwcc-3.0.1b210 */
#include "types.h"
u16 *func_00223420(int arg0, int arg1);
void func_00222E80(int arg0, int arg1, u16 arg2) {
    u16 *p = func_00223420(arg0, arg1);
    if (p != 0) {
        *p = arg2;
    }
}
