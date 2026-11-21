/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 func_00261150(void);

extern char D_0058D348[];
extern char D_0058D34A[];
extern char D_0058D350[];
extern char D_0058D352[];
extern char D_0058D370[];
extern char D_0058D374[];

void func_002610B0(void) {
    f32 value;
    f32 value2;

    value = (f32)(*(s16 *)D_0058D350) / (f32)(*(s16 *)D_0058D348);
    (*(f32 *)D_0058D370) = value;
    value2 = (f32)(*(s16 *)D_0058D352) / (f32)(*(s16 *)D_0058D34A);
    (*(f32 *)D_0058D374) = value2;
    if (!((value != 1.0f) || (value2 != 1.0f))) {
        return;
    }
    func_00261150();
}
