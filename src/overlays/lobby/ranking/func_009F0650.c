/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_0020E310(s32, s8 *);
extern s32 func_0081DDE0(void *, void *);

int func_009F0650(int arg0) {
    int value;
    s8 buffer[4];

    value = func_0020E310(2, buffer);
    if (arg0 != 0) {
        value = func_0081DDE0((void *)arg0, buffer);
    }
    return value;
}
