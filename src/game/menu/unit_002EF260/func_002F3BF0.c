/* compiler: mwcc-3.0.1b210 */
#include "types.h"
void func_002EFC70(void *arg0);
void func_002F3BF0(u8 *arg0) {
    if (arg0 != 0) {
        func_002EFC70(arg0 + 0xC);
        arg0[1] = 1;
    }
}
