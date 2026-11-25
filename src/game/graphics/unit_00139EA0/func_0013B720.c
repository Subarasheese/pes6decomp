/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    s32 mode, reserved04, first, zero, remaining[3];
} GraphicsCommand;
extern GraphicsCommand D_004FD154;
void func_0013B720(s32 first, s32 unused, s32 second, s32 third, s32 fourth) {
    D_004FD154.mode = 3;
    D_004FD154.first = first;
    D_004FD154.zero = 0;
    D_004FD154.remaining[0] = second;
    D_004FD154.remaining[1] = third;
    D_004FD154.remaining[2] = fourth;
}
