/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    s32 first, second, third, fourth;
    void *fifth;
} ModelSettings;
typedef struct {
    u32 reserved00;
    ModelSettings *settings;
} ModelResources;
extern ModelResources *D_0051FF74[];
extern void *D_0051FF64[], *D_0051FF68[], *D_0051FF6C[], *D_0051FF70[], *D_0051FF80[],
    *D_0051FF88[], *D_0051FF90[], *D_0051FF94[], *D_0051FF98[], *D_0051FF9C[], *D_0051FFA0[],
    *D_0051FFA4[];
extern s32 D_0051FF84[];
extern void func_00145750(void *), func_00147010(void *, s32), func_00151550(void *),
    func_001820F0(void *, s32, s32, s32);
extern void func_00182230(void), func_001864B0(s32), func_001873C0(void), func_00188A60(void *),
    func_00189610(void), func_001896D0(void);
extern s32 func_001870F0(s32), func_001884A0(s32, s32), func_001894A0(s32);
extern void func_00189A20(void), func_00189AC0(void), func_0018A210(void), func_0018D7F0(void),
    func_00199BD0(void), func_0019E100(void), func_0019E450(void), func_0019E500(void),
    func_0019EDC0(void);
void func_00182D20(void) {
    ModelSettings **settings;

    func_00182230();
    func_00151550(D_0051FF64[0]);
    settings = &D_0051FF74[0]->settings;
    func_001884A0(0, (*settings)->first);
    func_001884A0(2, (*settings)->second);
    func_001870F0((*settings)->third);
    func_001894A0((*settings)->fourth);
    func_00188A60((*settings)->fifth);
    func_001820F0(D_0051FF70[0], 0, 0, 0x1B);
    func_00151550(D_0051FF6C[0]);
    func_00151550(D_0051FF68[0]);
    func_0019E500();
    func_0019E450();
    func_001873C0();
    func_00147010(D_0051FF90[0], 0x27D8);
    func_00147010(D_0051FF94[0], 0x27DA);
    func_00147010(D_0051FF98[0], 0x27D9);
    func_00145750(D_0051FF90[0]);
    func_00145750(D_0051FF94[0]);
    func_00145750(D_0051FF98[0]);
    func_001820F0(D_0051FF80[0], 2, 3, 1);
    func_001820F0(D_0051FF80[0], 1, 7, 1);
    func_001820F0(D_0051FF80[0], 0, 0x15, 1);
    func_001884A0(1, D_0051FF84[0]);
    func_00151550(D_0051FF88[0]);
    func_001896D0();
    func_001820F0(D_0051FF9C[0], 0, 0xF, 3);
    func_001820F0(D_0051FFA0[0], 0, 0xE, 1);
    func_00151550(D_0051FFA4[0]);
    func_0019E100();
    func_0018A210();
    func_0019EDC0();
    func_00189610();
    func_00189A20();
    func_00189AC0();
    func_0018D7F0();
    func_00199BD0();
    func_001864B0(0x1FFFF);
}
