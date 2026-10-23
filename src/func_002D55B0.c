/* compiler: mwcc-3.0.1b210 */
struct Counter { int limit; int current; };
int func_002D55B0(struct Counter *counter) {
    int result = 0;
    if (counter != 0 && counter->limit > 0) {
        if (counter->current >= counter->limit) {
            result = 1;
        } else {
            ++counter->current;
        }
    }
    return result;
}
