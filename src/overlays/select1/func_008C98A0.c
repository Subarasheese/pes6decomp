/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_00153FE0(s32, s32);
s32 func_0021FE50(s32);
s32 func_0021FE80(s32, s32);
s32 func_0021FEB0(s32);
s32 func_002206F0(s32);
extern char D_008E78D0[];
extern char D_008E78D4[];
extern char D_008E78D8[];
extern char D_008E78DC[];
extern char D_008E78E0[];

void func_008C98A0(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;

    temp_v0 = func_00153FE0(5, func_002206F0(5));
    (*(s32 *)D_008E78D0) = temp_v0;
    func_0021FE80(temp_v0, 0);
    temp_v0_2 = func_00153FE0(5, func_002206F0(9));
    (*(s32 *)D_008E78D4) = temp_v0_2;
    func_0021FE80(temp_v0_2, 1);
    temp_v0_3 = func_00153FE0(5, func_002206F0(0xA));
    (*(s32 *)D_008E78D8) = temp_v0_3;
    func_0021FE80(temp_v0_3, 2);
    temp_v0_4 = func_00153FE0(5, func_002206F0(7));
    (*(s32 *)D_008E78DC) = temp_v0_4;
    func_0021FE80(temp_v0_4, 3);
    temp_v0_5 = func_00153FE0(5, func_002206F0(8));
    (*(s32 *)D_008E78E0) = temp_v0_5;
    func_0021FE80(temp_v0_5, 4);
    func_0021FE50(5);
    func_0021FEB0(0);
}
