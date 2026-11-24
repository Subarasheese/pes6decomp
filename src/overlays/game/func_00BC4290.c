/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef void (*MatchPresentation)(void);
extern void func_00BC4280(void), func_00BC4130(void), func_00BC40C0(void), func_00BC3FF0(void),
    func_00BC3FE0(void);
void func_00BC4290(s32 index) {
    MatchPresentation scenes[5] = {func_00BC4280, func_00BC4130, func_00BC40C0, func_00BC3FF0,
                                   func_00BC3FE0};
    if (scenes[index])
        scenes[index]();
}
