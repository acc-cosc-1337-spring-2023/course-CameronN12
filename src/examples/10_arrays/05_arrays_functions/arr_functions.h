#include<iostream>
#include<iomanip>

//header iterate_array function with int pointer array and size int for array size
const auto ROWS = 10;
const auto COLS = 10;

void populate_times_table(int times_table[][COLS], const int ROWS);
void display_times_table(int times_table[][COLS], const int ROWS);