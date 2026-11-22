/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern float D_00CBCE50[];
extern float D_00CBCE54[];
extern float D_00CBCE58[];
extern float D_00CBCE5C[];
extern float D_00CBCE60[];
extern float D_00CBCE64[];
extern float D_00CBCE68[];
extern float D_00CBCE6C[];
extern s8 D_00CBCE2D[];
extern void func_001A5520(float, float, float);

void func_00B9EDF0(void) {
    D_00CBCE2D[0] = 1;
    D_00CBCE60[0] = D_00CBCE50[0];
    D_00CBCE64[0] = D_00CBCE54[0];
    D_00CBCE68[0] = D_00CBCE58[0];
    D_00CBCE6C[0] = D_00CBCE5C[0];
    func_001A5520(D_00CBCE50[0], D_00CBCE54[0], D_00CBCE58[0]);
}
