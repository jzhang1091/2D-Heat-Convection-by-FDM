#ifndef REGULAR_GRID
#define REGULAR_GRID

double get_dx (double x_extent, int nx) {
    return x_extent/nx;
}

double get_dy (double y_extent, int ny) {
    return y_extent/ny;
}

#endif