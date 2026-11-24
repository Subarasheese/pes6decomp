/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_highlights.h"

extern u8 D_00CBD311[];
extern u8 D_00591BCB[];
extern s32 D_003EA780;
extern s32 D_003EA79C;
extern u32 D_003EA794;
extern void func_0017E150(s32);
extern void Pes6World_SetActive(s32);
extern void func_00182B20(s32);
extern void func_00182B30(s32);
extern void func_009A7530(s32);
extern void func_0020B3E0(void);
extern void func_00BA1370(void);
extern s32 func_00152130(s32, s32);
extern s32 func_002DCA30(void);
extern s32 func_00208250(s32);
extern s32 func_001A5F20(s32);
extern void func_00B79620(s32);

void func_00BCACB0(void) {
    s32 marker;
    if (!func_00152130(1, 16))
        return;
    if (func_002DCA30()) {
        func_0017E150(1);
        func_00182B20(1);
        func_009A7530(0);
        if (D_00591BCB[0] == 1)
            func_0020B3E0();
        D_003EA780 = 12;
    } else {
        D_003EA79C = 1;
        func_00BA1370();
        D_00CBD311[0] = 0;
        Pes6World_SetActive(0);
        func_00182B30(0);
        func_00182B20(0);
        marker = clipMarker(D_00CBD390[D_00CBD311[0]]);
        if (marker != 0xffff && func_00208250(marker) != func_001A5F20(4)) {
            func_00B79620(func_00208250(marker));
            D_003EA780 = 4;
        } else
            D_003EA780 = 5;
        D_003EA794 = 0;
    }
}
