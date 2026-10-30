/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A5520(float, float, float);
extern char D_00CBCE2D[];
extern char D_00CBCE50[];
extern char D_00CBCE54[];
extern char D_00CBCE58[];
extern char D_00CBCE60[];
extern char D_00CBCE64[];
extern char D_00CBCE68[];

void func_00B9EDF0(void) {
    (*(s8 *)D_00CBCE2D) = 1;
    (*(f32 *)D_00CBCE60) = (*(f32 *)D_00CBCE50);
    (*(f32 *)D_00CBCE64) = (*(f32 *)D_00CBCE54);
    (*(f32 *)D_00CBCE68) = (*(f32 *)D_00CBCE58);
    func_001A5520((*(f32 *)D_00CBCE50), (*(f32 *)D_00CBCE54), (*(f32 *)D_00CBCE58));
}
