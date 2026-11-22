/* compiler: ee-gcc-2.9 */
#include "types.h"
extern void func_001A38B0(s32, s32, s32, s32 *);
void func_001A3E80(int a0, int a1, int a2, int a3) {
    int buf[4];
    func_001A38B0(a0, a1, a2, buf);
}
