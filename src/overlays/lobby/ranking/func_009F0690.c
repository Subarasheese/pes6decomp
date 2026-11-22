/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_0020E310(s32, s8 *);
extern s32 func_0081DDE0(void *, void *);

void func_009F0690(int arg0, int arg1) {
    s8 buffer[4];

    func_0020E310(arg1, buffer);
    if (arg0 != 0) {
        func_0081DDE0((void *)arg0, buffer);
    }
}
