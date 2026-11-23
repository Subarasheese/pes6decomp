/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "pes6/widget_color.h"

extern ColorWidget **D_00CFF400, **D_00CFF3EC;
void func_00CE4D70(s32 index) {
    WidgetColor color;
    func_0020E310(5, &color);
    func_001DF460(D_00CFF400[index], &color);
    func_001DF460(D_00CFF3EC[index], &color);
}
