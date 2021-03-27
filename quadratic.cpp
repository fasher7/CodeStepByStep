void quadratic (double xx, double x, double cons, double &root1, double &root2)
{
    root1 = (-x + sqrt((-x)*(-x) - (4*xx*cons)))/(2*xx);
    root2 = (-x - sqrt((-x)*(-x) - (4*xx*cons)))/(2*xx);
    return;
}

/*
quadratic(1, -3, -4, root1, root2); should set root1 to 4 and root2 to -1
*/
