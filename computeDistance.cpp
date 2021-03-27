double computeDistance (int x1, int y1, int x2, int y2)
{
    long double d = sqrt( pow(x2-x1, 2) + pow(y2-y1, 2));
    return d;
}

/*
coordinates x1, y1, x2, and y2 as parameters and computes the distance between points (x1, y1) and (x2, y2) on the Cartesian plane
computeDistance(10, 2, 3, 5) would return 7.615773105863909
*/
