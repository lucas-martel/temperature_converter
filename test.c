#include <stdio.h>
#include "temperature_converter.h"
#include <assert.h>

void test_fahrenheit_to_celsius() {
    assert(fahrenheit_to_celsius(32) == 0);
    assert(fahrenheit_to_celsius(212) == 100);
}

void test_celsius_to_fahrenheit() {
    assert(celsius_to_fahrenheit(0) == 32);
    assert(celsius_to_fahrenheit(100) == 212);
}

int main() {
    test_fahrenheit_to_celsius();
    test_celsius_to_fahrenheit();
    printf("All tests passed!\n");
    return 0;
}
