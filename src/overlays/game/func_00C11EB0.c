/* compiler: mwcc-3.0.1b151 */
#include "types.h"

void func_00C11EB0(void *arg0, int arg1, int arg2) {
    float value;
    float value2;

    if (arg0 != 0) {
        value = (float)arg1 * 3366.25f - 13465.0f;
        *(float *)arg0 = value;
        value2 = (float)arg2 * 2909.6667f - 8729.0f;
        *(float *)((int)arg0 + 4) = value2;
        *(float *)((int)arg0 + 8) = ((((float)arg1 + 0.5f) * 3366.25f - 13465.0f) - value) * 2.0f;
        *(float *)((int)arg0 + 0xc) =
            ((((float)arg2 + 0.5f) * 2909.6667f - 8729.0f) - value2) * 2.0f;
    }
}
