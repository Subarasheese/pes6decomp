/* compiler: ee-gcc-2.9-Os-G0 */
#include "types.h"
void func_0016A128(void **objects, s32 count) {
    s32 remaining = count - 1;
    if (count != 0) {
        do {
            *objects = 0;
            remaining--;
            objects++;
        } while (remaining != -1);
    }
}
