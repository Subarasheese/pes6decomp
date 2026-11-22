/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct DisplayObject DisplayObject;
typedef struct {
    float x, y, width, height;
} DisplayBounds;
typedef DisplayBounds *(*BoundsReader)(DisplayObject *, DisplayBounds **, u16);
extern DisplayBounds *func_001F7660(DisplayObject *, DisplayBounds **, u16);
extern DisplayBounds *func_001F7560(DisplayObject *, DisplayBounds **, u16);
extern DisplayBounds *func_001F7460(DisplayObject *, DisplayBounds **, u16);
DisplayBounds *func_001F6FC0(DisplayObject *object, DisplayBounds *bounds, u16 index, u32 mode) {
    BoundsReader readers[3] = {func_001F7660, func_001F7560, func_001F7460};
    if (object && bounds)
        return readers[mode](object, &bounds, index);
    return 0;
}
