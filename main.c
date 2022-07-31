#include <stdio.h>
#include "bool.h"
#include "types.h"
#include <limits.h>

int main() {
    printf("%s \n", bool_str(sizeof(int8) == 1));
    printf("%s \n", bool_str(sizeof(int16) == 2));
    printf("%s \n", bool_str(sizeof(int32) == 4));
    printf("%s \n", bool_str(sizeof(int64) == 8));

    printf("%d \n", uint8_max);
    printf("%d \n", uint16_max);
    printf("%u \n", uint32_max);
    printf("%llu \n", uint64_max);

    printf("%s \n", bool_str(uint8_max == UCHAR_MAX));
    printf("%s \n", bool_str(uint16_max== USHRT_MAX));
    printf("%s \n", bool_str(uint32_max== UINT_MAX));
    printf("%s \n", bool_str(uint64_max== ULLONG_MAX));

    printf("%d \n", int8_min);
    printf("%d \n", int16_min);
    printf("%i \n", int32_min);
    printf("%lld \n", int64_min);

    printf("%s \n", bool_str(int8_max == CHAR_MAX));
    printf("%s \n", bool_str(int16_max== SHRT_MAX));
    printf("%s \n", bool_str(int32_max== INT_MAX));
    printf("%s \n", bool_str(int64_max== LLONG_MAX));

    printf("%s \n", bool_str(int8_min == CHAR_MIN));
    printf("%s \n", bool_str(int16_min== SHRT_MIN));
    printf("%s \n", bool_str(int32_min== INT_MIN));
    printf("%s \n", bool_str(int64_min== LLONG_MIN));

    return 0;
}
