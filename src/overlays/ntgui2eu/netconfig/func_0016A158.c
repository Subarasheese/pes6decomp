/* compiler: ee-gcc-2.9-Os-G0 */
#include "types.h"
extern void func_0016A0E8(void *object);
void func_0016A158(void **objects, s32 count) {
    s32 remaining = count - 1;
    if (count != 0) {
        do {
            if (*objects) {
                func_0016A0E8(*objects);
                *objects = 0;
            }
            remaining--;
            objects++;
        } while (remaining != -1);
    }
}
