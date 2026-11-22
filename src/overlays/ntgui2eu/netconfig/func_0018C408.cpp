/* compiler: ee-gcc-2.9-G0 */
/* Adapted from OpenThievius/sly2-decomp, src/sdk/fun_0023e260.cpp. See THIRD_PARTY.md. */
// SPDX-License-Identifier: GPL-3.0-or-later
extern "C" {
typedef unsigned long long UDI;
typedef unsigned int USI;
typedef struct { int cls; USI sign; int exp; UDI frac; } fpd;
typedef struct { int cls; USI sign; int exp; USI frac; } fpf;
extern void func_0023D468(double*, fpd*);
extern fpd* func_0023D508(fpd*, fpd*, fpd*);
extern double func_0023D338(fpd*);
extern int func_0023DC18(fpd*, fpd*);
extern double func_0023DF70(int, USI, int, UDI);
extern float func_0018B898(fpf*);
extern void func_0023E108(float*, fpf*);
extern float func_0018C408(int, USI, int, USI);

float func_0018C408(int cls, USI sign, int exp, USI frac) { fpf in; in.cls = cls; in.sign = sign; in.exp = exp; in.frac = frac; return func_0018B898(&in); }
}
