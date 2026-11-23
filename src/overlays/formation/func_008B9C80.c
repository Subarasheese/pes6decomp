/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern void *func_002E45B0(void);
extern void func_002E44E0(void *, f32);
void *func_008B9C80(f32 value) {
    void *item = func_002E45B0();
    func_002E44E0(item, value);
    return item;
}
