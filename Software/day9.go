package main
import "fmt"

func main(){
	var n int;
	sum:=0;
	fmt.Scanf("%d",&n);
	for i:=1;i<=n;i++{
	    if n % i==0 && i % 2!=0{
	       sum+=i; 
	    }
	}
	fmt.Println(sum);
}
