package main

import (
	"fmt"
	"math"
)

func main() {
  var rp,ip,z1,z2,a,b,c,d float64;
	fmt.Scanf("%f %f %f", &a, &b, &c);
	d = math.Pow(b, 2.0) - 4.0*a*c;
	fmt.Println(d);
  rp=((-b)/(2.0*a));
  ip=(math.Sqrt(math.Abs(d))/(2*a));
  if d >= 0.0{
    z1=rp+ip;
    z2=rp-ip;
    fmt.Println(z1);
    fmt.Println(z2);
  }else{    
    r1:=complex(rp, ip);
    r2:=complex(rp, -ip);
    fmt.Println(r1);
    fmt.Println(r2);
  }
  }
