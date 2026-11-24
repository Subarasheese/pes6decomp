/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_plan.h"
extern void func_008BCD10(RoleWork *, RoleCounts *, const s8 *);
void func_008BCB20(RoleWork *work, RoleCounts *roles) {
    s8 before[14];
    s32 i;
    s8 *n = roles->counts;
    if (!n)
        return;
    if (n[12] <= 0)
        return;
    if (n[10] > 0 || n[11] > 0 || n[12] > 1 || n[9] > 1) {
        for (i = 0; i < 14; i++)
            before[i] = n[i];
        if (n[5] < 2) {
            n[5]++;
            if (n[7] > 0 && n[10] + n[11] + n[12] < 3) {
                n[7]--;
                func_008BCD10(work, roles, before);
                return;
            }
        } else if (n[7] < 2)
            n[7]++;
        else if ((n[10] > 0 || n[11] > 0 || n[12] > 1) && n[9] < 2)
            n[9]++;
        else
            return;
        if (n[12] > 1)
            n[12]--;
        else if (n[11] > 0)
            n[11]--;
        else if (n[10] > 1) {
            n[10] = 0;
            n[12]++;
        } else if (n[10] > 0)
            n[10] = 0;
        else if (n[9] > 1)
            n[9]--;
        else
            return;
        func_008BCD10(work, roles, before);
    }
}
