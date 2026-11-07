/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"


void func_0012C3D8(s32, s32, int);           /* extern */
void func_0012C550(s32, s32, int);           /* extern */
s32 func_0012D160(s32);                             /* extern */
extern char D_005B59B4[];
extern char D_005B59B8[];

void func_0012DAE0(s32 arg0) {
    s32 temp_s1;

    temp_s1 = (*(s32 *)D_005B59B4);
    (*(s32 *)D_005B59B8) = arg0;
    if (arg0 == -1) {
        func_0012C3D8(0, -1, 0);
        func_0012C550(func_0012D160(temp_s1), temp_s1, 0);
    } else if (temp_s1 != arg0) {
        func_0012C3D8(func_0012D160(arg0), arg0, 0);
        func_0012C550(func_0012D160(temp_s1), temp_s1, 0);
    }
}
