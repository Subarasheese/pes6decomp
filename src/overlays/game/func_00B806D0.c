/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_substitution.h"
extern u8 D_00C9A91C[], D_00C9A91D[];
extern void func_00B27430(u32), func_009A06A0(void), func_00B7FE70(void), func_00B80480(void);
extern s32 Pes6File_AllChannelsIdle(void), func_00B82360(void);
extern u8 D_00591EF6[], D_00591EF7[], D_00591F12[], D_00591DB4[], D_00591F24[];
void func_00B806D0(void) {
    D_00591F12[0] = 0;
    D_00591DB4[0] = 0;
    func_00B27430(1);
    if (!Pes6File_AllChannelsIdle())
        return;
    {
        s32 ready = 0;
        if ((D_00591EF6[0] || D_00591EF7[0]) && D_00591F24[0] != 7 && func_00B82360() == 1)
            ready = 1;
        if (ready) {
            D_00C9A91C[0] = 0;
            D_00C9A91D[0] = 0;
            D_00C9A710.update = func_00B80480;
        } else {
            func_009A06A0();
            D_00C9A710.update = func_00B7FE70;
        }
    }
}
