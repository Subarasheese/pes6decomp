/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_highlights.h"

extern u8 D_00CBD311[];
extern s32 D_003EA780;
extern s32 D_003EA7A0;
extern u32 D_003EA794;
extern void Pes6World_SetActive(s32);
extern void func_00182B20(s32);
extern void func_00182B30(s32);
extern void func_002727C0(s32);
extern void func_00186220(void);
extern void func_00B25F80(s32);
extern s32 func_00152130(s32, s32);
extern s32 func_00208250(s32);
extern s32 func_001A5F20(s32);
extern s32 func_00BA1420(void);
extern s32 func_00A1C780(void);
extern void func_00B79620(s32);
extern void func_00B27430(s32);

void func_00BCBC40(void) {
    s32 ready;
    s32 marker;
    if (D_003EA794 < 40)
        D_003EA794++;
    else
        func_00B27430(1);
    ready = func_00BA1420();
    if (D_003EA7A0 && (ready || func_00A1C780()))
        D_003EA7A0 = 0;
    if (!D_003EA7A0 && func_00152130(1, 16)) {
        func_002727C0(9);
        func_00186220();
        func_00B25F80(1);
        D_003EA794 = 0;
        Pes6World_SetActive(0);
        func_00182B30(0);
        func_00182B20(0);
        marker = clipMarker(D_00CBD390[D_00CBD311[0]]);
        if (marker != 0xffff && func_00208250(marker) != func_001A5F20(4)) {
            func_00B79620(func_00208250(marker));
            D_003EA780 = 4;
        } else
            D_003EA780 = 5;
    }
}
