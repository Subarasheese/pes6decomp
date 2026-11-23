/* compiler: mwcc-3.0.1b151 */
#include "pes6/image_layout.h"

f32 func_001F7310(LayoutImage *image, u16 index) {
    if (!image)
        return 0.0f;
    if (index >= image->layout->plainCount)
        return 0.0f;
    return (f32)-image->layout->plain[index].depth;
}
