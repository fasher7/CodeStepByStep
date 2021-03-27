float computeTax(float salary)
{
    float tax;
    if (salary>0 && salary <=7150)
    {
        tax = 0.1*salary;
    }
    else if (salary>7150 && salary <=29050)
    {
        tax = 715 + 0.15*(salary-7150);
    }
    else if (salary>29050 && salary <=70350)
    {
        tax = 4000 + 0.25*(salary-29050);
    }
    else if (salary>70350)
    {
        tax = 14325 + 0.28*(salary-70350);
    }
    return tax;
}

/*
over	  butNotOver FlatAmount	plus%	  ofExcessOver
$0	    $7,150	   $0	        10%	    $0
$7150	  $29,050	   $715	      15%	    $7,150
$29,050	$70,350	   $4000	    25%	    $29,050
$70,350	unlimited	 $14,325	  28%	    $70,350
*/
