int digitSum (int num)
{
    if (num == 0)
    {
        return num;
    }
    return digitSum(num/10) + num%10; 
}

/*
1729 should return 19
*/
