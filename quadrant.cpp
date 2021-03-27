int quadrant(double x, double y)
{
    int quad=0;
    if ((x==0 && y>0) || (x==0 && y<0)){
        return quad;
    }
    else if ((x>0 && y==0) || (x<0 && y==0)){
        return quad;
    }
    else if (x>0 && y>0){
       return quad=1;
    }
    else if (x<0 && y>0){
        return quad=2;
    }
    else if (x<0 && y<0){
        return quad=3;
    }
    else if (x>0 && y<0){
        return quad=4;
    }
    else
        return quad;
}

/*
Call	                ValueReturned
quadrant(12.4, 17.8)	1
quadrant(-2.3, 3.5)	  2
quadrant(-15.2, -3.1)	3
quadrant(4.5, -42.0)	4
quadrant(0.0, 3.14)	  0
*/
