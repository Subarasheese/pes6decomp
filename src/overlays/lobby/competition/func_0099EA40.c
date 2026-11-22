/* compiler: mwcc-3.0.1b210 */
#include "types.h"

int func_0099EA40(void *arg0) {
    int value;

    if (arg0 == 0) {
        value = -1;
        return value;
    }
    if (*(int *)arg0 == 0) {
        value = -1;
    } else {
        value = *(int *)((int)arg0 + 0x34);
    }
    return value;
}
