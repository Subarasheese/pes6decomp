/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef void (*MatchPresentation)(void);
extern void func_00B78FB0(void), func_00B78F60(void), func_00B78F30(void), func_00B78F00(void),
    func_00B78ED0(void), func_00B78EC0(void);
void func_00B78FC0(s32 index) {
    MatchPresentation scenes[6] = {func_00B78FB0, func_00B78F60, func_00B78F30,
                                   func_00B78F00, func_00B78ED0, func_00B78EC0};
    if (scenes[index])
        scenes[index]();
}
