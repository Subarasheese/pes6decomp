/* compiler: ee-gcc-2.9-G0 */
/* Adapted from a GT4 decompilation source via the PES6 resident code.
 * See THIRD_PARTY.md for the MIT attribution. */
struct Time { unsigned char h, d, min; };
void func_00197530(struct Time *);
void func_00197760(struct Time *);
void func_00197790(struct Time *);
void func_00197598(struct Time *);

void func_001977B8(struct Time *t, int d)
{
    int m;
    func_00197530(t);
    m = t->min + d;
    if (m >= 0) {
        while (m >= 60) {
            func_00197760(t);
            m -= 60;
        }
    } else {
        while (m < 0) {
            m += 60;
            func_00197790(t);
        }
    }
    t->min = m;
    func_00197598(t);
}
