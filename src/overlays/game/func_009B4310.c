/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern float D_00CBAA14[];
extern u16 D_00CBAA00[];
float func_009B4310(void) {
    float distance = D_00CBAA14[0] - ((float)D_00CBAA00[0]);
    if (distance < 0.0f) {
        distance = distance + 299.0f;
    }
    return distance;
}
