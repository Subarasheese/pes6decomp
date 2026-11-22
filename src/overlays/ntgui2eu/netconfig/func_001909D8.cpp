/* compiler: ee-gcc-2.9-G0 */
/* SPDX-License-Identifier: GPL-3.0-or-later */
/* Adapted from OpenThievius/sly2-decomp, src/sdk/__floatdisf.cpp. See THIRD_PARTY.md. */
extern "C" {
double func_0018B5E8(int);
double func_0018B070(double, double);
double func_0018AFB0(double, double);
float func_0018B840(double);
float func_001909D8(long value) {
    if ((unsigned long)(value + 0x1FFFFFFFFFFFFFL) > 0x3FFFFFFFFFFFFEUL) {
        if ((int)value & 0x7FF) {
            value |= 0x800;
        }
    }
    double high = func_0018B5E8((int)(value >> 32));
    high = func_0018B070(high, 65536.0);
    high = func_0018B070(high, 65536.0);
    int low = (int)(value & 0xFFFFFFFFUL);
    double result = func_0018B5E8(low);
    if (low < 0) {
        result = func_0018AFB0(result, 4294967296.0);
    }
    return func_0018B840(func_0018AFB0(high, result));
}
}
