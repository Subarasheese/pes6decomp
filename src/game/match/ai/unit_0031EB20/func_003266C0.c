/* compiler: mwcc-3.0.1b210 */
#include "types.h"

int func_003266C0(int *arg0, int *arg1, int arg2) {
    int value;

    if (arg2 == 0xff) {
        *arg0 = 0;
        value = 0;
    } else {
        if ((*arg1 == 0xb) || (*arg1 == 0x11)) {
            *arg0 = arg1[arg2 + 0x239];
        } else {
            *arg0 = arg1[arg2 * 0xf + 0x21];
        }
        value = 1;
    }
    return value;
}
